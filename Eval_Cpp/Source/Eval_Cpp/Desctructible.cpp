//// Fill out your copyright notice in the Description page of Project Settings.
//
//
//#include "DestructibleCube.h"
//#include "Components/StaticMeshComponent.h"
//
//ADestructibleCube::ADestructibleCube()
//{
//    PrimaryActorTick.bCanEverTick = true;
//
//    CubeMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CubeMesh"));
//    RootComponent = CubeMesh;
//}
//
//void ADestructibleCube::BeginPlay()
//{
//    Super::BeginPlay();
//}
//
//void ADestructibleCube::Tick(float DeltaTime)
//{
//    Super::Tick(DeltaTime);
//}
//
//void ADestructibleCube::DestroyObject_Implementation()
//{
//    Destroy();  // Détruit l'acteur
//}
//
