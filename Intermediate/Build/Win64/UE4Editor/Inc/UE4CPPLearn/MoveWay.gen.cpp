// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE4CPPLearn/ArrTest/MoveActor/MoveWay/MoveWay.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoveWay() {}
// Cross Module References
	UE4CPPLEARN_API UClass* Z_Construct_UClass_UMoveWay_NoRegister();
	UE4CPPLEARN_API UClass* Z_Construct_UClass_UMoveWay();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_UE4CPPLearn();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
// End Cross Module References
	void UMoveWay::StaticRegisterNativesUMoveWay()
	{
	}
	UClass* Z_Construct_UClass_UMoveWay_NoRegister()
	{
		return UMoveWay::StaticClass();
	}
	struct Z_Construct_UClass_UMoveWay_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_color_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_color;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_msg_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_msg;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMoveWay_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UE4CPPLearn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoveWay_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "AI" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "ArrTest/MoveActor/MoveWay/MoveWay.h" },
		{ "ModuleRelativePath", "ArrTest/MoveActor/MoveWay/MoveWay.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoveWay_Statics::NewProp_color_MetaData[] = {
		{ "Category", "DebugMsg" },
		{ "ModuleRelativePath", "ArrTest/MoveActor/MoveWay/MoveWay.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMoveWay_Statics::NewProp_color = { "color", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMoveWay, color), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UMoveWay_Statics::NewProp_color_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoveWay_Statics::NewProp_color_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoveWay_Statics::NewProp_msg_MetaData[] = {
		{ "Category", "DebugMsg" },
		{ "ModuleRelativePath", "ArrTest/MoveActor/MoveWay/MoveWay.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMoveWay_Statics::NewProp_msg = { "msg", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMoveWay, msg), METADATA_PARAMS(Z_Construct_UClass_UMoveWay_Statics::NewProp_msg_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoveWay_Statics::NewProp_msg_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMoveWay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoveWay_Statics::NewProp_color,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoveWay_Statics::NewProp_msg,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMoveWay_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoveWay>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMoveWay_Statics::ClassParams = {
		&UMoveWay::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMoveWay_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMoveWay_Statics::PropPointers),
		0,
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UMoveWay_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMoveWay_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMoveWay()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMoveWay_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMoveWay, 2006874138);
	template<> UE4CPPLEARN_API UClass* StaticClass<UMoveWay>()
	{
		return UMoveWay::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMoveWay(Z_Construct_UClass_UMoveWay, &UMoveWay::StaticClass, TEXT("/Script/UE4CPPLearn"), TEXT("UMoveWay"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMoveWay);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
