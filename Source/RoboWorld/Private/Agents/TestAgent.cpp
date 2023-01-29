// Fill out your copyright notice in the Description page of Project Settings.


#include "Agents/TestAgent.h"

ATestAgent::ATestAgent()
{
	PrimaryActorTick.bCanEverTick = true;

	capsule = CreateDefaultSubobject<UCapsuleComponent>(TEXT("testCapsule"));
	SetRootComponent(capsule);

	testAgentMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("testMesh"));
	testAgentMesh->SetupAttachment(GetRootComponent());
	
	setPosition(GetActorLocation());
}

void ATestAgent::BeginPlay()
{
	Super::BeginPlay();
}

void ATestAgent::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	moveAgent(FVector(1.f, 1.f, 0.f));
	FVector forward = GetActorForwardVector();
	DB_SF_DRAW_VECTOR(m_tPosition, m_tPosition + forward * 200.f);
}

void ATestAgent::moveAgent(FVector direction)
{
	AddActorWorldOffset(direction);
	setPosition(m_tPosition + direction);
}

void ATestAgent::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}
