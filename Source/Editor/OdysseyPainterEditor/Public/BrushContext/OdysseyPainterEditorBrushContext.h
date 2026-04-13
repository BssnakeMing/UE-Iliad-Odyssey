// IDDN.FR.001.250001.006.S.P.2019.000.00000
// ILIAD is subject to copyright laws and is the legal and intellectual property of Praxinos,Inc - Year of publishing 2022

#pragma once

#include "CoreMinimal.h"

#include "BrushContext/OdysseyBrushViewportContext.h"

//---

class FOdysseyPainterEditor;

class ODYSSEYPAINTEREDITOR_API FOdysseyPainterEditorBrushContext
    : public FOdysseyBrushViewportContext
{
public:
    virtual ~FOdysseyPainterEditorBrushContext();
    FOdysseyPainterEditorBrushContext(FOdysseyPainterEditor* iEditor, const FString& iContextName = TEXT("FOdysseyPainterEditorBrushContext"));

public:
    FOdysseyPainterEditor*          Editor();

    float                           Zoom() const override;
    float                           Rotation() const override;
    FVector2D                       Pan() const override;

    float                           GetStep();
    float                           Step() const override;

private:
    FOdysseyPainterEditor*          mEditor;
};
