// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector2D;
#ifdef PHYSICS_ForceGenerator_generated_h
#error "ForceGenerator.generated.h already included, missing '#pragma once' in ForceGenerator.h"
#endif
#define PHYSICS_ForceGenerator_generated_h

#define Physics_Source_Physics_ForceGenerator_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGenerateForce_spring) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_particlePosition); \
		P_GET_STRUCT(FVector2D,Z_Param_anchorPosition); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_springRestingLength); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_springStiffnessCoefficient); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=P_THIS->GenerateForce_spring(Z_Param_particlePosition,Z_Param_anchorPosition,Z_Param_springRestingLength,Z_Param_springStiffnessCoefficient); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGenerateForce_drag) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_particleVelocity); \
		P_GET_STRUCT(FVector2D,Z_Param_fluidVelocity); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_fluidDensity); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_objectArea_crossSection); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_objectDragCoefficient); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=P_THIS->GenerateForce_drag(Z_Param_particleVelocity,Z_Param_fluidVelocity,Z_Param_fluidDensity,Z_Param_objectArea_crossSection,Z_Param_objectDragCoefficient); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGenerateForce_friction_kinetic) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_f_normal); \
		P_GET_STRUCT(FVector2D,Z_Param_particleVelocity); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_frictionCoefficient_kinetic); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=P_THIS->GenerateForce_friction_kinetic(Z_Param_f_normal,Z_Param_particleVelocity,Z_Param_frictionCoefficient_kinetic); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGenerateForce_friction_static) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_f_normal); \
		P_GET_STRUCT(FVector2D,Z_Param_f_opposing); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_frictionCoefficient_static); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=P_THIS->GenerateForce_friction_static(Z_Param_f_normal,Z_Param_f_opposing,Z_Param_frictionCoefficient_static); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGenerateForce_sliding) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_f_gravity); \
		P_GET_STRUCT(FVector2D,Z_Param_f_normal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=P_THIS->GenerateForce_sliding(Z_Param_f_gravity,Z_Param_f_normal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGenerateForce_normal) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_f_gravity); \
		P_GET_STRUCT(FVector2D,Z_Param_surfaceNormal_unit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=P_THIS->GenerateForce_normal(Z_Param_f_gravity,Z_Param_surfaceNormal_unit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgenerateGravity) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_particleMass); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_gravity); \
		P_GET_STRUCT(FVector2D,Z_Param_down); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=P_THIS->generateGravity(Z_Param_particleMass,Z_Param_gravity,Z_Param_down); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector2DProj) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_vec1); \
		P_GET_STRUCT(FVector2D,Z_Param_vec2); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=P_THIS->Vector2DProj(Z_Param_vec1,Z_Param_vec2); \
		P_NATIVE_END; \
	}


#define Physics_Source_Physics_ForceGenerator_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGenerateForce_spring) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_particlePosition); \
		P_GET_STRUCT(FVector2D,Z_Param_anchorPosition); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_springRestingLength); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_springStiffnessCoefficient); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=P_THIS->GenerateForce_spring(Z_Param_particlePosition,Z_Param_anchorPosition,Z_Param_springRestingLength,Z_Param_springStiffnessCoefficient); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGenerateForce_drag) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_particleVelocity); \
		P_GET_STRUCT(FVector2D,Z_Param_fluidVelocity); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_fluidDensity); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_objectArea_crossSection); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_objectDragCoefficient); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=P_THIS->GenerateForce_drag(Z_Param_particleVelocity,Z_Param_fluidVelocity,Z_Param_fluidDensity,Z_Param_objectArea_crossSection,Z_Param_objectDragCoefficient); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGenerateForce_friction_kinetic) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_f_normal); \
		P_GET_STRUCT(FVector2D,Z_Param_particleVelocity); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_frictionCoefficient_kinetic); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=P_THIS->GenerateForce_friction_kinetic(Z_Param_f_normal,Z_Param_particleVelocity,Z_Param_frictionCoefficient_kinetic); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGenerateForce_friction_static) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_f_normal); \
		P_GET_STRUCT(FVector2D,Z_Param_f_opposing); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_frictionCoefficient_static); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=P_THIS->GenerateForce_friction_static(Z_Param_f_normal,Z_Param_f_opposing,Z_Param_frictionCoefficient_static); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGenerateForce_sliding) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_f_gravity); \
		P_GET_STRUCT(FVector2D,Z_Param_f_normal); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=P_THIS->GenerateForce_sliding(Z_Param_f_gravity,Z_Param_f_normal); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGenerateForce_normal) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_f_gravity); \
		P_GET_STRUCT(FVector2D,Z_Param_surfaceNormal_unit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=P_THIS->GenerateForce_normal(Z_Param_f_gravity,Z_Param_surfaceNormal_unit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgenerateGravity) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_particleMass); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_gravity); \
		P_GET_STRUCT(FVector2D,Z_Param_down); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=P_THIS->generateGravity(Z_Param_particleMass,Z_Param_gravity,Z_Param_down); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVector2DProj) \
	{ \
		P_GET_STRUCT(FVector2D,Z_Param_vec1); \
		P_GET_STRUCT(FVector2D,Z_Param_vec2); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=P_THIS->Vector2DProj(Z_Param_vec1,Z_Param_vec2); \
		P_NATIVE_END; \
	}


#define Physics_Source_Physics_ForceGenerator_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUForceGenerator(); \
	friend struct Z_Construct_UClass_UForceGenerator_Statics; \
public: \
	DECLARE_CLASS(UForceGenerator, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Physics"), NO_API) \
	DECLARE_SERIALIZER(UForceGenerator)


#define Physics_Source_Physics_ForceGenerator_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUForceGenerator(); \
	friend struct Z_Construct_UClass_UForceGenerator_Statics; \
public: \
	DECLARE_CLASS(UForceGenerator, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Physics"), NO_API) \
	DECLARE_SERIALIZER(UForceGenerator)


#define Physics_Source_Physics_ForceGenerator_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UForceGenerator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UForceGenerator) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UForceGenerator); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UForceGenerator); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UForceGenerator(UForceGenerator&&); \
	NO_API UForceGenerator(const UForceGenerator&); \
public:


#define Physics_Source_Physics_ForceGenerator_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UForceGenerator(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UForceGenerator(UForceGenerator&&); \
	NO_API UForceGenerator(const UForceGenerator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UForceGenerator); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UForceGenerator); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UForceGenerator)


#define Physics_Source_Physics_ForceGenerator_h_15_PRIVATE_PROPERTY_OFFSET
#define Physics_Source_Physics_ForceGenerator_h_12_PROLOG
#define Physics_Source_Physics_ForceGenerator_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Physics_Source_Physics_ForceGenerator_h_15_PRIVATE_PROPERTY_OFFSET \
	Physics_Source_Physics_ForceGenerator_h_15_RPC_WRAPPERS \
	Physics_Source_Physics_ForceGenerator_h_15_INCLASS \
	Physics_Source_Physics_ForceGenerator_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Physics_Source_Physics_ForceGenerator_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Physics_Source_Physics_ForceGenerator_h_15_PRIVATE_PROPERTY_OFFSET \
	Physics_Source_Physics_ForceGenerator_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Physics_Source_Physics_ForceGenerator_h_15_INCLASS_NO_PURE_DECLS \
	Physics_Source_Physics_ForceGenerator_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PHYSICS_API UClass* StaticClass<class UForceGenerator>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Physics_Source_Physics_ForceGenerator_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
