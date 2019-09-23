// Fill out your copyright notice in the Description page of Project Settings.


#include "Rod2D.h"
ARod2D::ARod2D() {
	Super::AParticle2D();
	shape = SHAPES::ROD;
}
void ARod2D::setMomentOfInertia()
{
	// 1/12 * m*l^2
	momentOfInertia = 1 / 12 * mass*length*length;
}
