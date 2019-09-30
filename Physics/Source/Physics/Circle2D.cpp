// Fill out your copyright notice in the Description page of Project Settings.


#include "Circle2D.h"

ACircle2D::ACircle2D() {
	ColliderHull = new CircleCollisionHull2D();
	ColliderHull->position = position;

	// TODO: figure out how to attach mesh.
	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("<name>"));
}

void ACircle2D::setColliderRadius(float radius)
{
	ColliderHull->radius = radius;
}
