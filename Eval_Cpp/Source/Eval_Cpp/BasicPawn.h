// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "BasicPawn.generated.h"

UCLASS()
class EVAL_CPP_API ABasicPawn : public APawn
{
	GENERATED_BODY()

public:
    ABasicPawn();

protected:
    virtual void BeginPlay() override;
    virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

public:
    virtual void Tick(float DeltaTime) override;

private:
    UPROPERTY(VisibleAnywhere, Category = "Components")
    UStaticMeshComponent* CubeMesh;

    UPROPERTY(VisibleAnywhere, Category = "Components")
    class UCameraComponent* Camera;

    UPROPERTY(EditAnywhere, Category = "Movement")
    float MoveSpeed = 300.0f;

    UPROPERTY(EditAnywhere, Category = "Movement")
    float TurnSpeed = 100.0f;

    FVector CurrentVelocity;
    float CurrentRotation;

    void MoveForward(float Value);
    void Turn(float Value);
};