// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "Circle2D.h"
#include "CollisionManager.generated.h"




UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PHYSICS_API UCollisionManager : public USceneComponent
{
	GENERATED_BODY()
public:	
	// Sets default values for this component's properties
	UCollisionManager();
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Collider2D")
	TArray<ACircle2D* > Colliders;
	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	// UFUNCTION(BlueprintCallable, Category = "Collider2D")
protected:
	// Called when the game starts
	virtual void BeginPlay() override;
};
