// Fill out your copyright notice in the Description page of Project Settings.


#include "Ring2D.h"

ARing2D::ARing2D() {
	// Super::AParticle2D();
	shape = SHAPES::RING;
}
void ARing2D::setMomentOfInertia()
{
	// 1/2 * m *(router^2 + rinner^2)
	momentOfInertia = 0.5*mass*radiusInner*radiusInner*radiusOuter*radiusOuter;
}
