//// Fill out your copyright notice in the Description page of Project Settings.
//
//
//#include "DestructionComponent.h"
//#include "GameFramework/Actor.h"
//#include "Kismet/KismetSystemLibrary.h"
//#include "DestructibleInterface.h" 
////L'include de Kismet nous permet de voir les résultats grâce aux raycast
//
//UDestructionComponent::UDestructionComponent()
//{
//    PrimaryComponentTick.bCanEverTick = false;
//}
//
//void UDestructionComponent::BeginPlay()
//{
//    Super::BeginPlay();
//}
//
//void UDestructionComponent::DestructionBeam()
//{
//    if (!Camera) return;
//
//    FVector Start = Camera->GetComponentLocation();
//    FVector ForwardVector = Camera->GetForwardVector();
//    FVector End = Start + (ForwardVector * Range);
//
//    FHitResult HitResult;
//    FCollisionQueryParams QueryParams;
//    QueryParams.AddIgnoredActor(GetOwner()); // Ignore l'acteur qui possède ce component
//
//    if (GetWorld()->LineTraceSingleByChannel(HitResult, Start, End, ECC_Visibility, QueryParams))
//    {
//        AActor* HitActor = HitResult.GetActor();
//        if (HitActor && HitActor->Implements<UDestructibleInterface>())
//        {
//            IDestructibleInterface* Destructible = Cast<IDestructibleInterface>(HitActor);
//            if (Destructible)
//            {
//                Destructible->DestroyObject();
//            }
//        }
//    }
//}
