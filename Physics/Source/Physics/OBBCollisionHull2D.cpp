// Fill out your copyright notice in the Description page of Project Settings.

#include "OBBCollisionHull2D.h" // this has to be first include?
#include "AABBCollisionHull2D.h"
#include "CircleCollisionHull2D.h"


bool UOBBCollisionHull2D::TestCollisionVsCircle(UCircleCollisionHull2D other)
{
	// see circle
	return false;
}

bool UOBBCollisionHull2D::TestCollisionVsAABB(UAABBCollisionHull2D other)
{
	// See AABB
	return false;
}

bool UOBBCollisionHull2D::TestCollisionVsOBB(UOBBCollisionHull2D other)
{
	// same as AABB-OBB part2, twice
	// 1. .....
	return false;
}

