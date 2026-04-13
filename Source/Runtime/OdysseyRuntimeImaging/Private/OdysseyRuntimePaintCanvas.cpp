#include "OdysseyRuntimePaintCanvas.h"

#include "Engine/TextureRenderTarget2D.h"
#include "RHI.h"
#include "RHICommandList.h"
#include "RenderingThread.h"
#include "TextureResource.h"

namespace
{
	static constexpr EPixelFormat GCanvasFormat = PF_B8G8R8A8;
}

void UOdysseyRuntimePaintCanvas::InitializeCanvas(int32 InWidth, int32 InHeight, const FLinearColor& InClearColor)
{
	Width = FMath::Max(1, InWidth);
	Height = FMath::Max(1, InHeight);
	ClearColor = InClearColor;

	PixelData.SetNum(Width * Height);
	PixelData.Init(ToColor(ClearColor), PixelData.Num());

	EnsureTexture();
	CommitToTexture();
}

void UOdysseyRuntimePaintCanvas::SetTexture(UTextureRenderTarget2D* InTexture)
{
	if (Texture == InTexture)
	{
		return;
	}

	Texture = InTexture;
	if (IsInitialized() && Texture)
	{
		CommitToTexture();
	}
}

void UOdysseyRuntimePaintCanvas::ClearCanvas(const FLinearColor& InClearColor)
{
	if (!IsInitialized())
	{
		return;
	}

	ClearColor = InClearColor;
	PixelData.Init(ToColor(ClearColor), PixelData.Num());
	CommitToTexture();
}

bool UOdysseyRuntimePaintCanvas::IsInitialized() const
{
	return Width > 0 && Height > 0 && PixelData.Num() == Width * Height;
}

int32 UOdysseyRuntimePaintCanvas::GetPixelCount() const
{
	return PixelData.Num();
}

TArray<FColor>& UOdysseyRuntimePaintCanvas::GetMutablePixels()
{
	return PixelData;
}

const TArray<FColor>& UOdysseyRuntimePaintCanvas::GetPixels() const
{
	return PixelData;
}

void UOdysseyRuntimePaintCanvas::SetPixels(const TArray<FColor>& InPixels)
{
	if (!IsInitialized() || InPixels.Num() != PixelData.Num())
	{
		return;
	}

	PixelData = InPixels;
	CommitToTexture();
}

void UOdysseyRuntimePaintCanvas::CommitToTexture()
{
	if (!IsInitialized())
	{
		return;
	}

	EnsureTexture();
	if (!Texture)
	{
		return;
	}

	FTextureRenderTargetResource* RenderTargetResource = Texture->GameThread_GetRenderTargetResource();
	if (!RenderTargetResource)
	{
		return;
	}

	FTextureRHIRef RenderTargetTexture = RenderTargetResource->GetRenderTargetTexture();
	if (!RenderTargetTexture.IsValid())
	{
		return;
	}

	TArray<FColor> UploadData = PixelData;
	const uint32 SourcePitch = static_cast<uint32>(Width * sizeof(FColor));
	const FUpdateTextureRegion2D UpdateRegion(0, 0, 0, 0, static_cast<uint32>(Width), static_cast<uint32>(Height));

	ENQUEUE_RENDER_COMMAND(OdysseyRuntimePaintCanvasUpload)(
		[RenderTargetTexture, UploadData = MoveTemp(UploadData), SourcePitch, UpdateRegion](FRHICommandListImmediate& RHICmdList) mutable
		{
			FRHITexture2D* Texture2D = RenderTargetTexture->GetTexture2D();
			if (!Texture2D)
			{
				return;
			}

			RHIUpdateTexture2D(
				Texture2D,
				0,
				UpdateRegion,
				SourcePitch,
				reinterpret_cast<const uint8*>(UploadData.GetData()));
		});
}

void UOdysseyRuntimePaintCanvas::EnsureTexture()
{
	if (!IsInitialized())
	{
		return;
	}

	const bool bNeedsNewTexture =
		!Texture ||
		Texture->GetSurfaceWidth() != Width ||
		Texture->GetSurfaceHeight() != Height ||
		Texture->GetFormat() != GCanvasFormat;

	if (!Texture)
	{
		Texture = NewObject<UTextureRenderTarget2D>(this, TEXT("OdysseyRuntimePaintCanvasRenderTarget"), RF_Transient);
	}

	if (!Texture)
	{
		return;
	}

	Texture->ClearColor = ClearColor;
	Texture->Filter = TF_Bilinear;
	Texture->bAutoGenerateMips = false;

	if (bNeedsNewTexture)
	{
		Texture->InitCustomFormat(Width, Height, GCanvasFormat, false);
		Texture->UpdateResourceImmediate(true);
	}
}

FColor UOdysseyRuntimePaintCanvas::ToColor(const FLinearColor& InColor)
{
	return InColor.ToFColor(true);
}
