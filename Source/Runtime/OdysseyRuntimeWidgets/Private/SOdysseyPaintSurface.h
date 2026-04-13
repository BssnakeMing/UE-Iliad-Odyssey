#pragma once

#include "CoreMinimal.h"
#include "Input/Reply.h"
#include "Widgets/SLeafWidget.h"

class UTexture;

DECLARE_DELEGATE_TwoParams(FOdysseyPaintSurfacePointerEvent, const FVector2D& /*LocalPosition*/, const FVector2D& /*SurfaceSize*/);

class SOdysseyPaintSurface : public SLeafWidget
{
public:
    SLATE_BEGIN_ARGS(SOdysseyPaintSurface) {}
        SLATE_EVENT(FOdysseyPaintSurfacePointerEvent, OnStrokeBegin)
        SLATE_EVENT(FOdysseyPaintSurfacePointerEvent, OnStrokeUpdate)
        SLATE_EVENT(FOdysseyPaintSurfacePointerEvent, OnStrokeEnd)
    SLATE_END_ARGS()

    void Construct(const FArguments& InArgs);

    void SetTexture(UTexture* InTexture);

    virtual int32 OnPaint(
        const FPaintArgs& Args,
        const FGeometry& AllottedGeometry,
        const FSlateRect& MyCullingRect,
        FSlateWindowElementList& OutDrawElements,
        int32 LayerId,
        const FWidgetStyle& InWidgetStyle,
        bool bParentEnabled) const override;

    virtual FVector2D ComputeDesiredSize(float LayoutScaleMultiplier) const override;

    virtual FReply OnMouseButtonDown(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent) override;
    virtual FReply OnMouseMove(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent) override;
    virtual FReply OnMouseButtonUp(const FGeometry& MyGeometry, const FPointerEvent& MouseEvent) override;
    virtual void OnMouseLeave(const FPointerEvent& MouseEvent) override;

private:
    void BroadcastIfBound(const FOdysseyPaintSurfacePointerEvent& Event, const FGeometry& Geometry, const FVector2D& ScreenPosition) const;

private:
    FSlateBrush Brush;
    bool bPointerCaptured = false;

    FOdysseyPaintSurfacePointerEvent OnStrokeBegin;
    FOdysseyPaintSurfacePointerEvent OnStrokeUpdate;
    FOdysseyPaintSurfacePointerEvent OnStrokeEnd;
};
