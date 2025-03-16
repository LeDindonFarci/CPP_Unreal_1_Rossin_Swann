// Fill out your copyright notice in the Description page of Project Settings.


#include "RPGHUD.h"
#include "Blueprint/UserWidget.h"


void ARPGHUD::BeginPlay()
{
    Super::BeginPlay();

    if (BarWidgetClass)
    {
        // Création et affichage du widget
        BarWidget = CreateWidget<UBarWidget>(GetWorld(), BarWidgetClass);
        if (BarWidget)
        {
            BarWidget->AddToViewport();
        }
    }
}

void ARPGHUD::SetPercent(const float& Percent)
{
    if (BarWidget)
    {
        BarWidget->SetPercent(Percent);
    }
}
