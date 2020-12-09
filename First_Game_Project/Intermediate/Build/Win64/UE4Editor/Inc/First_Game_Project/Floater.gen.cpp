// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "First_Game_Project/GameActors/Floater.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFloater() {}
// Cross Module References
	FIRST_GAME_PROJECT_API UClass* Z_Construct_UClass_AFloater_NoRegister();
	FIRST_GAME_PROJECT_API UClass* Z_Construct_UClass_AFloater();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_First_Game_Project();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void AFloater::StaticRegisterNativesAFloater()
	{
	}
	UClass* Z_Construct_UClass_AFloater_NoRegister()
	{
		return AFloater::StaticClass();
	}
	struct Z_Construct_UClass_AFloater_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InitialLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InitialLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_placedLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_placedLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_worldOrigin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_worldOrigin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_initialDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_initialDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldFloat_MetaData[];
#endif
		static void NewProp_bShouldFloat_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldFloat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInitializeFloaterLocations_MetaData[];
#endif
		static void NewProp_bInitializeFloaterLocations_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInitializeFloaterLocations;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_A_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_A;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_B_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_B;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_C_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_C;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_D_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_D;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFloater_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_First_Game_Project,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloater_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GameActors/Floater.h" },
		{ "ModuleRelativePath", "GameActors/Floater.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloater_Statics::NewProp_StaticMesh_MetaData[] = {
		{ "Category", "ActorMeshComponents" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GameActors/Floater.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFloater_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFloater, StaticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFloater_Statics::NewProp_StaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloater_Statics::NewProp_StaticMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloater_Statics::NewProp_InitialLocation_MetaData[] = {
		{ "Category", "Floater Variables" },
		{ "Comment", "// Location used by SetActorLocation() when BeginPlay() is called\n" },
		{ "ModuleRelativePath", "GameActors/Floater.h" },
		{ "ToolTip", "Location used by SetActorLocation() when BeginPlay() is called" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFloater_Statics::NewProp_InitialLocation = { "InitialLocation", nullptr, (EPropertyFlags)0x0010000000000805, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFloater, InitialLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AFloater_Statics::NewProp_InitialLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloater_Statics::NewProp_InitialLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloater_Statics::NewProp_placedLocation_MetaData[] = {
		{ "Category", "Floater Variables" },
		{ "Comment", "// Location of the Actor when dragged in from the editor\n// Not editable\n" },
		{ "ModuleRelativePath", "GameActors/Floater.h" },
		{ "ToolTip", "Location of the Actor when dragged in from the editor\nNot editable" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFloater_Statics::NewProp_placedLocation = { "placedLocation", nullptr, (EPropertyFlags)0x0010000000020805, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFloater, placedLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AFloater_Statics::NewProp_placedLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloater_Statics::NewProp_placedLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloater_Statics::NewProp_worldOrigin_MetaData[] = {
		{ "Category", "Floater Variables" },
		{ "ModuleRelativePath", "GameActors/Floater.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFloater_Statics::NewProp_worldOrigin = { "worldOrigin", nullptr, (EPropertyFlags)0x0010000000030015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFloater, worldOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AFloater_Statics::NewProp_worldOrigin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloater_Statics::NewProp_worldOrigin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloater_Statics::NewProp_initialDirection_MetaData[] = {
		{ "Category", "Floater Variables" },
		{ "ModuleRelativePath", "GameActors/Floater.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFloater_Statics::NewProp_initialDirection = { "initialDirection", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFloater, initialDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AFloater_Statics::NewProp_initialDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloater_Statics::NewProp_initialDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloater_Statics::NewProp_bShouldFloat_MetaData[] = {
		{ "Category", "Floater Variables" },
		{ "ModuleRelativePath", "GameActors/Floater.h" },
	};
#endif
	void Z_Construct_UClass_AFloater_Statics::NewProp_bShouldFloat_SetBit(void* Obj)
	{
		((AFloater*)Obj)->bShouldFloat = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFloater_Statics::NewProp_bShouldFloat = { "bShouldFloat", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFloater), &Z_Construct_UClass_AFloater_Statics::NewProp_bShouldFloat_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFloater_Statics::NewProp_bShouldFloat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloater_Statics::NewProp_bShouldFloat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloater_Statics::NewProp_bInitializeFloaterLocations_MetaData[] = {
		{ "Category", "Floater Variables" },
		{ "ModuleRelativePath", "GameActors/Floater.h" },
	};
#endif
	void Z_Construct_UClass_AFloater_Statics::NewProp_bInitializeFloaterLocations_SetBit(void* Obj)
	{
		((AFloater*)Obj)->bInitializeFloaterLocations = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFloater_Statics::NewProp_bInitializeFloaterLocations = { "bInitializeFloaterLocations", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFloater), &Z_Construct_UClass_AFloater_Statics::NewProp_bInitializeFloaterLocations_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFloater_Statics::NewProp_bInitializeFloaterLocations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloater_Statics::NewProp_bInitializeFloaterLocations_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloater_Statics::NewProp_A_MetaData[] = {
		{ "Category", "Floater Variables" },
		{ "Comment", "// Amplitude\n" },
		{ "ModuleRelativePath", "GameActors/Floater.h" },
		{ "ToolTip", "Amplitude" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFloater_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFloater, A), METADATA_PARAMS(Z_Construct_UClass_AFloater_Statics::NewProp_A_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloater_Statics::NewProp_A_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloater_Statics::NewProp_B_MetaData[] = {
		{ "Category", "Floater Variables" },
		{ "Comment", "// Period\n" },
		{ "ModuleRelativePath", "GameActors/Floater.h" },
		{ "ToolTip", "Period" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFloater_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFloater, B), METADATA_PARAMS(Z_Construct_UClass_AFloater_Statics::NewProp_B_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloater_Statics::NewProp_B_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloater_Statics::NewProp_C_MetaData[] = {
		{ "Category", "Floater Variables" },
		{ "Comment", "// Phase Shift\n" },
		{ "ModuleRelativePath", "GameActors/Floater.h" },
		{ "ToolTip", "Phase Shift" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFloater_Statics::NewProp_C = { "C", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFloater, C), METADATA_PARAMS(Z_Construct_UClass_AFloater_Statics::NewProp_C_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloater_Statics::NewProp_C_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloater_Statics::NewProp_D_MetaData[] = {
		{ "Category", "Floater Variables" },
		{ "Comment", "// Vertical Shift\n" },
		{ "ModuleRelativePath", "GameActors/Floater.h" },
		{ "ToolTip", "Vertical Shift" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFloater_Statics::NewProp_D = { "D", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFloater, D), METADATA_PARAMS(Z_Construct_UClass_AFloater_Statics::NewProp_D_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloater_Statics::NewProp_D_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFloater_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloater_Statics::NewProp_StaticMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloater_Statics::NewProp_InitialLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloater_Statics::NewProp_placedLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloater_Statics::NewProp_worldOrigin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloater_Statics::NewProp_initialDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloater_Statics::NewProp_bShouldFloat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloater_Statics::NewProp_bInitializeFloaterLocations,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloater_Statics::NewProp_A,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloater_Statics::NewProp_B,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloater_Statics::NewProp_C,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloater_Statics::NewProp_D,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFloater_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFloater>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFloater_Statics::ClassParams = {
		&AFloater::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFloater_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AFloater_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFloater_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFloater_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFloater()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFloater_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFloater, 36280422);
	template<> FIRST_GAME_PROJECT_API UClass* StaticClass<AFloater>()
	{
		return AFloater::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFloater(Z_Construct_UClass_AFloater, &AFloater::StaticClass, TEXT("/Script/First_Game_Project"), TEXT("AFloater"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFloater);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
