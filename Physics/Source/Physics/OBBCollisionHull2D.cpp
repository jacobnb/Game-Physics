// Fill out your copyright notice in the Description page of Project Settings.


#include "AABBCollisionHull2D.h"
#include "CircleCollisionHull2D.h"
#include "OBBCollisionHull2D.h"

bool UCircleCollisionHull2D::TestCollisionVsCircle(UCircleCollisionHull2D other)
{
	// see circle
}

bool UAABBCollisionHull2D::TestCollisionVsAABB(UAABBCollisionHull2D other)
{
	// See AABB
	return false;
}

bool UAABBCollisionHull2D::TestCollisionVsOBB(UOBBCollisionHull2D other)
{
	// same as AABB-OBB part2, twice
	// 1. .....
	return false;
}

