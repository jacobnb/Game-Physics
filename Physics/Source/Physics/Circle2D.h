// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Particle2D.h"
#include "Circle2D.generated.h"

/**
 * 
 */
UCLASS()
class PHYSICS_API ACircle2D : public AParticle2D
{
	GENERATED_BODY()
public:
	ACircle2D();
	void setMomentOfInertia() override; 
protected:
	float radius;

};
