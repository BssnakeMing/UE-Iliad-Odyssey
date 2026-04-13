#include "SOdysseyPaintSurface.h"

#include "Engine/Texture.h"
#include "InputCoreTypes.h"
#include "Rendering/DrawElements.h"

void SOdysseyPaintSurface::Construct(const FArguments& InArgs)
{
    OnStrokeBegin = InArgs._OnStrokeBegin;
    OnStrokeUpdate = InArgs._OnStrokeUpdate;
    OnStrokeEnd = InArgs._OnStrokeEnd;

    Brush.DrawAs = ESlateBrushDrawType::Image;
    Brush.TintColor = FSlateColor(FLinearColor::White);
}

void SOdysseyPaintSurface::SetTexture(UTexture* InTexture)
{
    Brush.SetResourceObject(InTexture);
    if (InTexture)
    {
        Brush.ImageSize = FVector2D(
            static_cast<float>(FMath::Max(1, InTexture->GetSurfaceWidth())),
            static_cast<float>(FMath::Max(1, InTexture->GetSurfaceHeight())));
    }
    else
    {
        Brush.ImageSize = FVector2D(1.0f, 1.0f);
    }

    Invalidate(EInvalidateWidgetReason::Paint);
}

int32 SOdysseyPaintSurface::OnPaint(
    const FPaintArgs& Args,
    const FGeometry& AllottedGeometry,
    const FSlateRect& MyCullingRect,
    FSlateWindowElementList& OutDrawElements,
    int32 LayerId,
    const FWidgetStyle& InWidgetStyle,
    bool bParentEnabled) const
{
    if (Brush.GetResourceObject())
    {
        FSlateDrawElement::MakeBox(
            OutDrawElements,
            LayerId,
            AllottedGeometry.ToPaintGeometry(),
            &Brush,
            ESlateDrawEffect::None,
            InWidgetStyle.GetColorAndOpacityTint());
    }

    return LayerId;
}

FVector2D SOdysseyPaintSurface::ComputeDesiredSize(float LayoutScaleMultiplier) const
{
    return Brush.ImageSize * LayoutScaleMultiplier;
}

FReply SOdysseyPaintSurface::OnMouseButtonDown(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
{
    if (MouseEvent.GetEffectingButton() != EKeys::LeftMouseButton)
    {
        return FReply::Unhandled();
    }

    bPointerCaptured = true;
    BroadcastIfBound(OnStrokeBegin, MyGeometry, MouseEvent.GetScreenSpacePosition());

    return FReply::Handled().CaptureMouse(AsShared());
}

FReply SOdysseyPaintSurface::OnMouseMove(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
{
    if (!bPointerCaptured)
    {
        return FReply::Unhandled();
    }

    BroadcastIfBound(OnStrokeUpdate, MyGeometry, MouseEvent.GetScreenSpacePosition());
    return FReply::Handled();
}

FReply SOdysseyPaintSurface::OnMouseButtonUp(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent)
{
    if (!bPointerCaptured || MouseEvent.GetEffectingButton() != EKeys::LeftMouseButton)
    {
        return FReply::Unhandled();
    }

    bPointerCaptured = false;
    BroadcastIfBound(OnStrokeEnd, MyGeometry, MouseEvent.GetScreenSpacePosition());

    return FReply::Handled().ReleaseMouseCapture();
}

void SOdysseyPaintSurface::OnMouseLeave(const FPointerEvent& MouseEvent)
{
    if (bPointerCaptured)
    {
        bPointerCaptured = false;
        if (OnStrokeEnd.IsBound())
        {
            const FVector2D DummyLocal(0.0f, 0.0f);
            OnStrokeEnd.Execute(DummyLocal, Brush.ImageSize);
        }
    }

    SLeafWidget::OnMouseLeave(MouseEvent);
}

void SOdysseyPaintSurface::BroadcastIfBound(const FOdysseyPaintSurfacePointerEvent& Event, const FGeometry& Geometry, const FVector2D& ScreenPosition) const
{
    if (!Event.IsBound())
    {
        return;
    }

    const FVector2D LocalPosition = Geometry.AbsoluteToLocal(ScreenPosition);
    Event.Execute(LocalPosition, Geometry.GetLocalSize());
}
