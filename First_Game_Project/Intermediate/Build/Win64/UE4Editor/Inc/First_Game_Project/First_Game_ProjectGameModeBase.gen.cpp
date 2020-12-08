// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "First_Game_Project/First_Game_ProjectGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFirst_Game_ProjectGameModeBase() {}
// Cross Module References
	FIRST_GAME_PROJECT_API UClass* Z_Construct_UClass_AFirst_Game_ProjectGameModeBase_NoRegister();
	FIRST_GAME_PROJECT_API UClass* Z_Construct_UClass_AFirst_Game_ProjectGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_First_Game_Project();
// End Cross Module References
	void AFirst_Game_ProjectGameModeBase::StaticRegisterNativesAFirst_Game_ProjectGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AFirst_Game_ProjectGameModeBase_NoRegister()
	{
		return AFirst_Game_ProjectGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AFirst_Game_ProjectGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFirst_Game_ProjectGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_First_Game_Project,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFirst_Game_ProjectGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "First_Game_ProjectGameModeBase.h" },
		{ "ModuleRelativePath", "First_Game_ProjectGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFirst_Game_ProjectGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFirst_Game_ProjectGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFirst_Game_ProjectGameModeBase_Statics::ClassParams = {
		&AFirst_Game_ProjectGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AFirst_Game_ProjectGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFirst_Game_ProjectGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFirst_Game_ProjectGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFirst_Game_ProjectGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFirst_Game_ProjectGameModeBase, 1410837329);
	template<> FIRST_GAME_PROJECT_API UClass* StaticClass<AFirst_Game_ProjectGameModeBase>()
	{
		return AFirst_Game_ProjectGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFirst_Game_ProjectGameModeBase(Z_Construct_UClass_AFirst_Game_ProjectGameModeBase, &AFirst_Game_ProjectGameModeBase::StaticClass, TEXT("/Script/First_Game_Project"), TEXT("AFirst_Game_ProjectGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFirst_Game_ProjectGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
