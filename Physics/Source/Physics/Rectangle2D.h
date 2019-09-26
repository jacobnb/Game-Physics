// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Particle2D.h"
#include "Rectangle2D.generated.h"

/**
 * 
 */
UCLASS()
class PHYSICS_API ARectangle2D : public AParticle2D
{
	GENERATED_BODY()
public:
	ARectangle2D();
	float width;
	float height;
	void setMomentOfInertia() override;
};
