// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Physics/OBBCollisionHull2D.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOBBCollisionHull2D() {}
// Cross Module References
	PHYSICS_API UClass* Z_Construct_UClass_UOBBCollisionHull2D_NoRegister();
	PHYSICS_API UClass* Z_Construct_UClass_UOBBCollisionHull2D();
	PHYSICS_API UClass* Z_Construct_UClass_UCollisionHull2D();
	UPackage* Z_Construct_UPackage__Script_Physics();
// End Cross Module References
	void UOBBCollisionHull2D::StaticRegisterNativesUOBBCollisionHull2D()
	{
	}
	UClass* Z_Construct_UClass_UOBBCollisionHull2D_NoRegister()
	{
		return UOBBCollisionHull2D::StaticClass();
	}
	struct Z_Construct_UClass_UOBBCollisionHull2D_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOBBCollisionHull2D_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCollisionHull2D,
		(UObject* (*)())Z_Construct_UPackage__Script_Physics,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOBBCollisionHull2D_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OBBCollisionHull2D.h" },
		{ "ModuleRelativePath", "OBBCollisionHull2D.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOBBCollisionHull2D_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOBBCollisionHull2D>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOBBCollisionHull2D_Statics::ClassParams = {
		&UOBBCollisionHull2D::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOBBCollisionHull2D_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UOBBCollisionHull2D_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOBBCollisionHull2D()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOBBCollisionHull2D_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOBBCollisionHull2D, 2223330067);
	template<> PHYSICS_API UClass* StaticClass<UOBBCollisionHull2D>()
	{
		return UOBBCollisionHull2D::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOBBCollisionHull2D(Z_Construct_UClass_UOBBCollisionHull2D, &UOBBCollisionHull2D::StaticClass, TEXT("/Script/Physics"), TEXT("UOBBCollisionHull2D"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOBBCollisionHull2D);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
