// Fill out your copyright notice in the Description page of Project Settings.


#include "BarWidget.h"

void UBarWidget::NativeConstruct()
{
    Super::NativeConstruct();

    // V�rifie si la progress bar est bien assign�e
    if (!ProgressBar)
    {
        UE_LOG(LogTemp, Warning, TEXT("ProgressBar n'est pas assign�e dans le Widget Blueprint !"));
    }
}

void UBarWidget::SetPercent(const float& Percent)
{
    if (ProgressBar)
    {
        ProgressBar->SetPercent(FMath::Clamp(Percent, 0.0f, 1.0f));

        // Changer la couleur en fonction du pourcentage si le gradient est d�fini
        if (ColorCurve)
        {
            FLinearColor NewColor = ColorCurve->GetLinearColorValue(Percent);
            ProgressBar->SetFillColorAndOpacity(NewColor);
        }
    }
}