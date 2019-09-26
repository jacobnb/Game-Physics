// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Particle2D.h"
#include "Ring2D.generated.h"

/**
 * 
 */
UCLASS()
class PHYSICS_API ARing2D : public AParticle2D
{
	GENERATED_BODY()
public:
	ARing2D();
	void setMomentOfInertia() override;
protected:
	float radiusInner;
	float radiusOuter;
	
};
