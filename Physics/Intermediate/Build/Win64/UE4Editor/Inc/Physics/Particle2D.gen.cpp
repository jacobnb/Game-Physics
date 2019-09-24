// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
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
	PHYSICS_API UEnum* Z_Construct_UEnum_Physics_SHAPES();
	UPackage* Z_Construct_UPackage__Script_Physics();
	PHYSICS_API UClass* Z_Construct_UClass_AParticle2D_NoRegister();
	PHYSICS_API UClass* Z_Construct_UClass_AParticle2D();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	PHYSICS_API UFunction* Z_Construct_UFunction_AParticle2D_AddForce();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	PHYSICS_API UFunction* Z_Construct_UFunction_AParticle2D_applyTorque();
	PHYSICS_API UFunction* Z_Construct_UFunction_AParticle2D_GetMass();
	PHYSICS_API UFunction* Z_Construct_UFunction_AParticle2D_SetMass();
	PHYSICS_API UFunction* Z_Construct_UFunction_AParticle2D_setMomentOfInertia();
	PHYSICS_API UFunction* Z_Construct_UFunction_AParticle2D_UpdateAcceleration();
	PHYSICS_API UFunction* Z_Construct_UFunction_AParticle2D_updateAngularAcceleration();
	PHYSICS_API UFunction* Z_Construct_UFunction_AParticle2D_updatePositionKinematic();
	PHYSICS_API UFunction* Z_Construct_UFunction_AParticle2D_updatePositionsExplicitEuler();
	PHYSICS_API UFunction* Z_Construct_UFunction_AParticle2D_updateRotationEulerExplicit();
	PHYSICS_API UFunction* Z_Construct_UFunction_AParticle2D_updateRotationKinematic();
// End Cross Module References
	static UEnum* SHAPES_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Physics_SHAPES, Z_Construct_UPackage__Script_Physics(), TEXT("SHAPES"));
		}
		return Singleton;
	}
	template<> PHYSICS_API UEnum* StaticEnum<SHAPES>()
	{
		return SHAPES_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_SHAPES(SHAPES_StaticEnum, TEXT("/Script/Physics"), TEXT("SHAPES"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Physics_SHAPES_Hash() { return 4218278050U; }
	UEnum* Z_Construct_UEnum_Physics_SHAPES()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Physics();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("SHAPES"), 0, Get_Z_Construct_UEnum_Physics_SHAPES_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "SHAPES::RECTANGLE", (int64)SHAPES::RECTANGLE },
				{ "SHAPES::ROD", (int64)SHAPES::ROD },
				{ "SHAPES::RING", (int64)SHAPES::RING },
				{ "SHAPES::CIRCLE", (int64)SHAPES::CIRCLE },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "CIRCLE.Name", "SHAPES::CIRCLE" },
				{ "ModuleRelativePath", "Particle2D.h" },
				{ "RECTANGLE.Name", "SHAPES::RECTANGLE" },
				{ "RING.Name", "SHAPES::RING" },
				{ "ROD.Name", "SHAPES::ROD" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Physics,
				nullptr,
				"SHAPES",
				"SHAPES",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void AParticle2D::StaticRegisterNativesAParticle2D()
	{
		UClass* Class = AParticle2D::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddForce", &AParticle2D::execAddForce },
			{ "applyTorque", &AParticle2D::execapplyTorque },
			{ "GetMass", &AParticle2D::execGetMass },
			{ "SetMass", &AParticle2D::execSetMass },
			{ "setMomentOfInertia", &AParticle2D::execsetMomentOfInertia },
			{ "UpdateAcceleration", &AParticle2D::execUpdateAcceleration },
			{ "updateAngularAcceleration", &AParticle2D::execupdateAngularAcceleration },
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AParticle2D_AddForce_Statics::NewProp_newForce = { "newForce", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Particle2D_eventAddForce_Parms, newForce), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AParticle2D_AddForce_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AParticle2D_AddForce_Statics::NewProp_newForce,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AParticle2D_AddForce_Statics::Function_MetaDataParams[] = {
		{ "Category", "Particle2D" },
		{ "Comment", "//lab 2 2\n" },
		{ "ModuleRelativePath", "Particle2D.h" },
		{ "ToolTip", "lab 2 2" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AParticle2D_AddForce_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AParticle2D, nullptr, "AddForce", nullptr, nullptr, sizeof(Particle2D_eventAddForce_Parms), Z_Construct_UFunction_AParticle2D_AddForce_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AParticle2D_AddForce_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AParticle2D_AddForce_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AParticle2D_AddForce_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AParticle2D_AddForce()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AParticle2D_AddForce_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AParticle2D_applyTorque_Statics
	{
		struct Particle2D_eventapplyTorque_Parms
		{
			FVector2D pf;
			FVector2D force;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_force;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_pf;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AParticle2D_applyTorque_Statics::NewProp_force = { "force", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Particle2D_eventapplyTorque_Parms, force), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AParticle2D_applyTorque_Statics::NewProp_pf = { "pf", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Particle2D_eventapplyTorque_Parms, pf), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AParticle2D_applyTorque_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AParticle2D_applyTorque_Statics::NewProp_force,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AParticle2D_applyTorque_Statics::NewProp_pf,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AParticle2D_applyTorque_Statics::Function_MetaDataParams[] = {
		{ "Category", "Particle2D" },
		{ "ModuleRelativePath", "Particle2D.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AParticle2D_applyTorque_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AParticle2D, nullptr, "applyTorque", nullptr, nullptr, sizeof(Particle2D_eventapplyTorque_Parms), Z_Construct_UFunction_AParticle2D_applyTorque_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AParticle2D_applyTorque_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04880401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AParticle2D_applyTorque_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AParticle2D_applyTorque_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AParticle2D_applyTorque()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AParticle2D_applyTorque_Statics::FuncParams);
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AParticle2D_GetMass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Particle2D_eventGetMass_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AParticle2D_GetMass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AParticle2D_GetMass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AParticle2D_GetMass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Particle2D" },
		{ "ModuleRelativePath", "Particle2D.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AParticle2D_GetMass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AParticle2D, nullptr, "GetMass", nullptr, nullptr, sizeof(Particle2D_eventGetMass_Parms), Z_Construct_UFunction_AParticle2D_GetMass_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AParticle2D_GetMass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AParticle2D_GetMass_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AParticle2D_GetMass_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AParticle2D_SetMass_Statics::NewProp_newMass = { "newMass", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Particle2D_eventSetMass_Parms, newMass), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AParticle2D_SetMass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AParticle2D_SetMass_Statics::NewProp_newMass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AParticle2D_SetMass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Particle2D" },
		{ "ModuleRelativePath", "Particle2D.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AParticle2D_SetMass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AParticle2D, nullptr, "SetMass", nullptr, nullptr, sizeof(Particle2D_eventSetMass_Parms), Z_Construct_UFunction_AParticle2D_SetMass_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AParticle2D_SetMass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AParticle2D_SetMass_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AParticle2D_SetMass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AParticle2D_SetMass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AParticle2D_SetMass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AParticle2D_setMomentOfInertia_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AParticle2D_setMomentOfInertia_Statics::Function_MetaDataParams[] = {
		{ "Category", "Particle2D" },
		{ "ModuleRelativePath", "Particle2D.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AParticle2D_setMomentOfInertia_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AParticle2D, nullptr, "setMomentOfInertia", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AParticle2D_setMomentOfInertia_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AParticle2D_setMomentOfInertia_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AParticle2D_setMomentOfInertia()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AParticle2D_setMomentOfInertia_Statics::FuncParams);
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
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AParticle2D_UpdateAcceleration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AParticle2D, nullptr, "UpdateAcceleration", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AParticle2D_UpdateAcceleration_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AParticle2D_UpdateAcceleration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AParticle2D_UpdateAcceleration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AParticle2D_UpdateAcceleration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AParticle2D_updateAngularAcceleration_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AParticle2D_updateAngularAcceleration_Statics::Function_MetaDataParams[] = {
		{ "Category", "Particle2D" },
		{ "Comment", "// lab3.2\n" },
		{ "ModuleRelativePath", "Particle2D.h" },
		{ "ToolTip", "lab3.2" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AParticle2D_updateAngularAcceleration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AParticle2D, nullptr, "updateAngularAcceleration", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AParticle2D_updateAngularAcceleration_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AParticle2D_updateAngularAcceleration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AParticle2D_updateAngularAcceleration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AParticle2D_updateAngularAcceleration_Statics::FuncParams);
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AParticle2D_updatePositionKinematic_Statics::NewProp_dt = { "dt", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Particle2D_eventupdatePositionKinematic_Parms, dt), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AParticle2D_updatePositionKinematic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AParticle2D_updatePositionKinematic_Statics::NewProp_dt,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AParticle2D_updatePositionKinematic_Statics::Function_MetaDataParams[] = {
		{ "Category", "Particle2D" },
		{ "ModuleRelativePath", "Particle2D.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AParticle2D_updatePositionKinematic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AParticle2D, nullptr, "updatePositionKinematic", nullptr, nullptr, sizeof(Particle2D_eventupdatePositionKinematic_Parms), Z_Construct_UFunction_AParticle2D_updatePositionKinematic_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AParticle2D_updatePositionKinematic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AParticle2D_updatePositionKinematic_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AParticle2D_updatePositionKinematic_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AParticle2D_updatePositionsExplicitEuler_Statics::NewProp_dt = { "dt", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Particle2D_eventupdatePositionsExplicitEuler_Parms, dt), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AParticle2D_updatePositionsExplicitEuler_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AParticle2D_updatePositionsExplicitEuler_Statics::NewProp_dt,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AParticle2D_updatePositionsExplicitEuler_Statics::Function_MetaDataParams[] = {
		{ "Category", "Particle2D" },
		{ "ModuleRelativePath", "Particle2D.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AParticle2D_updatePositionsExplicitEuler_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AParticle2D, nullptr, "updatePositionsExplicitEuler", nullptr, nullptr, sizeof(Particle2D_eventupdatePositionsExplicitEuler_Parms), Z_Construct_UFunction_AParticle2D_updatePositionsExplicitEuler_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AParticle2D_updatePositionsExplicitEuler_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AParticle2D_updatePositionsExplicitEuler_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AParticle2D_updatePositionsExplicitEuler_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AParticle2D_updateRotationEulerExplicit_Statics::NewProp_dt = { "dt", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Particle2D_eventupdateRotationEulerExplicit_Parms, dt), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AParticle2D_updateRotationEulerExplicit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AParticle2D_updateRotationEulerExplicit_Statics::NewProp_dt,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AParticle2D_updateRotationEulerExplicit_Statics::Function_MetaDataParams[] = {
		{ "Category", "Particle2D" },
		{ "ModuleRelativePath", "Particle2D.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AParticle2D_updateRotationEulerExplicit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AParticle2D, nullptr, "updateRotationEulerExplicit", nullptr, nullptr, sizeof(Particle2D_eventupdateRotationEulerExplicit_Parms), Z_Construct_UFunction_AParticle2D_updateRotationEulerExplicit_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AParticle2D_updateRotationEulerExplicit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AParticle2D_updateRotationEulerExplicit_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AParticle2D_updateRotationEulerExplicit_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AParticle2D_updateRotationKinematic_Statics::NewProp_dt = { "dt", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Particle2D_eventupdateRotationKinematic_Parms, dt), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AParticle2D_updateRotationKinematic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AParticle2D_updateRotationKinematic_Statics::NewProp_dt,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AParticle2D_updateRotationKinematic_Statics::Function_MetaDataParams[] = {
		{ "Category", "Particle2D" },
		{ "ModuleRelativePath", "Particle2D.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AParticle2D_updateRotationKinematic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AParticle2D, nullptr, "updateRotationKinematic", nullptr, nullptr, sizeof(Particle2D_eventupdateRotationKinematic_Parms), Z_Construct_UFunction_AParticle2D_updateRotationKinematic_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AParticle2D_updateRotationKinematic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AParticle2D_updateRotationKinematic_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AParticle2D_updateRotationKinematic_Statics::Function_MetaDataParams)) };
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_centerOfMass_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_centerOfMass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_momentOfInertia_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_momentOfInertia;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_force_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_force;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_shape_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_shape;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_shape_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_circle_radius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_circle_radius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ring_rad_outer_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ring_rad_outer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ring_rad_inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ring_rad_inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rod_length_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_rod_length;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rect_height_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_rect_height;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rect_width_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_rect_width;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_torque_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_torque;
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
		{ &Z_Construct_UFunction_AParticle2D_AddForce, "AddForce" }, // 3389375089
		{ &Z_Construct_UFunction_AParticle2D_applyTorque, "applyTorque" }, // 2597872096
		{ &Z_Construct_UFunction_AParticle2D_GetMass, "GetMass" }, // 3812729500
		{ &Z_Construct_UFunction_AParticle2D_SetMass, "SetMass" }, // 3804644219
		{ &Z_Construct_UFunction_AParticle2D_setMomentOfInertia, "setMomentOfInertia" }, // 3218590765
		{ &Z_Construct_UFunction_AParticle2D_UpdateAcceleration, "UpdateAcceleration" }, // 2618070473
		{ &Z_Construct_UFunction_AParticle2D_updateAngularAcceleration, "updateAngularAcceleration" }, // 2486578022
		{ &Z_Construct_UFunction_AParticle2D_updatePositionKinematic, "updatePositionKinematic" }, // 2065843171
		{ &Z_Construct_UFunction_AParticle2D_updatePositionsExplicitEuler, "updatePositionsExplicitEuler" }, // 1824540959
		{ &Z_Construct_UFunction_AParticle2D_updateRotationEulerExplicit, "updateRotationEulerExplicit" }, // 533621966
		{ &Z_Construct_UFunction_AParticle2D_updateRotationKinematic, "updateRotationKinematic" }, // 2884331933
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AParticle2D_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Particle2D.h" },
		{ "ModuleRelativePath", "Particle2D.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AParticle2D_Statics::NewProp_centerOfMass_MetaData[] = {
		{ "Category", "Particle2D" },
		{ "Comment", "// TODO: lab3 implement enum for shapes and inertia values from book.\n" },
		{ "ModuleRelativePath", "Particle2D.h" },
		{ "ToolTip", "TODO: lab3 implement enum for shapes and inertia values from book." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AParticle2D_Statics::NewProp_centerOfMass = { "centerOfMass", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AParticle2D, centerOfMass), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_AParticle2D_Statics::NewProp_centerOfMass_MetaData, ARRAY_COUNT(Z_Construct_UClass_AParticle2D_Statics::NewProp_centerOfMass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AParticle2D_Statics::NewProp_momentOfInertia_MetaData[] = {
		{ "Category", "Particle2D" },
		{ "Comment", "// lab3.1\n" },
		{ "ModuleRelativePath", "Particle2D.h" },
		{ "ToolTip", "lab3.1" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AParticle2D_Statics::NewProp_momentOfInertia = { "momentOfInertia", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AParticle2D, momentOfInertia), METADATA_PARAMS(Z_Construct_UClass_AParticle2D_Statics::NewProp_momentOfInertia_MetaData, ARRAY_COUNT(Z_Construct_UClass_AParticle2D_Statics::NewProp_momentOfInertia_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AParticle2D_Statics::NewProp_force_MetaData[] = {
		{ "Category", "Particle2D" },
		{ "Comment", "//lab2 2\n" },
		{ "ModuleRelativePath", "Particle2D.h" },
		{ "ToolTip", "lab2 2" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AParticle2D_Statics::NewProp_force = { "force", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AParticle2D, force), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_AParticle2D_Statics::NewProp_force_MetaData, ARRAY_COUNT(Z_Construct_UClass_AParticle2D_Statics::NewProp_force_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AParticle2D_Statics::NewProp_angular_accel_MetaData[] = {
		{ "Category", "Particle2D" },
		{ "ModuleRelativePath", "Particle2D.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AParticle2D_Statics::NewProp_angular_accel = { "angular_accel", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AParticle2D, angular_accel), METADATA_PARAMS(Z_Construct_UClass_AParticle2D_Statics::NewProp_angular_accel_MetaData, ARRAY_COUNT(Z_Construct_UClass_AParticle2D_Statics::NewProp_angular_accel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AParticle2D_Statics::NewProp_angular_vel_MetaData[] = {
		{ "Category", "Particle2D" },
		{ "ModuleRelativePath", "Particle2D.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AParticle2D_Statics::NewProp_angular_vel = { "angular_vel", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AParticle2D, angular_vel), METADATA_PARAMS(Z_Construct_UClass_AParticle2D_Statics::NewProp_angular_vel_MetaData, ARRAY_COUNT(Z_Construct_UClass_AParticle2D_Statics::NewProp_angular_vel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AParticle2D_Statics::NewProp_rotation_MetaData[] = {
		{ "Category", "Particle2D" },
		{ "ModuleRelativePath", "Particle2D.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AParticle2D_Statics::NewProp_rotation = { "rotation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AParticle2D, rotation), METADATA_PARAMS(Z_Construct_UClass_AParticle2D_Statics::NewProp_rotation_MetaData, ARRAY_COUNT(Z_Construct_UClass_AParticle2D_Statics::NewProp_rotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AParticle2D_Statics::NewProp_acceleration_MetaData[] = {
		{ "Category", "Particle2D" },
		{ "ModuleRelativePath", "Particle2D.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AParticle2D_Statics::NewProp_acceleration = { "acceleration", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AParticle2D, acceleration), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_AParticle2D_Statics::NewProp_acceleration_MetaData, ARRAY_COUNT(Z_Construct_UClass_AParticle2D_Statics::NewProp_acceleration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AParticle2D_Statics::NewProp_velocity_MetaData[] = {
		{ "Category", "Particle2D" },
		{ "ModuleRelativePath", "Particle2D.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AParticle2D_Statics::NewProp_velocity = { "velocity", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AParticle2D, velocity), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_AParticle2D_Statics::NewProp_velocity_MetaData, ARRAY_COUNT(Z_Construct_UClass_AParticle2D_Statics::NewProp_velocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AParticle2D_Statics::NewProp_position_MetaData[] = {
		{ "Category", "Particle2D" },
		{ "ModuleRelativePath", "Particle2D.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AParticle2D_Statics::NewProp_position = { "position", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AParticle2D, position), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_AParticle2D_Statics::NewProp_position_MetaData, ARRAY_COUNT(Z_Construct_UClass_AParticle2D_Statics::NewProp_position_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AParticle2D_Statics::NewProp_shape_MetaData[] = {
		{ "Category", "Particle2D" },
		{ "ModuleRelativePath", "Particle2D.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AParticle2D_Statics::NewProp_shape = { "shape", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AParticle2D, shape), Z_Construct_UEnum_Physics_SHAPES, METADATA_PARAMS(Z_Construct_UClass_AParticle2D_Statics::NewProp_shape_MetaData, ARRAY_COUNT(Z_Construct_UClass_AParticle2D_Statics::NewProp_shape_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AParticle2D_Statics::NewProp_shape_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AParticle2D_Statics::NewProp_circle_radius_MetaData[] = {
		{ "Category", "Particle2D" },
		{ "ModuleRelativePath", "Particle2D.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AParticle2D_Statics::NewProp_circle_radius = { "circle_radius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AParticle2D, circle_radius), METADATA_PARAMS(Z_Construct_UClass_AParticle2D_Statics::NewProp_circle_radius_MetaData, ARRAY_COUNT(Z_Construct_UClass_AParticle2D_Statics::NewProp_circle_radius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AParticle2D_Statics::NewProp_ring_rad_outer_MetaData[] = {
		{ "Category", "Particle2D" },
		{ "ModuleRelativePath", "Particle2D.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AParticle2D_Statics::NewProp_ring_rad_outer = { "ring_rad_outer", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AParticle2D, ring_rad_outer), METADATA_PARAMS(Z_Construct_UClass_AParticle2D_Statics::NewProp_ring_rad_outer_MetaData, ARRAY_COUNT(Z_Construct_UClass_AParticle2D_Statics::NewProp_ring_rad_outer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AParticle2D_Statics::NewProp_ring_rad_inner_MetaData[] = {
		{ "Category", "Particle2D" },
		{ "ModuleRelativePath", "Particle2D.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AParticle2D_Statics::NewProp_ring_rad_inner = { "ring_rad_inner", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AParticle2D, ring_rad_inner), METADATA_PARAMS(Z_Construct_UClass_AParticle2D_Statics::NewProp_ring_rad_inner_MetaData, ARRAY_COUNT(Z_Construct_UClass_AParticle2D_Statics::NewProp_ring_rad_inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AParticle2D_Statics::NewProp_rod_length_MetaData[] = {
		{ "Category", "Particle2D" },
		{ "ModuleRelativePath", "Particle2D.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AParticle2D_Statics::NewProp_rod_length = { "rod_length", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AParticle2D, rod_length), METADATA_PARAMS(Z_Construct_UClass_AParticle2D_Statics::NewProp_rod_length_MetaData, ARRAY_COUNT(Z_Construct_UClass_AParticle2D_Statics::NewProp_rod_length_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AParticle2D_Statics::NewProp_rect_height_MetaData[] = {
		{ "Category", "Particle2D" },
		{ "ModuleRelativePath", "Particle2D.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AParticle2D_Statics::NewProp_rect_height = { "rect_height", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AParticle2D, rect_height), METADATA_PARAMS(Z_Construct_UClass_AParticle2D_Statics::NewProp_rect_height_MetaData, ARRAY_COUNT(Z_Construct_UClass_AParticle2D_Statics::NewProp_rect_height_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AParticle2D_Statics::NewProp_rect_width_MetaData[] = {
		{ "Category", "Particle2D" },
		{ "Comment", "// values for individual shapes. Might be better to subclass\n" },
		{ "ModuleRelativePath", "Particle2D.h" },
		{ "ToolTip", "values for individual shapes. Might be better to subclass" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AParticle2D_Statics::NewProp_rect_width = { "rect_width", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AParticle2D, rect_width), METADATA_PARAMS(Z_Construct_UClass_AParticle2D_Statics::NewProp_rect_width_MetaData, ARRAY_COUNT(Z_Construct_UClass_AParticle2D_Statics::NewProp_rect_width_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AParticle2D_Statics::NewProp_torque_MetaData[] = {
		{ "Category", "Particle2D" },
		{ "Comment", "// lab 3.22\n" },
		{ "ModuleRelativePath", "Particle2D.h" },
		{ "ToolTip", "lab 3.22" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AParticle2D_Statics::NewProp_torque = { "torque", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AParticle2D, torque), METADATA_PARAMS(Z_Construct_UClass_AParticle2D_Statics::NewProp_torque_MetaData, ARRAY_COUNT(Z_Construct_UClass_AParticle2D_Statics::NewProp_torque_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AParticle2D_Statics::NewProp_startingMass_MetaData[] = {
		{ "Category", "Particle2D" },
		{ "Comment", "//lab 2 step 1\n" },
		{ "ModuleRelativePath", "Particle2D.h" },
		{ "ToolTip", "lab 2 step 1" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AParticle2D_Statics::NewProp_startingMass = { "startingMass", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AParticle2D, startingMass), METADATA_PARAMS(Z_Construct_UClass_AParticle2D_Statics::NewProp_startingMass_MetaData, ARRAY_COUNT(Z_Construct_UClass_AParticle2D_Statics::NewProp_startingMass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AParticle2D_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParticle2D_Statics::NewProp_centerOfMass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParticle2D_Statics::NewProp_momentOfInertia,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParticle2D_Statics::NewProp_force,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParticle2D_Statics::NewProp_angular_accel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParticle2D_Statics::NewProp_angular_vel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParticle2D_Statics::NewProp_rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParticle2D_Statics::NewProp_acceleration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParticle2D_Statics::NewProp_velocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParticle2D_Statics::NewProp_position,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParticle2D_Statics::NewProp_shape,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParticle2D_Statics::NewProp_shape_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParticle2D_Statics::NewProp_circle_radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParticle2D_Statics::NewProp_ring_rad_outer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParticle2D_Statics::NewProp_ring_rad_inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParticle2D_Statics::NewProp_rod_length,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParticle2D_Statics::NewProp_rect_height,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParticle2D_Statics::NewProp_rect_width,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParticle2D_Statics::NewProp_torque,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParticle2D_Statics::NewProp_startingMass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AParticle2D_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AParticle2D>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AParticle2D_Statics::ClassParams = {
		&AParticle2D::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AParticle2D_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AParticle2D_Statics::PropPointers),
		0,
		0x009000A0u,
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
	IMPLEMENT_CLASS(AParticle2D, 518425544);
	template<> PHYSICS_API UClass* StaticClass<AParticle2D>()
	{
		return AParticle2D::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AParticle2D(Z_Construct_UClass_AParticle2D, &AParticle2D::StaticClass, TEXT("/Script/Physics"), TEXT("AParticle2D"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AParticle2D);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
