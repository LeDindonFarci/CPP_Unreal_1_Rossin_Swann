// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MovingCube.generated.h"

UCLASS()
class EVAL_CPP_API AMovingCube : public AActor
{
    GENERATED_BODY()

public:
    AMovingCube();

protected:
    virtual void BeginPlay() override;
    virtual void Tick(float DeltaTime) override;

private:
    UPROPERTY(VisibleAnywhere, Category = "Components")
    UStaticMeshComponent* CubeMesh;

    UPROPERTY(EditAnywhere, Category = "Movement")
    float Speed = 2.0f;

    UPROPERTY(EditAnywhere, Category = "Movement")
    float Amplitude = 50.0f;

    UPROPERTY(EditAnywhere, Category = "Movement")
    float CircleRadius = 100.0f;

    FVector StartLocation;
    float Time;
};