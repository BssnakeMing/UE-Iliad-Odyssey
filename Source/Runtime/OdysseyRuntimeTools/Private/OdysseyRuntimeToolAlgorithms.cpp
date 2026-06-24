#include "OdysseyRuntimeToolAlgorithms.h"

namespace
{
	constexpr int32 Neighbors[4][2] = { {1, 0}, {-1, 0}, {0, 1}, {0, -1} };

	FORCEINLINE bool IsInside(int32 Width, int32 Height, int32 X, int32 Y)
	{
		return X >= 0 && X < Width && Y >= 0 && Y < Height;
	}

	FORCEINLINE bool ColorsEqual(const FColor& A, const FColor& B, uint8 Tolerance = 0)
	{
		return
			FMath::Abs(int32(A.R) - int32(B.R)) <= Tolerance &&
			FMath::Abs(int32(A.G) - int32(B.G)) <= Tolerance &&
			FMath::Abs(int32(A.B) - int32(B.B)) <= Tolerance &&
			FMath::Abs(int32(A.A) - int32(B.A)) <= Tolerance;
	}

	FORCEINLINE void IncludeDirtyRegion(FIntRect& InOutRegion, const FIntRect& Region)
	{
		if (Region.Width() <= 0 || Region.Height() <= 0)
		{
			return;
		}

		if (InOutRegion.Width() <= 0 || InOutRegion.Height() <= 0)
		{
			InOutRegion = Region;
			return;
		}

		InOutRegion.Min.X = FMath::Min(InOutRegion.Min.X, Region.Min.X);
		InOutRegion.Min.Y = FMath::Min(InOutRegion.Min.Y, Region.Min.Y);
		InOutRegion.Max.X = FMath::Max(InOutRegion.Max.X, Region.Max.X);
		InOutRegion.Max.Y = FMath::Max(InOutRegion.Max.Y, Region.Max.Y);
	}
}

bool FOdysseyRuntimeToolAlgorithms::DrawLine(
	TArray<FColor>& Pixels,
	int32 Width,
	int32 Height,
	const FIntPoint& Start,
	const FIntPoint& End,
	const FOdysseyRuntimeToolSettings& Settings,
	bool bEraserMode,
	float& InOutDistanceSinceLastStamp,
	FIntRect* OutDirtyRegion)
{
	if (Width <= 0 || Height <= 0 || Pixels.Num() != Width * Height)
	{
		return false;
	}

	FIntRect DirtyRegion(0, 0, 0, 0);
	const float Spacing = FMath::Max(1.0f, Settings.FreehandStep);
	InOutDistanceSinceLastStamp = FMath::Clamp(InOutDistanceSinceLastStamp, 0.0f, Spacing);

	const FVector2D Segment(
		static_cast<float>(End.X - Start.X),
		static_cast<float>(End.Y - Start.Y));
	const float SegmentLength = Segment.Size();
	if (SegmentLength <= KINDA_SMALL_NUMBER)
	{
		if (InOutDistanceSinceLastStamp <= KINDA_SMALL_NUMBER)
		{
			if (DrawDisc(Pixels, Width, Height, Start, Settings, bEraserMode, &DirtyRegion))
			{
				if (OutDirtyRegion)
				{
					*OutDirtyRegion = DirtyRegion;
				}
				return true;
			}
		}
		return false;
	}

	const FVector2D Direction = Segment / SegmentLength;
	float DistanceToNextStamp = Spacing - InOutDistanceSinceLastStamp;
	if (InOutDistanceSinceLastStamp <= KINDA_SMALL_NUMBER)
	{
		DistanceToNextStamp = Spacing;
	}

	int32 DrawnCount = 0;
	for (float DistanceAlong = DistanceToNextStamp; DistanceAlong <= SegmentLength + KINDA_SMALL_NUMBER; DistanceAlong += Spacing)
	{
		const int32 X = FMath::RoundToInt(static_cast<float>(Start.X) + Direction.X * DistanceAlong);
		const int32 Y = FMath::RoundToInt(static_cast<float>(Start.Y) + Direction.Y * DistanceAlong);
		FIntRect DiscRegion(0, 0, 0, 0);
		if (DrawDisc(Pixels, Width, Height, FIntPoint(X, Y), Settings, bEraserMode, &DiscRegion))
		{
			IncludeDirtyRegion(DirtyRegion, DiscRegion);
			++DrawnCount;
		}
	}

	if (DrawnCount > 0)
	{
		InOutDistanceSinceLastStamp = FMath::Fmod(InOutDistanceSinceLastStamp + SegmentLength, Spacing);
		if (FMath::IsNearlyEqual(InOutDistanceSinceLastStamp, Spacing, KINDA_SMALL_NUMBER))
		{
			InOutDistanceSinceLastStamp = 0.0f;
		}
	}
	else
	{
		InOutDistanceSinceLastStamp = FMath::Min(Spacing, InOutDistanceSinceLastStamp + SegmentLength);
	}

	if (DirtyRegion.Width() <= 0 || DirtyRegion.Height() <= 0)
	{
		return false;
	}

	if (OutDirtyRegion)
	{
		*OutDirtyRegion = DirtyRegion;
	}
	return true;
}

bool FOdysseyRuntimeToolAlgorithms::FloodFill(
	TArray<FColor>& Pixels,
	int32 Width,
	int32 Height,
	const FIntPoint& Seed,
	const FOdysseyRuntimeToolSettings& Settings)
{
	if (Width <= 0 || Height <= 0 || Pixels.Num() != Width * Height || !IsInside(Width, Height, Seed.X, Seed.Y))
	{
		return false;
	}

	const int32 StartIndex = ToIndex(Width, Seed.X, Seed.Y);
	const FColor TargetColor = Pixels[StartIndex];
	const FColor FillColor = Settings.Color.ToFColor(true);
	const uint8 Tolerance = static_cast<uint8>(FMath::RoundToInt(FMath::Clamp(Settings.Tolerance, 0.0f, 1.0f) * 255.0f));
	if (ColorsEqual(TargetColor, FillColor, Tolerance))
	{
		return false;
	}

	TArray<FIntPoint> Queue;
	Queue.Reserve(Width * Height / 8);
	Queue.Add(Seed);

	TBitArray<> Visited(false, Width * Height);
	Visited[StartIndex] = true;

	const float Opacity = FMath::Clamp(Settings.Opacity, 0.0f, 1.0f);
	const FLinearColor FillLinear = Settings.Color;

	for (int32 Cursor = 0; Cursor < Queue.Num(); ++Cursor)
	{
		const FIntPoint Point = Queue[Cursor];
		const int32 Index = ToIndex(Width, Point.X, Point.Y);
		FColor& Dest = Pixels[Index];
		BlendPixel(Dest, FillLinear, Opacity, false);

		for (const int32* Neighbor : Neighbors)
		{
			const int32 NX = Point.X + Neighbor[0];
			const int32 NY = Point.Y + Neighbor[1];
			if (!IsInside(Width, Height, NX, NY))
			{
				continue;
			}

			const int32 NIndex = ToIndex(Width, NX, NY);
			if (Visited[NIndex])
			{
				continue;
			}

			Visited[NIndex] = true;
			if (ColorsEqual(Pixels[NIndex], TargetColor, Tolerance))
			{
				Queue.Add(FIntPoint(NX, NY));
			}
		}
	}

	return true;
}

bool FOdysseyRuntimeToolAlgorithms::DrawDisc(
	TArray<FColor>& Pixels,
	int32 Width,
	int32 Height,
	const FIntPoint& Center,
	const FOdysseyRuntimeToolSettings& Settings,
	bool bEraserMode,
	FIntRect* OutDirtyRegion)
{
	const float Radius = FMath::Max(0.5f, Settings.Size * 0.5f);
	const float RadiusSq = Radius * Radius;
	const float Hardness = FMath::Clamp(Settings.Hardness, 0.0f, 1.0f);
	const float InnerRadius = FMath::Max(0.5f, Radius * Hardness);
	const float InnerRadiusSq = InnerRadius * InnerRadius;

	const int32 MinX = FMath::Max(0, FMath::FloorToInt(Center.X - Radius));
	const int32 MaxX = FMath::Min(Width - 1, FMath::CeilToInt(Center.X + Radius));
	const int32 MinY = FMath::Max(0, FMath::FloorToInt(Center.Y - Radius));
	const int32 MaxY = FMath::Min(Height - 1, FMath::CeilToInt(Center.Y + Radius));

	const FLinearColor SourceColor = Settings.Color;
	const float BaseOpacity = FMath::Clamp(Settings.Opacity, 0.0f, 1.0f);
	if (BaseOpacity <= KINDA_SMALL_NUMBER)
	{
		return false;
	}

	bool bDrewAnyPixel = false;
	for (int32 Y = MinY; Y <= MaxY; ++Y)
	{
		for (int32 X = MinX; X <= MaxX; ++X)
		{
			const float DX = static_cast<float>(X - Center.X);
			const float DY = static_cast<float>(Y - Center.Y);
			const float DistanceSq = DX * DX + DY * DY;
			if (DistanceSq > RadiusSq)
			{
				continue;
			}

			float Falloff = 1.0f;
			if (DistanceSq > InnerRadiusSq)
			{
				const float Distance = FMath::Sqrt(DistanceSq);
				const float Denominator = FMath::Max(0.001f, Radius - InnerRadius);
				Falloff = 1.0f - FMath::Clamp((Distance - InnerRadius) / Denominator, 0.0f, 1.0f);
			}

			const int32 Index = ToIndex(Width, X, Y);
			BlendPixel(Pixels[Index], SourceColor, BaseOpacity * Falloff, bEraserMode);
			bDrewAnyPixel = true;
		}
	}

	if (!bDrewAnyPixel)
	{
		return false;
	}

	if (OutDirtyRegion)
	{
		*OutDirtyRegion = FIntRect(MinX, MinY, MaxX + 1, MaxY + 1);
	}
	return true;
}

void FOdysseyRuntimeToolAlgorithms::BlendPixel(FColor& Dest, const FLinearColor& Source, float Weight, bool bEraserMode)
{
	const float ClampedWeight = FMath::Clamp(Weight, 0.0f, 1.0f);
	if (ClampedWeight <= KINDA_SMALL_NUMBER)
	{
		return;
	}

	if (bEraserMode)
	{
		const float DestAlpha = static_cast<float>(Dest.A) / 255.0f;
		const float NewAlpha = FMath::Clamp(DestAlpha * (1.0f - ClampedWeight), 0.0f, 1.0f);
		Dest.A = static_cast<uint8>(FMath::RoundToInt(NewAlpha * 255.0f));
		return;
	}

	const FLinearColor DestLinear = FLinearColor(Dest);
	const FLinearColor Result = FMath::Lerp(DestLinear, Source, ClampedWeight);
	Dest = Result.ToFColor(true);
}
