// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE4CPPLearn/AIModule/AIPawnTest/AIPawnTest.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIPawnTest() {}
// Cross Module References
	UE4CPPLEARN_API UClass* Z_Construct_UClass_AAIPawnTest_NoRegister();
	UE4CPPLEARN_API UClass* Z_Construct_UClass_AAIPawnTest();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_UE4CPPLearn();
	ENGINE_API UClass* Z_Construct_UClass_UFloatingPawnMovement_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionComponent_NoRegister();
// End Cross Module References
	void AAIPawnTest::StaticRegisterNativesAAIPawnTest()
	{
	}
	UClass* Z_Construct_UClass_AAIPawnTest_NoRegister()
	{
		return AAIPawnTest::StaticClass();
	}
	struct Z_Construct_UClass_AAIPawnTest_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Movementcmp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Movementcmp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FaceCmp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FaceCmp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodyMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BodyMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoxCmp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BoxCmp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AIPerCmp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AIPerCmp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAIPawnTest_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_UE4CPPLearn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIPawnTest_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AIModule/AIPawnTest/AIPawnTest.h" },
		{ "ModuleRelativePath", "AIModule/AIPawnTest/AIPawnTest.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIPawnTest_Statics::NewProp_Movementcmp_MetaData[] = {
		{ "Category", "Cmp" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AIModule/AIPawnTest/AIPawnTest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAIPawnTest_Statics::NewProp_Movementcmp = { "Movementcmp", nullptr, (EPropertyFlags)0x00100000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAIPawnTest, Movementcmp), Z_Construct_UClass_UFloatingPawnMovement_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAIPawnTest_Statics::NewProp_Movementcmp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAIPawnTest_Statics::NewProp_Movementcmp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIPawnTest_Statics::NewProp_FaceCmp_MetaData[] = {
		{ "Category", "Cmp" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AIModule/AIPawnTest/AIPawnTest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAIPawnTest_Statics::NewProp_FaceCmp = { "FaceCmp", nullptr, (EPropertyFlags)0x00100000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAIPawnTest, FaceCmp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAIPawnTest_Statics::NewProp_FaceCmp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAIPawnTest_Statics::NewProp_FaceCmp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIPawnTest_Statics::NewProp_BodyMesh_MetaData[] = {
		{ "Category", "Cmp" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AIModule/AIPawnTest/AIPawnTest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAIPawnTest_Statics::NewProp_BodyMesh = { "BodyMesh", nullptr, (EPropertyFlags)0x00100000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAIPawnTest, BodyMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAIPawnTest_Statics::NewProp_BodyMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAIPawnTest_Statics::NewProp_BodyMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIPawnTest_Statics::NewProp_BoxCmp_MetaData[] = {
		{ "Category", "Cmp" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AIModule/AIPawnTest/AIPawnTest.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAIPawnTest_Statics::NewProp_BoxCmp = { "BoxCmp", nullptr, (EPropertyFlags)0x00100000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAIPawnTest, BoxCmp), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAIPawnTest_Statics::NewProp_BoxCmp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAIPawnTest_Statics::NewProp_BoxCmp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIPawnTest_Statics::NewProp_AIPerCmp_MetaData[] = {
		{ "Category", "AI" },
		{ "Comment", "//??\xd6\xaa?\xe9\xbd\xa8\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AIModule/AIPawnTest/AIPawnTest.h" },
		{ "ToolTip", "??\xd6\xaa?\xe9\xbd\xa8" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAIPawnTest_Statics::NewProp_AIPerCmp = { "AIPerCmp", nullptr, (EPropertyFlags)0x00100000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAIPawnTest, AIPerCmp), Z_Construct_UClass_UAIPerceptionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAIPawnTest_Statics::NewProp_AIPerCmp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAIPawnTest_Statics::NewProp_AIPerCmp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAIPawnTest_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIPawnTest_Statics::NewProp_Movementcmp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIPawnTest_Statics::NewProp_FaceCmp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIPawnTest_Statics::NewProp_BodyMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIPawnTest_Statics::NewProp_BoxCmp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAIPawnTest_Statics::NewProp_AIPerCmp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAIPawnTest_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAIPawnTest>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAIPawnTest_Statics::ClassParams = {
		&AAIPawnTest::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAIPawnTest_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AAIPawnTest_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAIPawnTest_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAIPawnTest_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAIPawnTest()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAIPawnTest_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAIPawnTest, 2405857030);
	template<> UE4CPPLEARN_API UClass* StaticClass<AAIPawnTest>()
	{
		return AAIPawnTest::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAIPawnTest(Z_Construct_UClass_AAIPawnTest, &AAIPawnTest::StaticClass, TEXT("/Script/UE4CPPLearn"), TEXT("AAIPawnTest"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAIPawnTest);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
