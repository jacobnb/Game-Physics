// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Math/Vector2D.h"
#include "CollisionHull2D.h"

/**
 * 
 */

class UAABBCollisionHull2D;
class UOBBCollisionHull2D;
class CircleCollisionHull2D : public UCollisionHull2D
{
public:
	CircleCollisionHull2D();
	float radius;
	FVector2D position; // this should be set from particle 2D.
	bool TestCollisionVsCircle(CircleCollisionHull2D other);
	bool TestCollisionVsAABB(UAABBCollisionHull2D other) override;
	bool TestCollisionVsOBB(UOBBCollisionHull2D other);
};
