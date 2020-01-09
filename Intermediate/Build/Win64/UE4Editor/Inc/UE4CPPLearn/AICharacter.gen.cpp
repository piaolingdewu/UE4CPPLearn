// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UE4CPPLearn/AIModule/AICharacter/AICharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAICharacter() {}
// Cross Module References
	UE4CPPLEARN_API UClass* Z_Construct_UClass_AAICharacter_NoRegister();
	UE4CPPLEARN_API UClass* Z_Construct_UClass_AAICharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_UE4CPPLearn();
	UE4CPPLEARN_API UFunction* Z_Construct_UFunction_AAICharacter_GetSightPawn();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionComponent_NoRegister();
// End Cross Module References
	void AAICharacter::StaticRegisterNativesAAICharacter()
	{
		UClass* Class = AAICharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSightPawn", &AAICharacter::execGetSightPawn },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAICharacter_GetSightPawn_Statics
	{
		struct AICharacter_eventGetSightPawn_Parms
		{
			TSubclassOf<AAICharacter>  pawnclass;
			TArray<AAICharacter*> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_pawnclass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AAICharacter_GetSightPawn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AICharacter_eventGetSightPawn_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAICharacter_GetSightPawn_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AAICharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_AAICharacter_GetSightPawn_Statics::NewProp_pawnclass = { "pawnclass", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AICharacter_eventGetSightPawn_Parms, pawnclass), Z_Construct_UClass_AAICharacter_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAICharacter_GetSightPawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAICharacter_GetSightPawn_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAICharacter_GetSightPawn_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAICharacter_GetSightPawn_Statics::NewProp_pawnclass,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAICharacter_GetSightPawn_Statics::Function_MetaDataParams[] = {
		{ "Category", "AiPer" },
		{ "ModuleRelativePath", "AIModule/AICharacter/AICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAICharacter_GetSightPawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAICharacter, nullptr, "GetSightPawn", nullptr, nullptr, sizeof(AICharacter_eventGetSightPawn_Parms), Z_Construct_UFunction_AAICharacter_GetSightPawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAICharacter_GetSightPawn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAICharacter_GetSightPawn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAICharacter_GetSightPawn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAICharacter_GetSightPawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAICharacter_GetSightPawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AAICharacter_NoRegister()
	{
		return AAICharacter::StaticClass();
	}
	struct Z_Construct_UClass_AAICharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FaceCmp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FaceCmp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BodyMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BodyMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AIPerCmp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AIPerCmp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAICharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_UE4CPPLearn,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AAICharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAICharacter_GetSightPawn, "GetSightPawn" }, // 1046159494
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAICharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AIModule/AICharacter/AICharacter.h" },
		{ "ModuleRelativePath", "AIModule/AICharacter/AICharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAICharacter_Statics::NewProp_FaceCmp_MetaData[] = {
		{ "Category", "Cmp" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AIModule/AICharacter/AICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAICharacter_Statics::NewProp_FaceCmp = { "FaceCmp", nullptr, (EPropertyFlags)0x00100000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAICharacter, FaceCmp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAICharacter_Statics::NewProp_FaceCmp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAICharacter_Statics::NewProp_FaceCmp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAICharacter_Statics::NewProp_BodyMesh_MetaData[] = {
		{ "Category", "Cmp" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AIModule/AICharacter/AICharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAICharacter_Statics::NewProp_BodyMesh = { "BodyMesh", nullptr, (EPropertyFlags)0x00100000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAICharacter, BodyMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAICharacter_Statics::NewProp_BodyMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAICharacter_Statics::NewProp_BodyMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAICharacter_Statics::NewProp_AIPerCmp_MetaData[] = {
		{ "Category", "AI" },
		{ "Comment", "//??\xd6\xaa?\xe9\xbd\xa8\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AIModule/AICharacter/AICharacter.h" },
		{ "ToolTip", "??\xd6\xaa?\xe9\xbd\xa8" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAICharacter_Statics::NewProp_AIPerCmp = { "AIPerCmp", nullptr, (EPropertyFlags)0x00100000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAICharacter, AIPerCmp), Z_Construct_UClass_UAIPerceptionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAICharacter_Statics::NewProp_AIPerCmp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAICharacter_Statics::NewProp_AIPerCmp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAICharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAICharacter_Statics::NewProp_FaceCmp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAICharacter_Statics::NewProp_BodyMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAICharacter_Statics::NewProp_AIPerCmp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAICharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAICharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAICharacter_Statics::ClassParams = {
		&AAICharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AAICharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AAICharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAICharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAICharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAICharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAICharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAICharacter, 383749108);
	template<> UE4CPPLEARN_API UClass* StaticClass<AAICharacter>()
	{
		return AAICharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAICharacter(Z_Construct_UClass_AAICharacter, &AAICharacter::StaticClass, TEXT("/Script/UE4CPPLearn"), TEXT("AAICharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAICharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
