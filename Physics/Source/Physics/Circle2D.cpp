// Fill out your copyright notice in the Description page of Project Settings.


#include "Circle2D.h"

ACircle2D::ACircle2D() {
	Super::AParticle2D();
	shape = SHAPES::CIRCLE;
}
void ACircle2D::setMomentOfInertia()
{
	// 1/2*m*r^2
	momentOfInertia = 0.5*mass*radius*radius;
}
