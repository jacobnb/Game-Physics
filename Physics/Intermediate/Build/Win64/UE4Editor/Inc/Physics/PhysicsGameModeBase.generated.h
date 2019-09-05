// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PHYSICS_PhysicsGameModeBase_generated_h
#error "PhysicsGameModeBase.generated.h already included, missing '#pragma once' in PhysicsGameModeBase.h"
#endif
#define PHYSICS_PhysicsGameModeBase_generated_h

#define Physics_Source_Physics_PhysicsGameModeBase_h_15_RPC_WRAPPERS
#define Physics_Source_Physics_PhysicsGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Physics_Source_Physics_PhysicsGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPhysicsGameModeBase(); \
	friend struct Z_Construct_UClass_APhysicsGameModeBase_Statics; \
public: \
	DECLARE_CLASS(APhysicsGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Physics"), NO_API) \
	DECLARE_SERIALIZER(APhysicsGameModeBase)


#define Physics_Source_Physics_PhysicsGameModeBase_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAPhysicsGameModeBase(); \
	friend struct Z_Construct_UClass_APhysicsGameModeBase_Statics; \
public: \
	DECLARE_CLASS(APhysicsGameModeBase, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Physics"), NO_API) \
	DECLARE_SERIALIZER(APhysicsGameModeBase)


#define Physics_Source_Physics_PhysicsGameModeBase_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APhysicsGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APhysicsGameModeBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APhysicsGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APhysicsGameModeBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APhysicsGameModeBase(APhysicsGameModeBase&&); \
	NO_API APhysicsGameModeBase(const APhysicsGameModeBase&); \
public:


#define Physics_Source_Physics_PhysicsGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APhysicsGameModeBase(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APhysicsGameModeBase(APhysicsGameModeBase&&); \
	NO_API APhysicsGameModeBase(const APhysicsGameModeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APhysicsGameModeBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APhysicsGameModeBase); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APhysicsGameModeBase)


#define Physics_Source_Physics_PhysicsGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET
#define Physics_Source_Physics_PhysicsGameModeBase_h_12_PROLOG
#define Physics_Source_Physics_PhysicsGameModeBase_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Physics_Source_Physics_PhysicsGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	Physics_Source_Physics_PhysicsGameModeBase_h_15_RPC_WRAPPERS \
	Physics_Source_Physics_PhysicsGameModeBase_h_15_INCLASS \
	Physics_Source_Physics_PhysicsGameModeBase_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Physics_Source_Physics_PhysicsGameModeBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Physics_Source_Physics_PhysicsGameModeBase_h_15_PRIVATE_PROPERTY_OFFSET \
	Physics_Source_Physics_PhysicsGameModeBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Physics_Source_Physics_PhysicsGameModeBase_h_15_INCLASS_NO_PURE_DECLS \
	Physics_Source_Physics_PhysicsGameModeBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Physics_Source_Physics_PhysicsGameModeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
