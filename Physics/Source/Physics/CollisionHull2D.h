// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CollisionHull2D.generated.h"

/**
 * 
 */

class UCircleCollisionHull2D;
class UAABBCollisionHull2D;
class UOBBCollisionHull2D;

UCLASS()
class PHYSICS_API UCollisionHull2D : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	enum CollisionHullType2D {
		cull_circle,
		hull_aabb,
		hull_obb
	};
	static bool TestCollision(UCollisionHull2D a, UCollisionHull2D b); //get type, pick collision test
	// virtual void BeginPlay() override; //get component
	
	virtual bool TestCollisionVsCircle(UCircleCollisionHull2D other);
	virtual bool TestCollisionVsAABB(UAABBCollisionHull2D other);
	virtual bool TestCollisionVsOBB(UOBBCollisionHull2D other);

protected:
	UCollisionHull2D(CollisionHullType2D type_set);
	
private:
	CollisionHullType2D type;
};
