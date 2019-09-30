// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CollisionHull2D.h"
class CircleCollisionHull2D;
class UOBBCollisionHull2D;
/**
 * 
 */
class UAABBCollisionHull2D : public UCollisionHull2D
{
public:
	// Define the box
	FVector2D botLeftCorner;
	FVector2D topRightCorner;

	bool TestCollisionVsCircle(CircleCollisionHull2D other);
	bool TestCollisionVsAABB(UAABBCollisionHull2D other);
	bool TestCollisionVsOBB(UOBBCollisionHull2D other);
};
