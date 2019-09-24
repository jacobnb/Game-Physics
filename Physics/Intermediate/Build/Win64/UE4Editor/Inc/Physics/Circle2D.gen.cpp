// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Physics/Circle2D.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCircle2D() {}
// Cross Module References
	PHYSICS_API UClass* Z_Construct_UClass_ACircle2D_NoRegister();
	PHYSICS_API UClass* Z_Construct_UClass_ACircle2D();
	PHYSICS_API UClass* Z_Construct_UClass_AParticle2D();
	UPackage* Z_Construct_UPackage__Script_Physics();
// End Cross Module References
	void ACircle2D::StaticRegisterNativesACircle2D()
	{
	}
	UClass* Z_Construct_UClass_ACircle2D_NoRegister()
	{
		return ACircle2D::StaticClass();
	}
	struct Z_Construct_UClass_ACircle2D_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACircle2D_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AParticle2D,
		(UObject* (*)())Z_Construct_UPackage__Script_Physics,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACircle2D_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Circle2D.h" },
		{ "ModuleRelativePath", "Circle2D.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACircle2D_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACircle2D>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACircle2D_Statics::ClassParams = {
		&ACircle2D::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ACircle2D_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ACircle2D_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACircle2D()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACircle2D_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACircle2D, 1739500753);
	template<> PHYSICS_API UClass* StaticClass<ACircle2D>()
	{
		return ACircle2D::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACircle2D(Z_Construct_UClass_ACircle2D, &ACircle2D::StaticClass, TEXT("/Script/Physics"), TEXT("ACircle2D"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACircle2D);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
