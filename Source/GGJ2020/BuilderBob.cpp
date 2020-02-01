// Fill out your copyright notice in the Description page of Project Settings.


#include "BuilderBob.h"
#include "Collectible.h"

ABuilderBob::ABuilderBob()
{
	PrimaryActorTick.bCanEverTick = true;

}

void ABuilderBob::SwapMoveDirection()
{
	bMoveRight = !bMoveRight;
	AddActorWorldRotation(FRotator(0, 180, 0));
}

bool ABuilderBob::GetMoveRight() const
{
	return bMoveRight;
}

void ABuilderBob::OnCollected(ACollectible* Collectible)
{
	Collectible->SetCollected();
}

void ABuilderBob::BeginPlay()
{
	Super::BeginPlay();
	
}

void ABuilderBob::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ABuilderBob::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

