// Fill out your copyright notice in the Description page of Project Settings.

#include "Particle2D.h"
#include "Kismet/GameplayStatics.h"
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
	rotation = FVector2D(0, 0);
	position = FVector2D(this->GetActorLocation());

	velocity.X = -200;
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

// Called every frame
void AParticle2D::Tick(float DeltaTime)
{
	//UWorld* world = GetWorld();
	Super::Tick(DeltaTime);
	//updatePositionsExplicitEuler(DeltaTime);
	//float realtimeSeconds = UGameplayStatics::GetTimeSeconds(dynamic_cast<UObject*>(world));
	//acceleration.X = 200 * sin(realtimeSeconds);
	//this->SetActorLocationAndRotation(FVector(position, 10), FRotator(rotation.X, rotation.Y, 0));


	////lab 2 test
	//FVector2D f_gravity = mass * FVector2D(0.0, -9.8);
	//AddForce(f_gravity);
}


