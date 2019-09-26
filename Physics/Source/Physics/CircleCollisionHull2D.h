// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "CollisionHull2D.h"
#include "CircleCollisionHull2D.generated.h"

/**
 * 
 */

class UAABBCollisionHull2D;
class UOBBCollisionHull2D;
UCLASS()
class PHYSICS_API UCircleCollisionHull2D : public UCollisionHull2D
{
	GENERATED_BODY()
public:
	UCircleCollisionHull2D();
	float radius;
	FVector2D position; // this should be set from particle 2D.

	bool TestCollisionVsCircle(UCircleCollisionHull2D other);
	bool TestCollisionVsAABB(UAABBCollisionHull2D other);
	bool TestCollisionVsOBB(UOBBCollisionHull2D other);
};
