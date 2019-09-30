// Fill out your copyright notice in the Description page of Project Settings.


#include "CollisionHull2D.h"

#include "CircleCollisionHull2D.h"
#include "AABBCollisionHull2D.h"
#include "OBBCollisionHull2D.h"


bool UCollisionHull2D::TestCollision(UCollisionHull2D a, UCollisionHull2D b)
{
	//get type, pick collision test

	return false;
}

bool UCollisionHull2D::TestCollisionVsCircle(UCircleCollisionHull2D other)
{
	return false;
}

bool UCollisionHull2D::TestCollisionVsAABB(UAABBCollisionHull2D other)
{
	return false;
}

bool UCollisionHull2D::TestCollisionVsOBB(UOBBCollisionHull2D other)
{
	return false;
}

UCollisionHull2D::UCollisionHull2D(CollisionHullType2D type_set)
{
	type = type_set;
};
