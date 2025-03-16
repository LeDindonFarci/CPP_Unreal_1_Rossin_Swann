// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include <Components/ProgressBar.h>
#include "Curves/CurveLinearColor.h"
#include "BarWidget.generated.h"

/**
 * 
 */
UCLASS()
class EVAL_CPP_API UBarWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable)
	void SetPercent(const float& Percent);

protected:
	virtual void NativeConstruct() override;


private:
	UPROPERTY(meta = (BindWidget))
	UProgressBar* ProgressBar;

	UPROPERTY(EditAnywhere, Category = "UI")
	UCurveLinearColor* ColorCurve;
};
