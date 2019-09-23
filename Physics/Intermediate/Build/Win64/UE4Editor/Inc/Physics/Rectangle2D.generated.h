// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PHYSICS_Rectangle2D_generated_h
#error "Rectangle2D.generated.h already included, missing '#pragma once' in Rectangle2D.h"
#endif
#define PHYSICS_Rectangle2D_generated_h

#define Physics_Source_Physics_Rectangle2D_h_15_RPC_WRAPPERS
#define Physics_Source_Physics_Rectangle2D_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Physics_Source_Physics_Rectangle2D_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARectangle2D(); \
	friend struct Z_Construct_UClass_ARectangle2D_Statics; \
public: \
	DECLARE_CLASS(ARectangle2D, AParticle2D, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Physics"), NO_API) \
	DECLARE_SERIALIZER(ARectangle2D)


#define Physics_Source_Physics_Rectangle2D_h_15_INCLASS \
private: \
	static void StaticRegisterNativesARectangle2D(); \
	friend struct Z_Construct_UClass_ARectangle2D_Statics; \
public: \
	DECLARE_CLASS(ARectangle2D, AParticle2D, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Physics"), NO_API) \
	DECLARE_SERIALIZER(ARectangle2D)


#define Physics_Source_Physics_Rectangle2D_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARectangle2D(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARectangle2D) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARectangle2D); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARectangle2D); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARectangle2D(ARectangle2D&&); \
	NO_API ARectangle2D(const ARectangle2D&); \
public:


#define Physics_Source_Physics_Rectangle2D_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARectangle2D(ARectangle2D&&); \
	NO_API ARectangle2D(const ARectangle2D&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARectangle2D); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARectangle2D); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARectangle2D)


#define Physics_Source_Physics_Rectangle2D_h_15_PRIVATE_PROPERTY_OFFSET
#define Physics_Source_Physics_Rectangle2D_h_12_PROLOG
#define Physics_Source_Physics_Rectangle2D_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Physics_Source_Physics_Rectangle2D_h_15_PRIVATE_PROPERTY_OFFSET \
	Physics_Source_Physics_Rectangle2D_h_15_RPC_WRAPPERS \
	Physics_Source_Physics_Rectangle2D_h_15_INCLASS \
	Physics_Source_Physics_Rectangle2D_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Physics_Source_Physics_Rectangle2D_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Physics_Source_Physics_Rectangle2D_h_15_PRIVATE_PROPERTY_OFFSET \
	Physics_Source_Physics_Rectangle2D_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Physics_Source_Physics_Rectangle2D_h_15_INCLASS_NO_PURE_DECLS \
	Physics_Source_Physics_Rectangle2D_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PHYSICS_API UClass* StaticClass<class ARectangle2D>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Physics_Source_Physics_Rectangle2D_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
