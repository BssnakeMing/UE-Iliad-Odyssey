#pragma once

#include "CoreMinimal.h"
#include "OdysseyRuntimePaintToolTypes.h"

class ODYSSEYRUNTIMETOOLS_API FOdysseyRuntimeToolAlgorithms
{
public:
    static void DrawLine(
        TArray<FColor>& Pixels,
        int32 Width,
        int32 Height,
        const FIntPoint& Start,
        const FIntPoint& End,
        const FOdysseyRuntimeToolSettings& Settings,
        bool bEraserMode,
        float& InOutDistanceSinceLastStamp);

    static bool FloodFill(
        TArray<FColor>& Pixels,
        int32 Width,
        int32 Height,
        const FIntPoint& Seed,
        const FOdysseyRuntimeToolSettings& Settings);

private:
    static void DrawDisc(
        TArray<FColor>& Pixels,
        int32 Width,
        int32 Height,
        const FIntPoint& Center,
        const FOdysseyRuntimeToolSettings& Settings,
        bool bEraserMode);

    static void BlendPixel(FColor& Dest, const FLinearColor& Source, float Weight, bool bEraserMode);
    static FORCEINLINE int32 ToIndex(int32 Width, int32 X, int32 Y) { return Y * Width + X; }
};
