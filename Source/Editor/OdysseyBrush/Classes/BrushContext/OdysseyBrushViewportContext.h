// IDDN.FR.001.250001.006.S.P.2019.000.00000
// ILIAD is subject to copyright laws and is the legal and intellectual property of Praxinos,Inc - Year of publishing 2022

#pragma once

#include "CoreMinimal.h"

#include "OdysseyBrushContext.h"

class ODYSSEYBRUSH_API FOdysseyBrushViewportContext : public FOdysseyBrushContext
{
public:
    virtual ~FOdysseyBrushViewportContext();
    explicit FOdysseyBrushViewportContext(const FString& iName = TEXT("FOdysseyBrushViewportContext"));

public:
    virtual float Zoom() const;
    virtual float Rotation() const;
    virtual FVector2D Pan() const;
    virtual float Step() const;

public:
    void SetZoom(float iZoom);
    void SetRotation(float iRotation);
    void SetPan(const FVector2D& iPan);
    void SetStep(float iStep);

private:
    float mZoom;
    float mRotation;
    FVector2D mPan;
    float mStep;
};
