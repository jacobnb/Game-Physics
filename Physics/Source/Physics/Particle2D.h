// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Particle2D.generated.h"

UCLASS()
class PHYSICS_API AParticle2D : public AActor
{
	GENERATED_BODY()
		//TODO
	/* Write a force generator class that generates / calculates forces
	 - In force generator class add more generators.
	 - Make variables exposed in editor to save compile time.
	 - Move inline functions
	*/

public:
	// Sets default values for this actor's properties
	AParticle2D();
	//lab 2 step 1
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float startingMass = 1.0f;

	UFUNCTION(BlueprintCallable, Category = "Particle2D")
		void SetMass(float newMass);
	UFUNCTION(BlueprintCallable, Category = "Particle2D")
		inline float GetMass() const {
		return mass;
	};
	//lab 2 2
	UFUNCTION(BlueprintCallable, Category = "Particle2D")
		void AddForce(FVector2D newForce);
	UFUNCTION(BlueprintCallable, Category = "Particle2D")
		void UpdateAcceleration();
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Particle2D")
		FVector2D position;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Particle2D")
		FVector2D velocity;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Particle2D")
		FVector2D acceleration;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Particle2D")
		float rotation;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Particle2D")
		float angular_vel;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Particle2D")
		float angular_accel;
	UFUNCTION(BlueprintCallable, Category = "Particle2D")
		void updatePositionsExplicitEuler(float dt);
	UFUNCTION(BlueprintCallable, Category = "Particle2D")
		void updatePositionKinematic(float dt);
	UFUNCTION(BlueprintCallable, Category = "Particle2D")
		void updateRotationEulerExplicit(float dt);
	UFUNCTION(BlueprintCallable, Category = "Particle2D")
		void updateRotationKinematic(float dt);

	//lab 2 step 1
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Particle2D")
		float mass;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Particle2D")
	float massInv;

	//lab2 2
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Particle2D")
		FVector2D force;


public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;
};
