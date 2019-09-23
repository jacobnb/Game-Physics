// Fill out your copyright notice in the Description page of Project Settings.


#include "CircleCollisionHull2D.h"
#include "AABBCollisionHull2D.h"
#include "OBBCollisionHull2D.h"

bool UCircleCollisionHull2D::TestCollisionVsCircle(UCircleCollisionHull2D other)
{
	// could use dot product
	float sqrDistance = (position - other.position).SizeSquared(); //not sure this works for distance.
	float sqrRadii = radius + other.radius;
	sqrRadii *= sqrRadii;
	return sqrDistance <= sqrRadii;
}

bool UCircleCollisionHull2D::TestCollisionVsAABB(UAABBCollisionHull2D other)
{
	// find the closest point to the circle on the box.
	// - Clamp the center of the circle to be in dimensions of box, gets closest point?
	// if closest point is within circle, pass. (point vs circle test)
	return false;
}

bool UCircleCollisionHull2D::TestCollisionVsOBB(UOBBCollisionHull2D other)
{
	// same as above, but first
	// multiply circle center by invs world matrix of box to move to box space
	// 
	return false;
}
