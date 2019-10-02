// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
class UCollisionManager;

/**
 * This is a singleton to connect whatever parts need connecting.
 * It's bad and shouldn't exist, but hopefully it works.
 * It's also mispelled.
 */
class PHYSICS_API StaticConector
{
public:
	static StaticConector* getInstance();
	inline void setCollisionManager(UCollisionManager* colManager) {
		collisionManager = colManager;
	};
	static StaticConector* instance;
protected:
	StaticConector();
	~StaticConector();
	UCollisionManager* collisionManager;
};
