// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE4CPPLearn/ArrTest/MoveActor/MoveWay/MoveWay_UP/MoveWay_UP.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoveWay_UP() {}
// Cross Module References
	UE4CPPLEARN_API UClass* Z_Construct_UClass_UMoveWay_UP_NoRegister();
	UE4CPPLEARN_API UClass* Z_Construct_UClass_UMoveWay_UP();
	UE4CPPLEARN_API UClass* Z_Construct_UClass_UMoveWay();
	UPackage* Z_Construct_UPackage__Script_UE4CPPLearn();
// End Cross Module References
	void UMoveWay_UP::StaticRegisterNativesUMoveWay_UP()
	{
	}
	UClass* Z_Construct_UClass_UMoveWay_UP_NoRegister()
	{
		return UMoveWay_UP::StaticClass();
	}
	struct Z_Construct_UClass_UMoveWay_UP_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMoveWay_UP_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMoveWay,
		(UObject* (*)())Z_Construct_UPackage__Script_UE4CPPLearn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoveWay_UP_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ArrTest/MoveActor/MoveWay/MoveWay_UP/MoveWay_UP.h" },
		{ "ModuleRelativePath", "ArrTest/MoveActor/MoveWay/MoveWay_UP/MoveWay_UP.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMoveWay_UP_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoveWay_UP>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMoveWay_UP_Statics::ClassParams = {
		&UMoveWay_UP::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMoveWay_UP_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMoveWay_UP_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMoveWay_UP()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMoveWay_UP_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMoveWay_UP, 756432611);
	template<> UE4CPPLEARN_API UClass* StaticClass<UMoveWay_UP>()
	{
		return UMoveWay_UP::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMoveWay_UP(Z_Construct_UClass_UMoveWay_UP, &UMoveWay_UP::StaticClass, TEXT("/Script/UE4CPPLearn"), TEXT("UMoveWay_UP"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMoveWay_UP);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
