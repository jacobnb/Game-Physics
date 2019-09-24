// Fill out your copyright notice in the Description page of Project Settings.

#include "Particle2D.h"
#include "Kismet/GameplayStatics.h"
//#include "Circle2D.h"
//#include "Ring2D.h"
//#include "Rectangle2D.h"
//#include "Rod2D.h"
// Sets default values
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
	// Hardcoded start.
	//rotation = 0;
	//position = FVector2D(this->GetActorLocation());

	//velocity.X = -200;
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
	// torque * invMomentOfInertia;
}

void AParticle2D::applyTorque(FVector2D pf, FVector2D newForce)
{
	// torque = pf X f
	float local_torque = vector::CrossProduct(pf, newForce);
	torque += local_torque * invMomentOfIntertia;
}

void AParticle2D::setMomentOfInertia()
{
	// This should be called on start to calculate moment of Inertia. Since it's overriden not sure I really need to worry about cases.
	// apply enum and calc inverse.
	// equations from book.
	switch (shape) {
	case(SHAPES::RECTANGLE):
		// 1/12 * m(dx^2 + xy^2)
		momentOfInertia = 1 / 12 * mass*rect_width*rect_width*rect_height*rect_height;       
		break;
	case(SHAPES::CIRCLE):
		// 1/2*m*r^2
		momentOfInertia = 0.5*mass*circle_radius*circle_radius;
		break;
	case(SHAPES::ROD):
		// 1/12 * m*l^2
		momentOfInertia = 1 / 12 * mass*rod_length*rod_length;
		break;
	case(SHAPES::RING):
		// 1/2 * m *(router^2 + rinner^2)
		momentOfInertia = 0.5*mass*ring_rad_inner*ring_rad_inner*ring_rad_outer*ring_rad_outer;
		break;
	default:
	break;
	}
}

// Called every frame
void AParticle2D::Tick(float DeltaTime)
{
	//UWorld* world = GetWorld();
	 Super::Tick(DeltaTime);
	//updatePositionsExplicitEuler(DeltaTime);
	//float realtimeSeconds = UGameplayStatics::GetTimeSeconds(dynamic_cast<UObject*>(world));
	//acceleration.X = 200 * sin(realtimeSeconds);
	//this->SetActorLocationAndRotation(FVector(position, 10), FRotator(0, 0, rotation));


	////lab 2 test
	//FVector2D f_gravity = mass * FVector2D(0.0, -9.8);
	//AddForce(f_gravity);
}


