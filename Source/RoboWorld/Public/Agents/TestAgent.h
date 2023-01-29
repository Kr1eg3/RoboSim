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
	/// @brief Create an uninitialized instance
	ATestAgent();

	/*****************************************************************************
	* Functions
	*****************************************************************************/
	/// @brief Called each frame, performs actions in the function
	virtual void Tick(float DeltaTime) override;
	/// @brief Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	inline void setPosition(float x) { m_tPosition.X = x; }
	inline void setPosition(float x, float y) { m_tPosition.X = x; m_tPosition.Y = y; }
	inline void setPosition(float x, float y, float z) { m_tPosition.X = x; m_tPosition.Y = y; m_tPosition.Z = z; }
	inline void setPosition(FVector position) { m_tPosition = position; }
	inline FVector getPosition() { return m_tPosition; }

	void moveAgent(FVector direction);


	/*****************************************************************************
	* Fields
	*****************************************************************************/
private:
	/// @brief Agent position in RoboWorld
	FVector m_tPosition;

	/// @brief Capsule pointer, needed to add hitbox
	UPROPERTY(VisibleAnywhere)
	UCapsuleComponent* capsule;

	/// @brief Skeletal mesh pointer, mb need to use static mesh, dunno
	UPROPERTY(VisibleAnywhere)
	USkeletalMeshComponent* testAgentMesh;

};
