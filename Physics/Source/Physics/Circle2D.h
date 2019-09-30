// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Particle2D.h"
#include "CircleCollisionHull2D.h"
#include "Circle2D.generated.h"

/**
 * This is a class to expose the circular collision hull on a particle2D
 * I'd rather figure out another way to do it, 
 * but this seems to work and expose it to blueprints
 */
UCLASS()
class PHYSICS_API ACircle2D : public AParticle2D
{
	GENERATED_BODY()
public:
	ACircle2D();
	CircleCollisionHull2D* ColliderHull;
	UFUNCTION(BlueprintCallable, Category = "Collider2D")
	void setColliderRadius(float newRadius);
};
