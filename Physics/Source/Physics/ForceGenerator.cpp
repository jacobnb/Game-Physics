// Fill out your copyright notice in the Description page of Project Settings.

#include "ForceGenerator.h"

ForceGenerator::ForceGenerator()
{
}

ForceGenerator::~ForceGenerator()
{
}


// ==================== IMPORTANT ===========================//
// Formula's might be the magnitude of the force rather than direction.
// ==========================================================//
FVector2D ForceGenerator::Vector2DProj(FVector2D vec1, FVector2D vec2)
{
	// https://www.ck12.org/book/CK-12-College-Precalculus/section/9.6/
	return (((vec1 * vec2) / FMath::Sqrt(vec2.Size())) * vec2);
}

FVector2D ForceGenerator::generateGravity(float particleMass, float gravity, FVector2D down)
{
	// F = Mg
	FVector2D force = (down * (particleMass * gravity));
	return force;
}

FVector2D ForceGenerator::GenerateForce_normal(FVector2D f_gravity, FVector2D surfaceNormal_unit)
{
	
	// f_normal = proj(f_gravity, surfaceNormal_unit)
	return Vector2DProj(f_gravity, surfaceNormal_unit);
}

FVector2D ForceGenerator::GenerateForce_sliding(FVector2D f_gravity, FVector2D f_normal)
{
	// f_sliding = f_gravity + f_normal
	return (f_gravity + f_normal);
}

FVector2D ForceGenerator::GenerateForce_friction_static(FVector2D f_normal, FVector2D f_opposing, float frictionCoefficient_static)
{
	// f_friction_s = -f_opposing if less than max, else -coeff*f_normal (max amount is coeff*|f_normal|)
	return (-f_opposing.Size() < frictionCoefficient_static * f_normal.Size()? - f_opposing : -frictionCoefficient_static * f_normal);
}

FVector2D ForceGenerator::GenerateForce_friction_kinetic(FVector2D f_normal, FVector2D particleVelocity, float frictionCoefficient_kinetic)
{
	// f_friction_k = -coeff*|f_normal| * unit(vel)
	particleVelocity.Normalize();

	return (particleVelocity * -frictionCoefficient_kinetic * f_normal.Size());
}

FVector2D ForceGenerator::GenerateForce_drag(FVector2D particleVelocity, FVector2D fluidVelocity, float fluidDensity, float objectArea_crossSection, float objectDragCoefficient)
{
	// TODO: Not using fluid density?
	// f_drag = (p * u^2 * area * coeff)/2
	return ((particleVelocity * fluidVelocity * fluidVelocity * objectArea_crossSection * objectDragCoefficient) / 2.0);
}

FVector2D ForceGenerator::GenerateForce_spring(FVector2D particlePosition, FVector2D anchorPosition, float springRestingLength, float springStiffnessCoefficient)
{
	// TODO: should not be able to subtract scalar from vector.
	auto springLength = particlePosition - anchorPosition;
	// f_spring = -coeff*(spring length - spring resting length)
	return (-springStiffnessCoefficient*(springLength - springRestingLength));
}
