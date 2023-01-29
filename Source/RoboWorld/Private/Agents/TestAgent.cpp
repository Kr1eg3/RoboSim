// Fill out your copyright notice in the Description page of Project Settings.


#include "Agents/TestAgent.h"

// Sets default values
ATestAgent::ATestAgent()
{
	PrimaryActorTick.bCanEverTick = true;

	capsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("testCapsule"));
	SetRootComponent(capsule);

	testAgentMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("testMesh"));
	testAgentMesh->SetupAttachment(GetRootComponent());
}

void ATestAgent::BeginPlay()
{
	Super::BeginPlay();
}

void ATestAgent::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	AddActorWorldOffset(FVector(1.f, 0.f, 0.f));
}

void ATestAgent::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

