// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CollisionHull2D.h"
#include "OBBCollisionHull2D.generated.h"

/**
 * 
 */
class UAABBCollisionHull2D;
class OBBCollisionHull2D;

UCLASS()
class PHYSICS_API UOBBCollisionHull2D : public UCollisionHull2D
{
	GENERATED_BODY()
public:
	bool TestCollisionVsCircle(UCircleCollisionHull2D other);
	bool TestCollisionVsAABB(UAABBCollisionHull2D other);
	bool TestCollisionVsOBB(UOBBCollisionHull2D other);
};
