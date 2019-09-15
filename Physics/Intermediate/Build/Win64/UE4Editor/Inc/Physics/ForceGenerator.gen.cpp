// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Physics/ForceGenerator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeForceGenerator() {}
// Cross Module References
	PHYSICS_API UClass* Z_Construct_UClass_UForceGenerator_NoRegister();
	PHYSICS_API UClass* Z_Construct_UClass_UForceGenerator();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_Physics();
	PHYSICS_API UFunction* Z_Construct_UFunction_UForceGenerator_GenerateForce_drag();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	PHYSICS_API UFunction* Z_Construct_UFunction_UForceGenerator_GenerateForce_friction_kinetic();
	PHYSICS_API UFunction* Z_Construct_UFunction_UForceGenerator_GenerateForce_friction_static();
	PHYSICS_API UFunction* Z_Construct_UFunction_UForceGenerator_GenerateForce_normal();
	PHYSICS_API UFunction* Z_Construct_UFunction_UForceGenerator_GenerateForce_sliding();
	PHYSICS_API UFunction* Z_Construct_UFunction_UForceGenerator_GenerateForce_spring();
	PHYSICS_API UFunction* Z_Construct_UFunction_UForceGenerator_generateGravity();
	PHYSICS_API UFunction* Z_Construct_UFunction_UForceGenerator_Vector2DProj();
// End Cross Module References
	void UForceGenerator::StaticRegisterNativesUForceGenerator()
	{
		UClass* Class = UForceGenerator::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GenerateForce_drag", &UForceGenerator::execGenerateForce_drag },
			{ "GenerateForce_friction_kinetic", &UForceGenerator::execGenerateForce_friction_kinetic },
			{ "GenerateForce_friction_static", &UForceGenerator::execGenerateForce_friction_static },
			{ "GenerateForce_normal", &UForceGenerator::execGenerateForce_normal },
			{ "GenerateForce_sliding", &UForceGenerator::execGenerateForce_sliding },
			{ "GenerateForce_spring", &UForceGenerator::execGenerateForce_spring },
			{ "generateGravity", &UForceGenerator::execgenerateGravity },
			{ "Vector2DProj", &UForceGenerator::execVector2DProj },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UForceGenerator_GenerateForce_drag_Statics
	{
		struct ForceGenerator_eventGenerateForce_drag_Parms
		{
			FVector2D particleVelocity;
			FVector2D fluidVelocity;
			float fluidDensity;
			float objectArea_crossSection;
			float objectDragCoefficient;
			FVector2D ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_objectDragCoefficient;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_objectArea_crossSection;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fluidDensity;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_fluidVelocity;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_particleVelocity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UForceGenerator_GenerateForce_drag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ForceGenerator_eventGenerateForce_drag_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UForceGenerator_GenerateForce_drag_Statics::NewProp_objectDragCoefficient = { "objectDragCoefficient", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ForceGenerator_eventGenerateForce_drag_Parms, objectDragCoefficient), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UForceGenerator_GenerateForce_drag_Statics::NewProp_objectArea_crossSection = { "objectArea_crossSection", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ForceGenerator_eventGenerateForce_drag_Parms, objectArea_crossSection), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UForceGenerator_GenerateForce_drag_Statics::NewProp_fluidDensity = { "fluidDensity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ForceGenerator_eventGenerateForce_drag_Parms, fluidDensity), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UForceGenerator_GenerateForce_drag_Statics::NewProp_fluidVelocity = { "fluidVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ForceGenerator_eventGenerateForce_drag_Parms, fluidVelocity), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UForceGenerator_GenerateForce_drag_Statics::NewProp_particleVelocity = { "particleVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ForceGenerator_eventGenerateForce_drag_Parms, particleVelocity), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UForceGenerator_GenerateForce_drag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UForceGenerator_GenerateForce_drag_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UForceGenerator_GenerateForce_drag_Statics::NewProp_objectDragCoefficient,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UForceGenerator_GenerateForce_drag_Statics::NewProp_objectArea_crossSection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UForceGenerator_GenerateForce_drag_Statics::NewProp_fluidDensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UForceGenerator_GenerateForce_drag_Statics::NewProp_fluidVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UForceGenerator_GenerateForce_drag_Statics::NewProp_particleVelocity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UForceGenerator_GenerateForce_drag_Statics::Function_MetaDataParams[] = {
		{ "Category", "Particle2D" },
		{ "ModuleRelativePath", "ForceGenerator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UForceGenerator_GenerateForce_drag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UForceGenerator, nullptr, "GenerateForce_drag", nullptr, nullptr, sizeof(ForceGenerator_eventGenerateForce_drag_Parms), Z_Construct_UFunction_UForceGenerator_GenerateForce_drag_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UForceGenerator_GenerateForce_drag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UForceGenerator_GenerateForce_drag_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UForceGenerator_GenerateForce_drag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UForceGenerator_GenerateForce_drag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UForceGenerator_GenerateForce_drag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UForceGenerator_GenerateForce_friction_kinetic_Statics
	{
		struct ForceGenerator_eventGenerateForce_friction_kinetic_Parms
		{
			FVector2D f_normal;
			FVector2D particleVelocity;
			float frictionCoefficient_kinetic;
			FVector2D ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_frictionCoefficient_kinetic;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_particleVelocity;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_f_normal;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UForceGenerator_GenerateForce_friction_kinetic_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ForceGenerator_eventGenerateForce_friction_kinetic_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UForceGenerator_GenerateForce_friction_kinetic_Statics::NewProp_frictionCoefficient_kinetic = { "frictionCoefficient_kinetic", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ForceGenerator_eventGenerateForce_friction_kinetic_Parms, frictionCoefficient_kinetic), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UForceGenerator_GenerateForce_friction_kinetic_Statics::NewProp_particleVelocity = { "particleVelocity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ForceGenerator_eventGenerateForce_friction_kinetic_Parms, particleVelocity), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UForceGenerator_GenerateForce_friction_kinetic_Statics::NewProp_f_normal = { "f_normal", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ForceGenerator_eventGenerateForce_friction_kinetic_Parms, f_normal), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UForceGenerator_GenerateForce_friction_kinetic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UForceGenerator_GenerateForce_friction_kinetic_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UForceGenerator_GenerateForce_friction_kinetic_Statics::NewProp_frictionCoefficient_kinetic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UForceGenerator_GenerateForce_friction_kinetic_Statics::NewProp_particleVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UForceGenerator_GenerateForce_friction_kinetic_Statics::NewProp_f_normal,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UForceGenerator_GenerateForce_friction_kinetic_Statics::Function_MetaDataParams[] = {
		{ "Category", "Particle2D" },
		{ "ModuleRelativePath", "ForceGenerator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UForceGenerator_GenerateForce_friction_kinetic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UForceGenerator, nullptr, "GenerateForce_friction_kinetic", nullptr, nullptr, sizeof(ForceGenerator_eventGenerateForce_friction_kinetic_Parms), Z_Construct_UFunction_UForceGenerator_GenerateForce_friction_kinetic_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UForceGenerator_GenerateForce_friction_kinetic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UForceGenerator_GenerateForce_friction_kinetic_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UForceGenerator_GenerateForce_friction_kinetic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UForceGenerator_GenerateForce_friction_kinetic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UForceGenerator_GenerateForce_friction_kinetic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UForceGenerator_GenerateForce_friction_static_Statics
	{
		struct ForceGenerator_eventGenerateForce_friction_static_Parms
		{
			FVector2D f_normal;
			FVector2D f_opposing;
			float frictionCoefficient_static;
			FVector2D ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_frictionCoefficient_static;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_f_opposing;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_f_normal;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UForceGenerator_GenerateForce_friction_static_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ForceGenerator_eventGenerateForce_friction_static_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UForceGenerator_GenerateForce_friction_static_Statics::NewProp_frictionCoefficient_static = { "frictionCoefficient_static", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ForceGenerator_eventGenerateForce_friction_static_Parms, frictionCoefficient_static), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UForceGenerator_GenerateForce_friction_static_Statics::NewProp_f_opposing = { "f_opposing", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ForceGenerator_eventGenerateForce_friction_static_Parms, f_opposing), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UForceGenerator_GenerateForce_friction_static_Statics::NewProp_f_normal = { "f_normal", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ForceGenerator_eventGenerateForce_friction_static_Parms, f_normal), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UForceGenerator_GenerateForce_friction_static_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UForceGenerator_GenerateForce_friction_static_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UForceGenerator_GenerateForce_friction_static_Statics::NewProp_frictionCoefficient_static,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UForceGenerator_GenerateForce_friction_static_Statics::NewProp_f_opposing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UForceGenerator_GenerateForce_friction_static_Statics::NewProp_f_normal,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UForceGenerator_GenerateForce_friction_static_Statics::Function_MetaDataParams[] = {
		{ "Category", "Particle2D" },
		{ "ModuleRelativePath", "ForceGenerator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UForceGenerator_GenerateForce_friction_static_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UForceGenerator, nullptr, "GenerateForce_friction_static", nullptr, nullptr, sizeof(ForceGenerator_eventGenerateForce_friction_static_Parms), Z_Construct_UFunction_UForceGenerator_GenerateForce_friction_static_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UForceGenerator_GenerateForce_friction_static_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UForceGenerator_GenerateForce_friction_static_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UForceGenerator_GenerateForce_friction_static_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UForceGenerator_GenerateForce_friction_static()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UForceGenerator_GenerateForce_friction_static_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UForceGenerator_GenerateForce_normal_Statics
	{
		struct ForceGenerator_eventGenerateForce_normal_Parms
		{
			FVector2D f_gravity;
			FVector2D surfaceNormal_unit;
			FVector2D ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_surfaceNormal_unit;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_f_gravity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UForceGenerator_GenerateForce_normal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ForceGenerator_eventGenerateForce_normal_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UForceGenerator_GenerateForce_normal_Statics::NewProp_surfaceNormal_unit = { "surfaceNormal_unit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ForceGenerator_eventGenerateForce_normal_Parms, surfaceNormal_unit), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UForceGenerator_GenerateForce_normal_Statics::NewProp_f_gravity = { "f_gravity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ForceGenerator_eventGenerateForce_normal_Parms, f_gravity), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UForceGenerator_GenerateForce_normal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UForceGenerator_GenerateForce_normal_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UForceGenerator_GenerateForce_normal_Statics::NewProp_surfaceNormal_unit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UForceGenerator_GenerateForce_normal_Statics::NewProp_f_gravity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UForceGenerator_GenerateForce_normal_Statics::Function_MetaDataParams[] = {
		{ "Category", "Particle2D" },
		{ "ModuleRelativePath", "ForceGenerator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UForceGenerator_GenerateForce_normal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UForceGenerator, nullptr, "GenerateForce_normal", nullptr, nullptr, sizeof(ForceGenerator_eventGenerateForce_normal_Parms), Z_Construct_UFunction_UForceGenerator_GenerateForce_normal_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UForceGenerator_GenerateForce_normal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UForceGenerator_GenerateForce_normal_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UForceGenerator_GenerateForce_normal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UForceGenerator_GenerateForce_normal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UForceGenerator_GenerateForce_normal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UForceGenerator_GenerateForce_sliding_Statics
	{
		struct ForceGenerator_eventGenerateForce_sliding_Parms
		{
			FVector2D f_gravity;
			FVector2D f_normal;
			FVector2D ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_f_normal;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_f_gravity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UForceGenerator_GenerateForce_sliding_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ForceGenerator_eventGenerateForce_sliding_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UForceGenerator_GenerateForce_sliding_Statics::NewProp_f_normal = { "f_normal", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ForceGenerator_eventGenerateForce_sliding_Parms, f_normal), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UForceGenerator_GenerateForce_sliding_Statics::NewProp_f_gravity = { "f_gravity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ForceGenerator_eventGenerateForce_sliding_Parms, f_gravity), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UForceGenerator_GenerateForce_sliding_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UForceGenerator_GenerateForce_sliding_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UForceGenerator_GenerateForce_sliding_Statics::NewProp_f_normal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UForceGenerator_GenerateForce_sliding_Statics::NewProp_f_gravity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UForceGenerator_GenerateForce_sliding_Statics::Function_MetaDataParams[] = {
		{ "Category", "Particle2D" },
		{ "ModuleRelativePath", "ForceGenerator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UForceGenerator_GenerateForce_sliding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UForceGenerator, nullptr, "GenerateForce_sliding", nullptr, nullptr, sizeof(ForceGenerator_eventGenerateForce_sliding_Parms), Z_Construct_UFunction_UForceGenerator_GenerateForce_sliding_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UForceGenerator_GenerateForce_sliding_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UForceGenerator_GenerateForce_sliding_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UForceGenerator_GenerateForce_sliding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UForceGenerator_GenerateForce_sliding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UForceGenerator_GenerateForce_sliding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UForceGenerator_GenerateForce_spring_Statics
	{
		struct ForceGenerator_eventGenerateForce_spring_Parms
		{
			FVector2D particlePosition;
			FVector2D anchorPosition;
			float springRestingLength;
			float springStiffnessCoefficient;
			FVector2D ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_springStiffnessCoefficient;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_springRestingLength;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_anchorPosition;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_particlePosition;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UForceGenerator_GenerateForce_spring_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ForceGenerator_eventGenerateForce_spring_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UForceGenerator_GenerateForce_spring_Statics::NewProp_springStiffnessCoefficient = { "springStiffnessCoefficient", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ForceGenerator_eventGenerateForce_spring_Parms, springStiffnessCoefficient), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UForceGenerator_GenerateForce_spring_Statics::NewProp_springRestingLength = { "springRestingLength", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ForceGenerator_eventGenerateForce_spring_Parms, springRestingLength), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UForceGenerator_GenerateForce_spring_Statics::NewProp_anchorPosition = { "anchorPosition", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ForceGenerator_eventGenerateForce_spring_Parms, anchorPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UForceGenerator_GenerateForce_spring_Statics::NewProp_particlePosition = { "particlePosition", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ForceGenerator_eventGenerateForce_spring_Parms, particlePosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UForceGenerator_GenerateForce_spring_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UForceGenerator_GenerateForce_spring_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UForceGenerator_GenerateForce_spring_Statics::NewProp_springStiffnessCoefficient,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UForceGenerator_GenerateForce_spring_Statics::NewProp_springRestingLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UForceGenerator_GenerateForce_spring_Statics::NewProp_anchorPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UForceGenerator_GenerateForce_spring_Statics::NewProp_particlePosition,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UForceGenerator_GenerateForce_spring_Statics::Function_MetaDataParams[] = {
		{ "Category", "Particle2D" },
		{ "ModuleRelativePath", "ForceGenerator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UForceGenerator_GenerateForce_spring_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UForceGenerator, nullptr, "GenerateForce_spring", nullptr, nullptr, sizeof(ForceGenerator_eventGenerateForce_spring_Parms), Z_Construct_UFunction_UForceGenerator_GenerateForce_spring_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UForceGenerator_GenerateForce_spring_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UForceGenerator_GenerateForce_spring_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UForceGenerator_GenerateForce_spring_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UForceGenerator_GenerateForce_spring()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UForceGenerator_GenerateForce_spring_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UForceGenerator_generateGravity_Statics
	{
		struct ForceGenerator_eventgenerateGravity_Parms
		{
			float particleMass;
			float gravity;
			FVector2D down;
			FVector2D ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_down;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_gravity;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_particleMass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UForceGenerator_generateGravity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ForceGenerator_eventgenerateGravity_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UForceGenerator_generateGravity_Statics::NewProp_down = { "down", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ForceGenerator_eventgenerateGravity_Parms, down), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UForceGenerator_generateGravity_Statics::NewProp_gravity = { "gravity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ForceGenerator_eventgenerateGravity_Parms, gravity), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UForceGenerator_generateGravity_Statics::NewProp_particleMass = { "particleMass", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ForceGenerator_eventgenerateGravity_Parms, particleMass), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UForceGenerator_generateGravity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UForceGenerator_generateGravity_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UForceGenerator_generateGravity_Statics::NewProp_down,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UForceGenerator_generateGravity_Statics::NewProp_gravity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UForceGenerator_generateGravity_Statics::NewProp_particleMass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UForceGenerator_generateGravity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Particle2D" },
		{ "ModuleRelativePath", "ForceGenerator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UForceGenerator_generateGravity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UForceGenerator, nullptr, "generateGravity", nullptr, nullptr, sizeof(ForceGenerator_eventgenerateGravity_Parms), Z_Construct_UFunction_UForceGenerator_generateGravity_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UForceGenerator_generateGravity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UForceGenerator_generateGravity_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UForceGenerator_generateGravity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UForceGenerator_generateGravity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UForceGenerator_generateGravity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UForceGenerator_Vector2DProj_Statics
	{
		struct ForceGenerator_eventVector2DProj_Parms
		{
			FVector2D vec1;
			FVector2D vec2;
			FVector2D ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_vec2;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_vec1;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UForceGenerator_Vector2DProj_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ForceGenerator_eventVector2DProj_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UForceGenerator_Vector2DProj_Statics::NewProp_vec2 = { "vec2", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ForceGenerator_eventVector2DProj_Parms, vec2), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UForceGenerator_Vector2DProj_Statics::NewProp_vec1 = { "vec1", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ForceGenerator_eventVector2DProj_Parms, vec1), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UForceGenerator_Vector2DProj_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UForceGenerator_Vector2DProj_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UForceGenerator_Vector2DProj_Statics::NewProp_vec2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UForceGenerator_Vector2DProj_Statics::NewProp_vec1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UForceGenerator_Vector2DProj_Statics::Function_MetaDataParams[] = {
		{ "Category", "Particle2D" },
		{ "ModuleRelativePath", "ForceGenerator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UForceGenerator_Vector2DProj_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UForceGenerator, nullptr, "Vector2DProj", nullptr, nullptr, sizeof(ForceGenerator_eventVector2DProj_Parms), Z_Construct_UFunction_UForceGenerator_Vector2DProj_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UForceGenerator_Vector2DProj_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UForceGenerator_Vector2DProj_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UForceGenerator_Vector2DProj_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UForceGenerator_Vector2DProj()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UForceGenerator_Vector2DProj_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UForceGenerator_NoRegister()
	{
		return UForceGenerator::StaticClass();
	}
	struct Z_Construct_UClass_UForceGenerator_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UForceGenerator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Physics,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UForceGenerator_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UForceGenerator_GenerateForce_drag, "GenerateForce_drag" }, // 2929217696
		{ &Z_Construct_UFunction_UForceGenerator_GenerateForce_friction_kinetic, "GenerateForce_friction_kinetic" }, // 1920479338
		{ &Z_Construct_UFunction_UForceGenerator_GenerateForce_friction_static, "GenerateForce_friction_static" }, // 2690642085
		{ &Z_Construct_UFunction_UForceGenerator_GenerateForce_normal, "GenerateForce_normal" }, // 3685089307
		{ &Z_Construct_UFunction_UForceGenerator_GenerateForce_sliding, "GenerateForce_sliding" }, // 125588387
		{ &Z_Construct_UFunction_UForceGenerator_GenerateForce_spring, "GenerateForce_spring" }, // 2795897649
		{ &Z_Construct_UFunction_UForceGenerator_generateGravity, "generateGravity" }, // 1785349291
		{ &Z_Construct_UFunction_UForceGenerator_Vector2DProj, "Vector2DProj" }, // 2371410469
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UForceGenerator_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "ForceGenerator.h" },
		{ "ModuleRelativePath", "ForceGenerator.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UForceGenerator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UForceGenerator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UForceGenerator_Statics::ClassParams = {
		&UForceGenerator::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UForceGenerator_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UForceGenerator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UForceGenerator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UForceGenerator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UForceGenerator, 2196709);
	template<> PHYSICS_API UClass* StaticClass<UForceGenerator>()
	{
		return UForceGenerator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UForceGenerator(Z_Construct_UClass_UForceGenerator, &UForceGenerator::StaticClass, TEXT("/Script/Physics"), TEXT("UForceGenerator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UForceGenerator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
