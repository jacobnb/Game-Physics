// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Particle2D.generated.h"

UCLASS()
class PHYSICS_API AParticle2D : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AParticle2D();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	FVector2D position, velocity, acceleration, rotation, angular_vel, angular_accel;
	void updatePositionsExplicitEuler(float dt);
	void updatePositionKinematic(float dt);
	void updateRotationEulerExplicit(float dt);
	void updateRotationKinematic(float dt);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


};
