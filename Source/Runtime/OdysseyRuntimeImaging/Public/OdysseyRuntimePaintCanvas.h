#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "OdysseyRuntimePaintCanvas.generated.h"

class UTextureRenderTarget2D;

UCLASS(BlueprintType)
class ODYSSEYRUNTIMEIMAGING_API UOdysseyRuntimePaintCanvas : public UObject
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintCallable, Category = "Odyssey|Paint")
    void InitializeCanvas(int32 InWidth, int32 InHeight, const FLinearColor& InClearColor);

    UFUNCTION(BlueprintCallable, Category = "Odyssey|Paint")
    void ClearCanvas(const FLinearColor& InClearColor);

    UFUNCTION(BlueprintPure, Category = "Odyssey|Paint")
    int32 GetCanvasWidth() const { return Width; }

    UFUNCTION(BlueprintPure, Category = "Odyssey|Paint")
    int32 GetCanvasHeight() const { return Height; }

    UFUNCTION(BlueprintPure, Category = "Odyssey|Paint")
    UTextureRenderTarget2D* GetTexture() const { return Texture; }

    UFUNCTION(BlueprintCallable, Category = "Odyssey|Paint")
    void SetTexture(UTextureRenderTarget2D* InTexture);

    bool IsInitialized() const;
    int32 GetPixelCount() const;

    TArray<FColor>& GetMutablePixels();
    const TArray<FColor>& GetPixels() const;

    void SetPixels(const TArray<FColor>& InPixels);
    void CommitToTexture();

private:
    void EnsureTexture();
    static FColor ToColor(const FLinearColor& InColor);

private:
    UPROPERTY(Transient)
    TObjectPtr<UTextureRenderTarget2D> Texture = nullptr;

    UPROPERTY(Transient)
    int32 Width = 0;

    UPROPERTY(Transient)
    int32 Height = 0;

    UPROPERTY(Transient)
    FLinearColor ClearColor = FLinearColor::Transparent;

    UPROPERTY(Transient)
    TArray<FColor> PixelData;
};
