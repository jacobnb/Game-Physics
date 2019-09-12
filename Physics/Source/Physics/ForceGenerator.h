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
	static FVector2D* Vector2DProj(FVector2D* vec1, FVector2D* vec2);
	static FVector2D* generateGravity(float particleMass, float gravity, FVector2D* down);
	static FVector2D* GenerateForce_normal(FVector2D* f_gravity, FVector2D* surfaceNormal_unit);
	FVector2D* GenerateForce_sliding(FVector2D* f_gravity, FVector2D* f_normal);

	FVector2D* GenerateForce_friction_static(FVector2D* f_normal, FVector2D* f_opposing, float frictionCoefficient_static);
	

	FVector2D* GenerateForce_friction_kinetic(FVector2D* f_normal, FVector2D particleVelocity, float frictionCoefficient_kinetic);
	

	FVector2D* GenerateForce_drag(FVector2D* particleVelocity, FVector2D* fluidVelocity, float fluidDensity, float objectArea_crossSection, float objectDragCoefficient);

	FVector2D* GenerateForce_spring(FVector2D* particlePosition, FVector2D* anchorPosition, float springRestingLength, float springStiffnessCoefficient);
};
