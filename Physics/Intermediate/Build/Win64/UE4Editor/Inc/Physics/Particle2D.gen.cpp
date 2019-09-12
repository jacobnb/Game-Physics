// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Physics/Particle2D.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticle2D() {}
// Cross Module References
	PHYSICS_API UClass* Z_Construct_UClass_AParticle2D_NoRegister();
	PHYSICS_API UClass* Z_Construct_UClass_AParticle2D();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Physics();
	PHYSICS_API UFunction* Z_Construct_UFunction_AParticle2D_AddForce();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	PHYSICS_API UFunction* Z_Construct_UFunction_AParticle2D_GetMass();
	PHYSICS_API UFunction* Z_Construct_UFunction_AParticle2D_SetMass();
	PHYSICS_API UFunction* Z_Construct_UFunction_AParticle2D_UpdateAcceleration();
	PHYSICS_API UFunction* Z_Construct_UFunction_AParticle2D_updatePositionKinematic();
	PHYSICS_API UFunction* Z_Construct_UFunction_AParticle2D_updatePositionsExplicitEuler();
	PHYSICS_API UFunction* Z_Construct_UFunction_AParticle2D_updateRotationEulerExplicit();
	PHYSICS_API UFunction* Z_Construct_UFunction_AParticle2D_updateRotationKinematic();
// End Cross Module References
	void AParticle2D::StaticRegisterNativesAParticle2D()
	{
		UClass* Class = AParticle2D::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddForce", &AParticle2D::execAddForce },
			{ "GetMass", &AParticle2D::execGetMass },
			{ "SetMass", &AParticle2D::execSetMass },
			{ "UpdateAcceleration", &AParticle2D::execUpdateAcceleration },
			{ "updatePositionKinematic", &AParticle2D::execupdatePositionKinematic },
			{ "updatePositionsExplicitEuler", &AParticle2D::execupdatePositionsExplicitEuler },
			{ "updateRotationEulerExplicit", &AParticle2D::execupdateRotationEulerExplicit },
			{ "updateRotationKinematic", &AParticle2D::execupdateRotationKinematic },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AParticle2D_AddForce_Statics
	{
		struct Particle2D_eventAddForce_Parms
		{
			FVector2D newForce;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_newForce;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AParticle2D_AddForce_Statics::NewProp_newForce = { UE4CodeGen_Private::EPropertyClass::Struct, "newForce", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Particle2D_eventAddForce_Parms, newForce), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AParticle2D_AddForce_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AParticle2D_AddForce_Statics::NewProp_newForce,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AParticle2D_AddForce_Statics::Function_MetaDataParams[] = {
		{ "Category", "Particle2D" },
		{ "ModuleRelativePath", "Particle2D.h" },
		{ "ToolTip", "lab 2 2" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AParticle2D_AddForce_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AParticle2D, "AddForce", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(Particle2D_eventAddForce_Parms), Z_Construct_UFunction_AParticle2D_AddForce_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AParticle2D_AddForce_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AParticle2D_AddForce_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AParticle2D_AddForce_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AParticle2D_AddForce()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AParticle2D_AddForce_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AParticle2D_GetMass_Statics
	{
		struct Particle2D_eventGetMass_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AParticle2D_GetMass_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(Particle2D_eventGetMass_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AParticle2D_GetMass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AParticle2D_GetMass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AParticle2D_GetMass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Particle2D" },
		{ "ModuleRelativePath", "Particle2D.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AParticle2D_GetMass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AParticle2D, "GetMass", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x54020401, sizeof(Particle2D_eventGetMass_Parms), Z_Construct_UFunction_AParticle2D_GetMass_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AParticle2D_GetMass_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AParticle2D_GetMass_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AParticle2D_GetMass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AParticle2D_GetMass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AParticle2D_GetMass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AParticle2D_SetMass_Statics
	{
		struct Particle2D_eventSetMass_Parms
		{
			float newMass;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_newMass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AParticle2D_SetMass_Statics::NewProp_newMass = { UE4CodeGen_Private::EPropertyClass::Float, "newMass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Particle2D_eventSetMass_Parms, newMass), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AParticle2D_SetMass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AParticle2D_SetMass_Statics::NewProp_newMass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AParticle2D_SetMass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Particle2D" },
		{ "ModuleRelativePath", "Particle2D.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AParticle2D_SetMass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AParticle2D, "SetMass", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(Particle2D_eventSetMass_Parms), Z_Construct_UFunction_AParticle2D_SetMass_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AParticle2D_SetMass_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AParticle2D_SetMass_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AParticle2D_SetMass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AParticle2D_SetMass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AParticle2D_SetMass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AParticle2D_UpdateAcceleration_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AParticle2D_UpdateAcceleration_Statics::Function_MetaDataParams[] = {
		{ "Category", "Particle2D" },
		{ "ModuleRelativePath", "Particle2D.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AParticle2D_UpdateAcceleration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AParticle2D, "UpdateAcceleration", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AParticle2D_UpdateAcceleration_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AParticle2D_UpdateAcceleration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AParticle2D_UpdateAcceleration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AParticle2D_UpdateAcceleration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AParticle2D_updatePositionKinematic_Statics
	{
		struct Particle2D_eventupdatePositionKinematic_Parms
		{
			float dt;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_dt;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AParticle2D_updatePositionKinematic_Statics::NewProp_dt = { UE4CodeGen_Private::EPropertyClass::Float, "dt", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Particle2D_eventupdatePositionKinematic_Parms, dt), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AParticle2D_updatePositionKinematic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AParticle2D_updatePositionKinematic_Statics::NewProp_dt,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AParticle2D_updatePositionKinematic_Statics::Function_MetaDataParams[] = {
		{ "Category", "Particle2D" },
		{ "ModuleRelativePath", "Particle2D.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AParticle2D_updatePositionKinematic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AParticle2D, "updatePositionKinematic", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04080401, sizeof(Particle2D_eventupdatePositionKinematic_Parms), Z_Construct_UFunction_AParticle2D_updatePositionKinematic_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AParticle2D_updatePositionKinematic_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AParticle2D_updatePositionKinematic_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AParticle2D_updatePositionKinematic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AParticle2D_updatePositionKinematic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AParticle2D_updatePositionKinematic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AParticle2D_updatePositionsExplicitEuler_Statics
	{
		struct Particle2D_eventupdatePositionsExplicitEuler_Parms
		{
			float dt;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_dt;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AParticle2D_updatePositionsExplicitEuler_Statics::NewProp_dt = { UE4CodeGen_Private::EPropertyClass::Float, "dt", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Particle2D_eventupdatePositionsExplicitEuler_Parms, dt), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AParticle2D_updatePositionsExplicitEuler_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AParticle2D_updatePositionsExplicitEuler_Statics::NewProp_dt,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AParticle2D_updatePositionsExplicitEuler_Statics::Function_MetaDataParams[] = {
		{ "Category", "Particle2D" },
		{ "ModuleRelativePath", "Particle2D.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AParticle2D_updatePositionsExplicitEuler_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AParticle2D, "updatePositionsExplicitEuler", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04080401, sizeof(Particle2D_eventupdatePositionsExplicitEuler_Parms), Z_Construct_UFunction_AParticle2D_updatePositionsExplicitEuler_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AParticle2D_updatePositionsExplicitEuler_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AParticle2D_updatePositionsExplicitEuler_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AParticle2D_updatePositionsExplicitEuler_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AParticle2D_updatePositionsExplicitEuler()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AParticle2D_updatePositionsExplicitEuler_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AParticle2D_updateRotationEulerExplicit_Statics
	{
		struct Particle2D_eventupdateRotationEulerExplicit_Parms
		{
			float dt;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_dt;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AParticle2D_updateRotationEulerExplicit_Statics::NewProp_dt = { UE4CodeGen_Private::EPropertyClass::Float, "dt", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Particle2D_eventupdateRotationEulerExplicit_Parms, dt), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AParticle2D_updateRotationEulerExplicit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AParticle2D_updateRotationEulerExplicit_Statics::NewProp_dt,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AParticle2D_updateRotationEulerExplicit_Statics::Function_MetaDataParams[] = {
		{ "Category", "Particle2D" },
		{ "ModuleRelativePath", "Particle2D.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AParticle2D_updateRotationEulerExplicit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AParticle2D, "updateRotationEulerExplicit", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04080401, sizeof(Particle2D_eventupdateRotationEulerExplicit_Parms), Z_Construct_UFunction_AParticle2D_updateRotationEulerExplicit_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AParticle2D_updateRotationEulerExplicit_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AParticle2D_updateRotationEulerExplicit_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AParticle2D_updateRotationEulerExplicit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AParticle2D_updateRotationEulerExplicit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AParticle2D_updateRotationEulerExplicit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AParticle2D_updateRotationKinematic_Statics
	{
		struct Particle2D_eventupdateRotationKinematic_Parms
		{
			float dt;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_dt;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AParticle2D_updateRotationKinematic_Statics::NewProp_dt = { UE4CodeGen_Private::EPropertyClass::Float, "dt", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Particle2D_eventupdateRotationKinematic_Parms, dt), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AParticle2D_updateRotationKinematic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AParticle2D_updateRotationKinematic_Statics::NewProp_dt,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AParticle2D_updateRotationKinematic_Statics::Function_MetaDataParams[] = {
		{ "Category", "Particle2D" },
		{ "ModuleRelativePath", "Particle2D.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AParticle2D_updateRotationKinematic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AParticle2D, "updateRotationKinematic", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04080401, sizeof(Particle2D_eventupdateRotationKinematic_Parms), Z_Construct_UFunction_AParticle2D_updateRotationKinematic_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AParticle2D_updateRotationKinematic_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AParticle2D_updateRotationKinematic_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AParticle2D_updateRotationKinematic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AParticle2D_updateRotationKinematic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AParticle2D_updateRotationKinematic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AParticle2D_NoRegister()
	{
		return AParticle2D::StaticClass();
	}
	struct Z_Construct_UClass_AParticle2D_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_force_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_force;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_massInv_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_massInv;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mass_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_mass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_angular_accel_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_angular_accel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_angular_vel_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_angular_vel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_rotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_acceleration_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_acceleration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_velocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_velocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_position_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_position;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_startingMass_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_startingMass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AParticle2D_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Physics,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AParticle2D_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AParticle2D_AddForce, "AddForce" }, // 1728369630
		{ &Z_Construct_UFunction_AParticle2D_GetMass, "GetMass" }, // 1102794786
		{ &Z_Construct_UFunction_AParticle2D_SetMass, "SetMass" }, // 3741709781
		{ &Z_Construct_UFunction_AParticle2D_UpdateAcceleration, "UpdateAcceleration" }, // 1756924005
		{ &Z_Construct_UFunction_AParticle2D_updatePositionKinematic, "updatePositionKinematic" }, // 683476441
		{ &Z_Construct_UFunction_AParticle2D_updatePositionsExplicitEuler, "updatePositionsExplicitEuler" }, // 4167439110
		{ &Z_Construct_UFunction_AParticle2D_updateRotationEulerExplicit, "updateRotationEulerExplicit" }, // 1990633915
		{ &Z_Construct_UFunction_AParticle2D_updateRotationKinematic, "updateRotationKinematic" }, // 1920583903
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AParticle2D_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Particle2D.h" },
		{ "ModuleRelativePath", "Particle2D.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AParticle2D_Statics::NewProp_force_MetaData[] = {
		{ "Category", "Particle2D" },
		{ "ModuleRelativePath", "Particle2D.h" },
		{ "ToolTip", "lab2 2" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AParticle2D_Statics::NewProp_force = { UE4CodeGen_Private::EPropertyClass::Struct, "force", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000005, 1, nullptr, STRUCT_OFFSET(AParticle2D, force), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_AParticle2D_Statics::NewProp_force_MetaData, ARRAY_COUNT(Z_Construct_UClass_AParticle2D_Statics::NewProp_force_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AParticle2D_Statics::NewProp_massInv_MetaData[] = {
		{ "Category", "Particle2D" },
		{ "ModuleRelativePath", "Particle2D.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AParticle2D_Statics::NewProp_massInv = { UE4CodeGen_Private::EPropertyClass::Float, "massInv", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000005, 1, nullptr, STRUCT_OFFSET(AParticle2D, massInv), METADATA_PARAMS(Z_Construct_UClass_AParticle2D_Statics::NewProp_massInv_MetaData, ARRAY_COUNT(Z_Construct_UClass_AParticle2D_Statics::NewProp_massInv_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AParticle2D_Statics::NewProp_mass_MetaData[] = {
		{ "Category", "Particle2D" },
		{ "ModuleRelativePath", "Particle2D.h" },
		{ "ToolTip", "lab 2 step 1" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AParticle2D_Statics::NewProp_mass = { UE4CodeGen_Private::EPropertyClass::Float, "mass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000005, 1, nullptr, STRUCT_OFFSET(AParticle2D, mass), METADATA_PARAMS(Z_Construct_UClass_AParticle2D_Statics::NewProp_mass_MetaData, ARRAY_COUNT(Z_Construct_UClass_AParticle2D_Statics::NewProp_mass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AParticle2D_Statics::NewProp_angular_accel_MetaData[] = {
		{ "Category", "Particle2D" },
		{ "ModuleRelativePath", "Particle2D.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AParticle2D_Statics::NewProp_angular_accel = { UE4CodeGen_Private::EPropertyClass::Float, "angular_accel", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000005, 1, nullptr, STRUCT_OFFSET(AParticle2D, angular_accel), METADATA_PARAMS(Z_Construct_UClass_AParticle2D_Statics::NewProp_angular_accel_MetaData, ARRAY_COUNT(Z_Construct_UClass_AParticle2D_Statics::NewProp_angular_accel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AParticle2D_Statics::NewProp_angular_vel_MetaData[] = {
		{ "Category", "Particle2D" },
		{ "ModuleRelativePath", "Particle2D.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AParticle2D_Statics::NewProp_angular_vel = { UE4CodeGen_Private::EPropertyClass::Float, "angular_vel", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000005, 1, nullptr, STRUCT_OFFSET(AParticle2D, angular_vel), METADATA_PARAMS(Z_Construct_UClass_AParticle2D_Statics::NewProp_angular_vel_MetaData, ARRAY_COUNT(Z_Construct_UClass_AParticle2D_Statics::NewProp_angular_vel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AParticle2D_Statics::NewProp_rotation_MetaData[] = {
		{ "Category", "Particle2D" },
		{ "ModuleRelativePath", "Particle2D.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AParticle2D_Statics::NewProp_rotation = { UE4CodeGen_Private::EPropertyClass::Float, "rotation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000005, 1, nullptr, STRUCT_OFFSET(AParticle2D, rotation), METADATA_PARAMS(Z_Construct_UClass_AParticle2D_Statics::NewProp_rotation_MetaData, ARRAY_COUNT(Z_Construct_UClass_AParticle2D_Statics::NewProp_rotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AParticle2D_Statics::NewProp_acceleration_MetaData[] = {
		{ "Category", "Particle2D" },
		{ "ModuleRelativePath", "Particle2D.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AParticle2D_Statics::NewProp_acceleration = { UE4CodeGen_Private::EPropertyClass::Struct, "acceleration", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000005, 1, nullptr, STRUCT_OFFSET(AParticle2D, acceleration), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_AParticle2D_Statics::NewProp_acceleration_MetaData, ARRAY_COUNT(Z_Construct_UClass_AParticle2D_Statics::NewProp_acceleration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AParticle2D_Statics::NewProp_velocity_MetaData[] = {
		{ "Category", "Particle2D" },
		{ "ModuleRelativePath", "Particle2D.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AParticle2D_Statics::NewProp_velocity = { UE4CodeGen_Private::EPropertyClass::Struct, "velocity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000005, 1, nullptr, STRUCT_OFFSET(AParticle2D, velocity), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_AParticle2D_Statics::NewProp_velocity_MetaData, ARRAY_COUNT(Z_Construct_UClass_AParticle2D_Statics::NewProp_velocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AParticle2D_Statics::NewProp_position_MetaData[] = {
		{ "Category", "Particle2D" },
		{ "ModuleRelativePath", "Particle2D.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AParticle2D_Statics::NewProp_position = { UE4CodeGen_Private::EPropertyClass::Struct, "position", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000000005, 1, nullptr, STRUCT_OFFSET(AParticle2D, position), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_AParticle2D_Statics::NewProp_position_MetaData, ARRAY_COUNT(Z_Construct_UClass_AParticle2D_Statics::NewProp_position_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AParticle2D_Statics::NewProp_startingMass_MetaData[] = {
		{ "Category", "Particle2D" },
		{ "ModuleRelativePath", "Particle2D.h" },
		{ "ToolTip", "lab 2 step 1" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AParticle2D_Statics::NewProp_startingMass = { UE4CodeGen_Private::EPropertyClass::Float, "startingMass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AParticle2D, startingMass), METADATA_PARAMS(Z_Construct_UClass_AParticle2D_Statics::NewProp_startingMass_MetaData, ARRAY_COUNT(Z_Construct_UClass_AParticle2D_Statics::NewProp_startingMass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AParticle2D_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParticle2D_Statics::NewProp_force,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParticle2D_Statics::NewProp_massInv,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParticle2D_Statics::NewProp_mass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParticle2D_Statics::NewProp_angular_accel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParticle2D_Statics::NewProp_angular_vel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParticle2D_Statics::NewProp_rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParticle2D_Statics::NewProp_acceleration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParticle2D_Statics::NewProp_velocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParticle2D_Statics::NewProp_position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParticle2D_Statics::NewProp_startingMass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AParticle2D_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AParticle2D>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AParticle2D_Statics::ClassParams = {
		&AParticle2D::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AParticle2D_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AParticle2D_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AParticle2D_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AParticle2D_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AParticle2D()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AParticle2D_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AParticle2D, 893323833);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AParticle2D(Z_Construct_UClass_AParticle2D, &AParticle2D::StaticClass, TEXT("/Script/Physics"), TEXT("AParticle2D"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AParticle2D);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
