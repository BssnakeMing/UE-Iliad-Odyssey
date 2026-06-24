#pragma once

#include "CoreMinimal.h"
#include "OdysseyRuntimePaintToolTypes.h"

class ODYSSEYRUNTIMETOOLS_API FOdysseyRuntimeToolAlgorithms
{
public:
    static bool DrawLine(
        TArray<FColor>& Pixels,
        int32 Width,
        int32 Height,
        const FIntPoint& Start,
        const FIntPoint& End,
        const FOdysseyRuntimeToolSettings& Settings,
        bool bEraserMode,
        float& InOutDistanceSinceLastStamp,
        FIntRect* OutDirtyRegion = nullptr);

    static bool FloodFill(
        TArray<FColor>& Pixels,
        int32 Width,
        int32 Height,
        const FIntPoint& Seed,
        const FOdysseyRuntimeToolSettings& Settings);

private:
    static bool DrawDisc(
        TArray<FColor>& Pixels,
        int32 Width,
        int32 Height,
        const FIntPoint& Center,
        const FOdysseyRuntimeToolSettings& Settings,
        bool bEraserMode,
        FIntRect* OutDirtyRegion = nullptr);

    static void BlendPixel(FColor& Dest, const FLinearColor& Source, float Weight, bool bEraserMode);
    static FORCEINLINE int32 ToIndex(int32 Width, int32 X, int32 Y) { return Y * Width + X; }
};
