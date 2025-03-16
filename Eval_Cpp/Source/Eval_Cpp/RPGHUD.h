// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "BarWidget.h"
#include "RPGHUD.generated.h"

/**
 * 
 */
UCLASS()
class EVAL_CPP_API ARPGHUD : public AHUD
{
	GENERATED_BODY()
	

public:

	UFUNCTION(BlueprintCallable)
	void SetPercent(const float& Percent);

protected:

	virtual void BeginPlay() override;



private:

    // Référence du Widget Blueprint
    UPROPERTY(EditAnywhere, Category = "UI")
    TSubclassOf<UBarWidget> BarWidgetClass;

    // Instance du widget affiché
    UPROPERTY()
    UBarWidget* BarWidget;

};
