// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "DebugMacros.h"
#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Components/CapsuleComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "TestAgent.generated.h"



UCLASS()
class ROBOWORLD_API ATestAgent : public APawn
{
	GENERATED_BODY()

protected:
	virtual void BeginPlay() override;

public:	
	ATestAgent();
	virtual void Tick(float DeltaTime) override;
	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:
	UPROPERTY(VisibleAnywhere)
	UCapsuleComponent* capsule;

	UPROPERTY(VisibleAnywhere)
	USkeletalMeshComponent* testAgentMesh;

};
