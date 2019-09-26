// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Particle2D.h"
#include "Rod2D.generated.h"

/**
 * 
 */
UCLASS()
class PHYSICS_API ARod2D : public AParticle2D
{
	GENERATED_BODY()
public:
	ARod2D();
	void setMomentOfInertia() override;
	float length;
};
