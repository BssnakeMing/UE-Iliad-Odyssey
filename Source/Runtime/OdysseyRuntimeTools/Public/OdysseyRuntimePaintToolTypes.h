#pragma once

#include "CoreMinimal.h"
#include "FreehandShape/Interpolation/OdysseyInterpolationTypes.h"
#include "FreehandShape/Smoothing/OdysseySmoothingOptions.h"
#include "OdysseyRuntimePaintToolTypes.generated.h"

UENUM(BlueprintType)
enum class EOdysseyRuntimePaintTool : uint8
{
    Brush UMETA(DisplayName = "Brush"),
    Eraser UMETA(DisplayName = "Eraser"),
    Bucket UMETA(DisplayName = "Bucket")
};

USTRUCT(BlueprintType)
struct ODYSSEYRUNTIMETOOLS_API FOdysseyRuntimeToolSettings
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Odyssey|Paint")
    FLinearColor Color = FLinearColor::White;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Odyssey|Paint", meta = (ClampMin = "1.0", UIMin = "1.0", ClampMax = "256.0", UIMax = "256.0"))
    float Size = 8.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Odyssey|Paint", meta = (ClampMin = "0.0", UIMin = "0.0", ClampMax = "1.0", UIMax = "1.0"))
    float Opacity = 1.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Odyssey|Paint", meta = (ClampMin = "0.0", UIMin = "0.0", ClampMax = "1.0", UIMax = "1.0"))
    float Hardness = 1.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Odyssey|Paint", meta = (ClampMin = "0.0", UIMin = "0.0", ClampMax = "1.0", UIMax = "1.0"))
    float Tolerance = 0.03f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Odyssey|Paint", meta = (ClampMin = "1.0", UIMin = "1.0", ClampMax = "200.0", UIMax = "200.0"))
    float FreehandStep = 1.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Odyssey|Paint")
    bool bFreehandAdaptativeStep = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Odyssey|Paint")
    EOdysseyInterpolationType FreehandInterpolationType = EOdysseyInterpolationType::kCatmullRom;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Odyssey|Paint")
    bool bFreehandSmoothingEnabled = true;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Odyssey|Paint")
    FOdysseySmoothingOptions FreehandSmoothingOptions;
};
