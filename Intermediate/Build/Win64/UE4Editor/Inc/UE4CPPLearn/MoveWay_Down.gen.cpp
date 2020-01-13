// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE4CPPLearn/ArrTest/MoveActor/MoveWay/MoveWay_Down/MoveWay_Down.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoveWay_Down() {}
// Cross Module References
	UE4CPPLEARN_API UClass* Z_Construct_UClass_UMoveWay_Down_NoRegister();
	UE4CPPLEARN_API UClass* Z_Construct_UClass_UMoveWay_Down();
	UE4CPPLEARN_API UClass* Z_Construct_UClass_UMoveWay();
	UPackage* Z_Construct_UPackage__Script_UE4CPPLearn();
// End Cross Module References
	void UMoveWay_Down::StaticRegisterNativesUMoveWay_Down()
	{
	}
	UClass* Z_Construct_UClass_UMoveWay_Down_NoRegister()
	{
		return UMoveWay_Down::StaticClass();
	}
	struct Z_Construct_UClass_UMoveWay_Down_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMoveWay_Down_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMoveWay,
		(UObject* (*)())Z_Construct_UPackage__Script_UE4CPPLearn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoveWay_Down_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ArrTest/MoveActor/MoveWay/MoveWay_Down/MoveWay_Down.h" },
		{ "ModuleRelativePath", "ArrTest/MoveActor/MoveWay/MoveWay_Down/MoveWay_Down.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMoveWay_Down_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoveWay_Down>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMoveWay_Down_Statics::ClassParams = {
		&UMoveWay_Down::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UMoveWay_Down_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMoveWay_Down_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMoveWay_Down()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMoveWay_Down_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMoveWay_Down, 2808611611);
	template<> UE4CPPLEARN_API UClass* StaticClass<UMoveWay_Down>()
	{
		return UMoveWay_Down::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMoveWay_Down(Z_Construct_UClass_UMoveWay_Down, &UMoveWay_Down::StaticClass, TEXT("/Script/UE4CPPLearn"), TEXT("UMoveWay_Down"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMoveWay_Down);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
