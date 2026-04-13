// IDDN.FR.001.250001.006.S.P.2019.000.00000
// ILIAD is subject to copyright laws and is the legal and intellectual property of Praxinos,Inc - Year of publishing 2022

#include "BrushContext/OdysseyBrushViewportContext.h"

FOdysseyBrushViewportContext::~FOdysseyBrushViewportContext()
{
}

FOdysseyBrushViewportContext::FOdysseyBrushViewportContext(const FString& iName)
    : FOdysseyBrushContext(iName)
    , mZoom(100.f)
    , mRotation(0.f)
    , mPan(FVector2D::ZeroVector)
    , mStep(0.f)
{
}

float
FOdysseyBrushViewportContext::Zoom() const
{
    return mZoom;
}

float
FOdysseyBrushViewportContext::Rotation() const
{
    return mRotation;
}

FVector2D
FOdysseyBrushViewportContext::Pan() const
{
    return mPan;
}

float
FOdysseyBrushViewportContext::Step() const
{
    return mStep;
}

void
FOdysseyBrushViewportContext::SetZoom(float iZoom)
{
    mZoom = iZoom;
}

void
FOdysseyBrushViewportContext::SetRotation(float iRotation)
{
    mRotation = iRotation;
}

void
FOdysseyBrushViewportContext::SetPan(const FVector2D& iPan)
{
    mPan = iPan;
}

void
FOdysseyBrushViewportContext::SetStep(float iStep)
{
    mStep = iStep;
}
