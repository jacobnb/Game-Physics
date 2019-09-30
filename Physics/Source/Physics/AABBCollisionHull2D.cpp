// Fill out your copyright notice in the Description page of Project Settings.


#include "AABBCollisionHull2D.h"
#include "CircleCollisionHull2D.h"
#include "OBBCollisionHull2D.h"

bool UAABBCollisionHull2D::TestCollisionVsCircle(CircleCollisionHull2D other)
{
	// see circle
	return false;
}

bool UAABBCollisionHull2D::TestCollisionVsAABB(UAABBCollisionHull2D other)
{
	// pass if, for all axes, max extent of A is greater than min extent of B
	// 1. .........
	return false;
}

bool UAABBCollisionHull2D::TestCollisionVsOBB(UOBBCollisionHull2D other)
{
	// same as above, but first...
	// take axis extents of non-axis aligned box (make a bigger aabb) and run above test.
	// then, transform AABB into OBB's space, find max extents, run above test.
	// 1. .........
	return false;
}
