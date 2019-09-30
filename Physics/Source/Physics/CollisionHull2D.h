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
	// lab 5
	struct Collision {
		struct Contact {
			FVector2D point;
			FVector2D normal;
			float restitution;
		};
		CircleCollisionHull2D * a,* b;
		bool status; // did they actually collide
		FVector2D closingVelocity;
		Contact contacts[4];
		int contactCount;

	};
	enum CollisionHullType2D {
		hull_circle,
		hull_aabb,
		hull_obb
	};

	// TODO: add the collision argument to the subclasses.
	static bool TestCollision(UCollisionHull2D a, UCollisionHull2D b, Collision& c);
	
	virtual bool TestCollisionVsCircle(CircleCollisionHull2D other, Collision& c);
	virtual bool TestCollisionVsAABB(UAABBCollisionHull2D other, Collision& c);
	virtual bool TestCollisionVsOBB(UOBBCollisionHull2D other, Collision& c);

protected:
	UCollisionHull2D(CollisionHullType2D type_set);
	UCollisionHull2D() {};
	
private:
	CollisionHullType2D type;
};
