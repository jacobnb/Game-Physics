// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

/**
 * 
 */

class CircleCollisionHull2D;
class UAABBCollisionHull2D;
class UOBBCollisionHull2D;

class UCollisionHull2D
{
public:
	enum CollisionHullType2D {
		hull_circle,
		hull_aabb,
		hull_obb
	};
	static bool TestCollision(UCollisionHull2D a, UCollisionHull2D b); 
	
	virtual bool TestCollisionVsCircle(CircleCollisionHull2D other);
	virtual bool TestCollisionVsAABB(UAABBCollisionHull2D other);
	virtual bool TestCollisionVsOBB(UOBBCollisionHull2D other);

protected:
	UCollisionHull2D(CollisionHullType2D type_set);
	UCollisionHull2D() {};
	
private:
	CollisionHullType2D type;
};
