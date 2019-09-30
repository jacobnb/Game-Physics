// Fill out your copyright notice in the Description page of Project Settings.


#include "CircleCollisionHull2D.h"
#include "AABBCollisionHull2D.h"
#include "OBBCollisionHull2D.h"
#include "Math/UnrealMathUtility.h"

CircleCollisionHull2D::CircleCollisionHull2D(): UCollisionHull2D(CollisionHullType2D::hull_circle) {

}

bool CircleCollisionHull2D::TestCollisionVsCircle(CircleCollisionHull2D other)
{
	// could use dot product
	float sqrDistance = (position - other.position).SizeSquared(); //not sure this works for distance.
	float sqrRadii = radius + other.radius;
	sqrRadii *= sqrRadii;
	return sqrDistance <= sqrRadii;
}

bool CircleCollisionHull2D::TestCollisionVsAABB(UAABBCollisionHull2D other)
{
	// find the closest point to the circle on the box.
	// - Clamp the center of the circle to be in dimensions of box, gets closest point?
	FVector2D closest_point;
	closest_point.X = FMath::Clamp(position.X, other.botLeftCorner.X, other.topRightCorner.X);
	closest_point.Y = FMath::Clamp(position.Y, other.botLeftCorner.Y, other.topRightCorner.Y);
	
	// if closest point is within circle, pass. (point vs circle test). square for efficiency
	return (position - closest_point).SizeSquared() < radius*radius;
}

bool CircleCollisionHull2D::TestCollisionVsOBB(UOBBCollisionHull2D other)
{
	// same as above, but first
	// multiply circle center by invs world matrix of box to move to box space
	// 
	return false;
}
