// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE4CPPLearn/AIModule/Gourd/Gourd.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGourd() {}
// Cross Module References
	UE4CPPLEARN_API UClass* Z_Construct_UClass_AGourd_NoRegister();
	UE4CPPLEARN_API UClass* Z_Construct_UClass_AGourd();
	UE4CPPLEARN_API UClass* Z_Construct_UClass_AAICharacter();
	UPackage* Z_Construct_UPackage__Script_UE4CPPLearn();
// End Cross Module References
	void AGourd::StaticRegisterNativesAGourd()
	{
	}
	UClass* Z_Construct_UClass_AGourd_NoRegister()
	{
		return AGourd::StaticClass();
	}
	struct Z_Construct_UClass_AGourd_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGourd_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAICharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_UE4CPPLearn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGourd_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AIModule/Gourd/Gourd.h" },
		{ "ModuleRelativePath", "AIModule/Gourd/Gourd.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGourd_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGourd>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGourd_Statics::ClassParams = {
		&AGourd::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGourd_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGourd_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGourd()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGourd_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGourd, 1851281901);
	template<> UE4CPPLEARN_API UClass* StaticClass<AGourd>()
	{
		return AGourd::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGourd(Z_Construct_UClass_AGourd, &AGourd::StaticClass, TEXT("/Script/UE4CPPLearn"), TEXT("AGourd"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGourd);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
