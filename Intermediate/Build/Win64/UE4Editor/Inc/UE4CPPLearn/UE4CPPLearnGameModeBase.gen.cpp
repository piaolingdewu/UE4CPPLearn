// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE4CPPLearn/UE4CPPLearnGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUE4CPPLearnGameModeBase() {}
// Cross Module References
	UE4CPPLEARN_API UClass* Z_Construct_UClass_AUE4CPPLearnGameModeBase_NoRegister();
	UE4CPPLEARN_API UClass* Z_Construct_UClass_AUE4CPPLearnGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_UE4CPPLearn();
// End Cross Module References
	void AUE4CPPLearnGameModeBase::StaticRegisterNativesAUE4CPPLearnGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AUE4CPPLearnGameModeBase_NoRegister()
	{
		return AUE4CPPLearnGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AUE4CPPLearnGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUE4CPPLearnGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UE4CPPLearn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUE4CPPLearnGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "UE4CPPLearnGameModeBase.h" },
		{ "ModuleRelativePath", "UE4CPPLearnGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUE4CPPLearnGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUE4CPPLearnGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUE4CPPLearnGameModeBase_Statics::ClassParams = {
		&AUE4CPPLearnGameModeBase::StaticClass,
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
		0x009002A8u,
		METADATA_PARAMS(Z_Construct_UClass_AUE4CPPLearnGameModeBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AUE4CPPLearnGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUE4CPPLearnGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUE4CPPLearnGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUE4CPPLearnGameModeBase, 1697925732);
	template<> UE4CPPLEARN_API UClass* StaticClass<AUE4CPPLearnGameModeBase>()
	{
		return AUE4CPPLearnGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUE4CPPLearnGameModeBase(Z_Construct_UClass_AUE4CPPLearnGameModeBase, &AUE4CPPLearnGameModeBase::StaticClass, TEXT("/Script/UE4CPPLearn"), TEXT("AUE4CPPLearnGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUE4CPPLearnGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
