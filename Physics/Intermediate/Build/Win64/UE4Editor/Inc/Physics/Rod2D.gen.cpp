// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Physics/Rod2D.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRod2D() {}
// Cross Module References
	PHYSICS_API UClass* Z_Construct_UClass_ARod2D_NoRegister();
	PHYSICS_API UClass* Z_Construct_UClass_ARod2D();
	PHYSICS_API UClass* Z_Construct_UClass_AParticle2D();
	UPackage* Z_Construct_UPackage__Script_Physics();
// End Cross Module References
	void ARod2D::StaticRegisterNativesARod2D()
	{
	}
	UClass* Z_Construct_UClass_ARod2D_NoRegister()
	{
		return ARod2D::StaticClass();
	}
	struct Z_Construct_UClass_ARod2D_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARod2D_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AParticle2D,
		(UObject* (*)())Z_Construct_UPackage__Script_Physics,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARod2D_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Rod2D.h" },
		{ "ModuleRelativePath", "Rod2D.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARod2D_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARod2D>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARod2D_Statics::ClassParams = {
		&ARod2D::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ARod2D_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ARod2D_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARod2D()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARod2D_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARod2D, 1683991027);
	template<> PHYSICS_API UClass* StaticClass<ARod2D>()
	{
		return ARod2D::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARod2D(Z_Construct_UClass_ARod2D, &ARod2D::StaticClass, TEXT("/Script/Physics"), TEXT("ARod2D"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARod2D);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
