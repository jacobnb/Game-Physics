// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 Sliding force is sum of normal force and gravity.
 Friction is resistance to a surface (google coefficients).

 */
class PHYSICS_API ForceGenerator
{
public:
	ForceGenerator();
	~ForceGenerator();
	inline static FVector2D generateGravity(float particleMass, float gravity, FVector2D* down) {
		// F = Mg
		return *down * (particleMass * gravity);
	}
};
