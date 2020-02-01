// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "BuildController.generated.h"

class ABaseInteractable;
class ACameraPawn;

UCLASS()
class GGJ2020_API ABuildController : public APlayerController
{
	GENERATED_BODY()

protected:
	ABuildController();

	virtual void BeginPlay() override;

	void SpawnInteractable();

	virtual void Tick(float DeltaTime) override;

	virtual void SetupInputComponent() override;

	FVector GetGridLocation();
	FHitResult HitResult;

	void OnLeftClicked();

	void OnRightClicked();

	void CycleInteractables(float Value);

	FVector GetMouseLocation();

	UPROPERTY(EditAnywhere)
	TArray<TSubclassOf<ABaseInteractable>> BP_Interactables;

	int InteractIndex = 0;
	
	ABaseInteractable* CurrentInteractable = nullptr;

	UPROPERTY(EditAnywhere)
	TSubclassOf<AActor> BP_RedBeam;

	AActor* Beam = nullptr;

	float GridSize = 100.f;

	FVector GridSnapLocation;

	ACameraPawn* ControllingPawn = nullptr;

};
