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
	UCircleCollisionHull2D(const FObjectInitializer& ObjectInitializer);
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float radius;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FVector2D position; // this should be set from particle 2D.
	UFUNCTION(BlueprintCallable, Category = "Collision2D")
	bool TestCollisionVsCircle(UCircleCollisionHull2D* other);
	UFUNCTION(BlueprintCallable, Category = "Collision2D")
	bool TestCollisionVsAABB(UAABBCollisionHull2D* other);
	UFUNCTION(BlueprintCallable, Category = "Collision2D")
	bool TestCollisionVsOBB(UOBBCollisionHull2D* other);
};
