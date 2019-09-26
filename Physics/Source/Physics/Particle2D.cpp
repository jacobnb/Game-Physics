// Fill out your copyright notice in the Description page of Project Settings.

#include "Particle2D.h"
#include "Kismet/GameplayStatics.h"

AParticle2D::AParticle2D()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

void AParticle2D::SetMass(float newMass)
{
	mass = newMass > 0 ? newMass : 0.0;
	massInv = mass > 0.0 ? 1.0 / mass : 0.0f;
}
void AParticle2D::AddForce(FVector2D newForce)
{
	force += newForce;
}

void AParticle2D::UpdateAcceleration()
{
	acceleration = force * massInv;
	// reset b/c force coming back next frame
	force.Set(0, 0);
}


// Called when the game starts or when spawned
void AParticle2D::BeginPlay()
{
	Super::BeginPlay();
}

void AParticle2D::updatePositionsExplicitEuler(float dt)
{
	// x(t+dt) = x(t) + v(t)dt
		// multiply by dt = take a small step.
	position = position + velocity * dt;
	// v(t + dt) = v(t) + v(t)dt
	velocity = velocity + acceleration * dt;
}

void AParticle2D::updatePositionKinematic(float dt)
{
	position = position + velocity * dt + 0.5f * acceleration * dt * dt;
	velocity = velocity + acceleration * dt;
}

void AParticle2D::updateRotationEulerExplicit(float dt)
{
	rotation = rotation + angular_vel * dt;
	angular_vel = angular_vel + angular_accel * dt;
}

void AParticle2D::updateRotationKinematic(float dt)
{
	rotation = rotation + angular_vel * dt + 0.5f * angular_accel * dt * dt;
	angular_vel = angular_vel + angular_accel * dt;
}


void AParticle2D::updateAngularAcceleration()
{
	//3.2
	// equation from book.
	angular_accel = torque * invMomentOfInertia;
	torque = 0;
}

void AParticle2D::applyTorque(FVector2D pf, FVector2D newForce)
{
	// torque = pf X f from assignment
	float local_torque;// = vector::CrossProduct(pf, newForce); // hard implement
	FVector2D moment_arm = pf - centerOfMass;
	local_torque = moment_arm.X*newForce.Y - pf.Y*newForce.X;
	torque += local_torque; 
}

void AParticle2D::setMomentOfInertia()
{
	// This should be called on start to calculate moment of Inertia. 
	// apply enum and calc inverse.
	// equations from book.
	switch (shape) {
	case(SHAPES::RECTANGLE):
		// 1/12 * m(dx^2 + xy^2)
		momentOfInertia = (mass*rect_width*rect_width*rect_height*rect_height) / 12.0;
		break;
	case(SHAPES::CIRCLE):
		// 1/2*m*r^2
		momentOfInertia = mass*circle_radius*circle_radius*0.5;
		break;
	case(SHAPES::ROD):
		// 1/12 * m*l^2
		momentOfInertia = mass*rod_length*rod_length / 12.0;
		break;
	case(SHAPES::RING):
		// 1/2 * m *(router^2 + rinner^2)
		momentOfInertia = mass*(ring_rad_inner*ring_rad_inner+ring_rad_outer*ring_rad_outer) * 0.5;
		break;
	default:
		break;
	}
	invMomentOfInertia = 1 / momentOfInertia;
}

// Called every frame
void AParticle2D::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


