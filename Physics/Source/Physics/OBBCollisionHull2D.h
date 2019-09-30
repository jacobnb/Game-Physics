// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CollisionHull2D.h"

/**
 * 
 */
class UAABBCollisionHull2D;
class OBBCollisionHull2D;

class UOBBCollisionHull2D : public UCollisionHull2D
{
public:
	bool TestCollisionVsCircle(CircleCollisionHull2D other);
	bool TestCollisionVsAABB(UAABBCollisionHull2D other);
	bool TestCollisionVsOBB(UOBBCollisionHull2D other);
};
