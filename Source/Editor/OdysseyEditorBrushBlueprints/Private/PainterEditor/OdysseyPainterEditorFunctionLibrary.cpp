// IDDN.FR.001.250001.006.S.P.2019.000.00000
// ILIAD is subject to copyright laws and is the legal and intellectual property of Praxinos,Inc - Year of publishing 2022

#include "OdysseyPainterEditorFunctionLibrary.h"

#include "OdysseyBrushAssetBase.h"
#include "BrushContext/OdysseyBrushViewportContext.h"

//---

namespace
{
FOdysseyBrushViewportContext*
GetViewportContext(UOdysseyBrushAssetBase* iBrushInstance)
{
    if (!iBrushInstance)
        return nullptr;

    FOdysseyBrushViewportContext* context = iBrushInstance->GetContext<FOdysseyBrushViewportContext>(TEXT("FOdysseyBrushViewportContext"));
    if (context)
        return context;

    // Backward compatibility with legacy editor context naming.
    return iBrushInstance->GetContext<FOdysseyBrushViewportContext>(TEXT("FOdysseyPainterEditorBrushContext"));
}
}

//static
float
UOdysseyPainterEditorFunctionLibrary::GetViewportZoom( UOdysseyBrushAssetBase* BrushInstance )
{
    FOdysseyBrushViewportContext* context = GetViewportContext(BrushInstance);
    if (!context)
        return 100.f;

    //---

    return context->Zoom();
}

//static
float
UOdysseyPainterEditorFunctionLibrary::GetViewportRotation( UOdysseyBrushAssetBase* BrushInstance )
{
    FOdysseyBrushViewportContext* context = GetViewportContext(BrushInstance);
    if (!context)
        return 0.f;

    //---

    return context->Rotation();
}

//static
FVector2D
UOdysseyPainterEditorFunctionLibrary::GetViewportPan( UOdysseyBrushAssetBase* BrushInstance )
{
    FOdysseyBrushViewportContext* context = GetViewportContext(BrushInstance);
    if (!context)
        return FVector2D::ZeroVector;

    //---

    return context->Pan();
}

//static
float
UOdysseyPainterEditorFunctionLibrary::GetStep( UOdysseyBrushAssetBase* BrushInstance )
{
    FOdysseyBrushViewportContext* context = GetViewportContext(BrushInstance);
    if (context)
        return context->Step();

    //---

    return 0.f;
}
