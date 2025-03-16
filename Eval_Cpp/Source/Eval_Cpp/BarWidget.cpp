// Fill out your copyright notice in the Description page of Project Settings.


#include "BarWidget.h"

void UBarWidget::NativeConstruct()
{
    Super::NativeConstruct();

    // Vérifie si la progress bar est bien assignée
    if (!ProgressBar)
    {
        UE_LOG(LogTemp, Warning, TEXT("ProgressBar n'est pas assignée dans le Widget Blueprint !"));
    }
}

void UBarWidget::SetPercent(const float& Percent)
{
    if (ProgressBar)
    {
        ProgressBar->SetPercent(FMath::Clamp(Percent, 0.0f, 1.0f));

        // Changer la couleur en fonction du pourcentage si le gradient est défini
        if (ColorCurve)
        {
            FLinearColor NewColor = ColorCurve->GetLinearColorValue(Percent);
            ProgressBar->SetFillColorAndOpacity(NewColor);
        }
    }
}