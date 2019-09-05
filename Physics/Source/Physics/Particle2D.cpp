// Fill out your copyright notice in the Description page of Project Settings.

#include "Particle2D.h"

// Sets default values
AParticle2D::AParticle2D()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AParticle2D::BeginPlay()
{
	Super::BeginPlay();
	// Hardcoded start.
	rotation = FVector2D(0, 0);
	position = FVector2D(this->GetActorLocation());

	velocity.X = -2;
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
	Super::Tick(DeltaTime);
	updatePositionsExplicitEuler(DeltaTime);
	float realtimeSeconds = UGameplayStatics::GetRealTimeSeconds(GetWorld());;
	acceleration.X = 2 * sin(UGameplayStatics::GetRealTimeSeconds(GetWorld()));

	this->SetActorLocationAndRotation(FVector(position, 0), FRotator(rotation.X, rotation.Y, 0));
}


