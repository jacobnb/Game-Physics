// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CollisionHull2D.h"
#include "AABBCollisionHull2D.generated.h"
class UCircleCollisionHull2D;
class UOBBCollisionHull2D;
/**
 * 
 */
UCLASS()
class PHYSICS_API UAABBCollisionHull2D : public UCollisionHull2D
{
	GENERATED_BODY()
		
public:
	// Define the box
	FVector2D botLeftCorner;
	FVector2D topRightCorner;

	bool TestCollisionVsCircle(UCircleCollisionHull2D other);
	bool TestCollisionVsAABB(UAABBCollisionHull2D other);
	bool TestCollisionVsOBB(UOBBCollisionHull2D other);
};
