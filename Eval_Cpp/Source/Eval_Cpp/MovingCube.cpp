// Fill out your copyright notice in the Description page of Project Settings.


#include "MovingCube.h"
#include "Components/StaticMeshComponent.h"

AMovingCube::AMovingCube()
{
    PrimaryActorTick.bCanEverTick = true;

    CubeMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CubeMesh"));
    RootComponent = CubeMesh;
}

void AMovingCube::BeginPlay()
{
    Super::BeginPlay();
    StartLocation = GetActorLocation();
    Time = 0.0f;
}

void AMovingCube::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
    Time += DeltaTime * Speed;

    // Mouvement vertical (oscillation)
    float NewZ = StartLocation.Z + FMath::Sin(Time) * Amplitude;

    // Mouvement circulaire
    float NewX = StartLocation.X + FMath::Cos(Time) * CircleRadius;
    float NewY = StartLocation.Y + FMath::Sin(Time) * CircleRadius;

    SetActorLocation(FVector(NewX, NewY, NewZ));
}