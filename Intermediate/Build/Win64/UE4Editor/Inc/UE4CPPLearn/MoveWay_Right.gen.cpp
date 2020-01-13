// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE4CPPLearn/ArrTest/MoveActor/MoveWay/MoveWay_Right/MoveWay_Right.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoveWay_Right() {}
// Cross Module References
	UE4CPPLEARN_API UClass* Z_Construct_UClass_UMoveWay_Right_NoRegister();
	UE4CPPLEARN_API UClass* Z_Construct_UClass_UMoveWay_Right();
	UE4CPPLEARN_API UClass* Z_Construct_UClass_UMoveWay();
	UPackage* Z_Construct_UPackage__Script_UE4CPPLearn();
// End Cross Module References
	void UMoveWay_Right::StaticRegisterNativesUMoveWay_Right()
	{
	}
	UClass* Z_Construct_UClass_UMoveWay_Right_NoRegister()
	{
		return UMoveWay_Right::StaticClass();
	}
	struct Z_Construct_UClass_UMoveWay_Right_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMoveWay_Right_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMoveWay,
		(UObject* (*)())Z_Construct_UPackage__Script_UE4CPPLearn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoveWay_Right_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ArrTest/MoveActor/MoveWay/MoveWay_Right/MoveWay_Right.h" },
		{ "ModuleRelativePath", "ArrTest/MoveActor/MoveWay/MoveWay_Right/MoveWay_Right.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMoveWay_Right_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoveWay_Right>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMoveWay_Right_Statics::ClassParams = {
		&UMoveWay_Right::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMoveWay_Right_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMoveWay_Right_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMoveWay_Right()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMoveWay_Right_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMoveWay_Right, 339322723);
	template<> UE4CPPLEARN_API UClass* StaticClass<UMoveWay_Right>()
	{
		return UMoveWay_Right::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMoveWay_Right(Z_Construct_UClass_UMoveWay_Right, &UMoveWay_Right::StaticClass, TEXT("/Script/UE4CPPLearn"), TEXT("UMoveWay_Right"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMoveWay_Right);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
