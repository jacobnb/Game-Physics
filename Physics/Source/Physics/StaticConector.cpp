// Fill out your copyright notice in the Description page of Project Settings.


#include "StaticConector.h"
#include "CollisionManager.h"

StaticConector * StaticConector::getInstance()
{
	if (instance == nullptr) {
		instance = new StaticConector();
	}
	return instance;
}

StaticConector::StaticConector()
{
}

StaticConector::~StaticConector()
{
}
