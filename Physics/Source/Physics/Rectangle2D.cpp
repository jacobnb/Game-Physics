// Fill out your copyright notice in the Description page of Project Settings.


#include "Rectangle2D.h"

ARectangle2D::ARectangle2D() {
	// Super::AParticle2D();
}
void ARectangle2D::setMomentOfInertia()
{
	// 1/12 * m(dx^2 + xy^2)
	momentOfInertia = 1 / 12 * mass*width*width*height*height;
}
