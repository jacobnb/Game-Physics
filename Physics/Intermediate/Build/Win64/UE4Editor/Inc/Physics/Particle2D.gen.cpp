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
// End Cross Module References
	void AParticle2D::StaticRegisterNativesAParticle2D()
	{
	}
	UClass* Z_Construct_UClass_AParticle2D_NoRegister()
	{
		return AParticle2D::StaticClass();
	}
	struct Z_Construct_UClass_AParticle2D_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AParticle2D_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Physics,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AParticle2D_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Particle2D.h" },
		{ "ModuleRelativePath", "Particle2D.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AParticle2D_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AParticle2D>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AParticle2D_Statics::ClassParams = {
		&AParticle2D::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		nullptr, 0,
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
	IMPLEMENT_CLASS(AParticle2D, 26373695);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AParticle2D(Z_Construct_UClass_AParticle2D, &AParticle2D::StaticClass, TEXT("/Script/Physics"), TEXT("AParticle2D"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AParticle2D);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
