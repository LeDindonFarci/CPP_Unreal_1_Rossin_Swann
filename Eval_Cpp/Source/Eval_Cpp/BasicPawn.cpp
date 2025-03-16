// Fill out your copyright notice in the Description page of Project Settings.


#include "BasicPawn.h"
#include "Camera/CameraComponent.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/SpringArmComponent.h"

ABasicPawn::ABasicPawn()
{
    PrimaryActorTick.bCanEverTick = true;

    CubeMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CubeMesh"));
    RootComponent = CubeMesh;

    Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
    Camera->SetupAttachment(RootComponent);
    Camera->SetRelativeLocation(FVector(-200.0f, 0.0f, 100.0f));
    Camera->SetRelativeRotation(FRotator(-10.0f, 0.0f, 0.0f));
}

void ABasicPawn::BeginPlay()
{
    Super::BeginPlay();
}

void ABasicPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
    Super::SetupPlayerInputComponent(PlayerInputComponent);
    PlayerInputComponent->BindAxis("MoveForward", this, &ABasicPawn::MoveForward);
    PlayerInputComponent->BindAxis("Turn", this, &ABasicPawn::Turn);
}

void ABasicPawn::MoveForward(float Value)
{
    CurrentVelocity = GetActorForwardVector() * MoveSpeed * Value;
}

void ABasicPawn::Turn(float Value)
{
    CurrentRotation = TurnSpeed * Value;
}

void ABasicPawn::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    if (!CurrentVelocity.IsNearlyZero())
    {
        SetActorLocation(GetActorLocation() + (CurrentVelocity * DeltaTime), true);
    }

    if (FMath::Abs(CurrentRotation) > 0.0f)
    {
        AddActorLocalRotation(FRotator(0.0f, CurrentRotation * DeltaTime, 0.0f));
    }
}