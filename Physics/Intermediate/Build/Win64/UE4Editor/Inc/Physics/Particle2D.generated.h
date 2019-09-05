// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PHYSICS_Particle2D_generated_h
#error "Particle2D.generated.h already included, missing '#pragma once' in Particle2D.h"
#endif
#define PHYSICS_Particle2D_generated_h

#define Physics_Source_Physics_Particle2D_h_12_RPC_WRAPPERS
#define Physics_Source_Physics_Particle2D_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Physics_Source_Physics_Particle2D_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAParticle2D(); \
	friend struct Z_Construct_UClass_AParticle2D_Statics; \
public: \
	DECLARE_CLASS(AParticle2D, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Physics"), NO_API) \
	DECLARE_SERIALIZER(AParticle2D)


#define Physics_Source_Physics_Particle2D_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAParticle2D(); \
	friend struct Z_Construct_UClass_AParticle2D_Statics; \
public: \
	DECLARE_CLASS(AParticle2D, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Physics"), NO_API) \
	DECLARE_SERIALIZER(AParticle2D)


#define Physics_Source_Physics_Particle2D_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AParticle2D(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AParticle2D) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AParticle2D); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AParticle2D); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AParticle2D(AParticle2D&&); \
	NO_API AParticle2D(const AParticle2D&); \
public:


#define Physics_Source_Physics_Particle2D_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AParticle2D(AParticle2D&&); \
	NO_API AParticle2D(const AParticle2D&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AParticle2D); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AParticle2D); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AParticle2D)


#define Physics_Source_Physics_Particle2D_h_12_PRIVATE_PROPERTY_OFFSET
#define Physics_Source_Physics_Particle2D_h_9_PROLOG
#define Physics_Source_Physics_Particle2D_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Physics_Source_Physics_Particle2D_h_12_PRIVATE_PROPERTY_OFFSET \
	Physics_Source_Physics_Particle2D_h_12_RPC_WRAPPERS \
	Physics_Source_Physics_Particle2D_h_12_INCLASS \
	Physics_Source_Physics_Particle2D_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Physics_Source_Physics_Particle2D_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Physics_Source_Physics_Particle2D_h_12_PRIVATE_PROPERTY_OFFSET \
	Physics_Source_Physics_Particle2D_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Physics_Source_Physics_Particle2D_h_12_INCLASS_NO_PURE_DECLS \
	Physics_Source_Physics_Particle2D_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Physics_Source_Physics_Particle2D_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
