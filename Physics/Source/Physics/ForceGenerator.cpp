// Fill out your copyright notice in the Description page of Project Settings.
#include "ForceGenerator.h"

FVector2D UForceGenerator::Vector2DProj(FVector2D vec1, FVector2D vec2)
{
	// project v1 onto v2
	// https://www.ck12.org/book/CK-12-College-Precalculus/section/9.6/
	return (FVector2D::DotProduct(vec1, vec2) /  FVector2D::DotProduct(vec2, vec2)) * vec2;
}

FVector2D UForceGenerator::generateGravity(float particleMass, float gravity, FVector2D down)
{
	// F = Mg
	FVector2D force = (down * (particleMass * gravity));
	return force;
}

FVector2D UForceGenerator::GenerateForce_normal(FVector2D f_gravity, FVector2D surfaceNormal_unit)
{
	// f_normal = proj(f_gravity, surfaceNormal_unit)
	FVector2D f_normal = Vector2DProj(f_gravity, surfaceNormal_unit);
	f_normal = -f_normal;
	return f_normal;
}

FVector2D UForceGenerator::GenerateForce_sliding(FVector2D f_gravity, FVector2D f_normal)
{
	// f_sliding = f_gravity + f_normal
	return (f_gravity + f_normal);
}

FVector2D UForceGenerator::GenerateForce_friction_static(FVector2D f_normal, FVector2D f_opposing, float frictionCoefficient_static)
{
	// f_friction_s = -f_opposing if less than max, else -coeff*f_normal (max amount is coeff*|f_normal|)
	FVector2D f_op_norm = f_opposing;
	f_op_norm.Normalize();
	return (f_opposing.Size() < frictionCoefficient_static * f_normal.Size() ? -f_opposing : f_op_norm * -frictionCoefficient_static * f_normal.Size());
}

FVector2D UForceGenerator::GenerateForce_friction_kinetic(FVector2D f_normal, FVector2D particleVelocity, float frictionCoefficient_kinetic)
{
	// f_friction_k = -coeff*|f_normal| * unit(vel)
	particleVelocity.Normalize();
	return (particleVelocity * -frictionCoefficient_kinetic * f_normal.Size());
}

FVector2D UForceGenerator::GenerateForce_drag(FVector2D particleVelocity, FVector2D fluidVelocity, float fluidDensity, float objectArea_crossSection, float objectDragCoefficient)
{
	// https://www.grc.nasa.gov/WWW/k-12/airplane/drageq.html drag = co * density * velocity squred / 2.0 * area
	// f_drag = (p * u^2 * area * coeff)/2 (+fluid velocity?)

	FVector2D vel_diff = particleVelocity - fluidVelocity;
	float vel_diff_sqr_mag = FVector2D::DotProduct(vel_diff, vel_diff); // b/c dan says size_squared doesn't work.
	FVector2D vel_diff_norm = vel_diff;
	vel_diff_norm.Normalize();
	// using 
	return (objectDragCoefficient * (fluidDensity * -vel_diff_sqr_mag) / 2.0 * objectArea_crossSection) * vel_diff_norm;
}

FVector2D UForceGenerator::GenerateForce_spring(FVector2D particlePosition, FVector2D anchorPosition, float springRestingLength, float springStiffnessCoefficient)
{
	FVector2D springLength = anchorPosition - particlePosition;
	FVector2D springDir = springLength;
	springDir.Normalize();
	// f_spring = -coeff*(spring length - spring resting length)
	return springStiffnessCoefficient * (springLength.Size() - springRestingLength)*springDir;


}
