// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FIRST_GAME_PROJECT_MyObject_generated_h
#error "MyObject.generated.h already included, missing '#pragma once' in MyObject.h"
#endif
#define FIRST_GAME_PROJECT_MyObject_generated_h

#define First_Game_Project_Source_First_Game_Project_MyObject_h_15_SPARSE_DATA
#define First_Game_Project_Source_First_Game_Project_MyObject_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execMyFunction);


#define First_Game_Project_Source_First_Game_Project_MyObject_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMyFunction);


#define First_Game_Project_Source_First_Game_Project_MyObject_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMyObject(); \
	friend struct Z_Construct_UClass_UMyObject_Statics; \
public: \
	DECLARE_CLASS(UMyObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/First_Game_Project"), NO_API) \
	DECLARE_SERIALIZER(UMyObject)


#define First_Game_Project_Source_First_Game_Project_MyObject_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUMyObject(); \
	friend struct Z_Construct_UClass_UMyObject_Statics; \
public: \
	DECLARE_CLASS(UMyObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/First_Game_Project"), NO_API) \
	DECLARE_SERIALIZER(UMyObject)


#define First_Game_Project_Source_First_Game_Project_MyObject_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyObject(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyObject) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyObject); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyObject); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyObject(UMyObject&&); \
	NO_API UMyObject(const UMyObject&); \
public:


#define First_Game_Project_Source_First_Game_Project_MyObject_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyObject(UMyObject&&); \
	NO_API UMyObject(const UMyObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyObject); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyObject); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMyObject)


#define First_Game_Project_Source_First_Game_Project_MyObject_h_15_PRIVATE_PROPERTY_OFFSET
#define First_Game_Project_Source_First_Game_Project_MyObject_h_12_PROLOG
#define First_Game_Project_Source_First_Game_Project_MyObject_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	First_Game_Project_Source_First_Game_Project_MyObject_h_15_PRIVATE_PROPERTY_OFFSET \
	First_Game_Project_Source_First_Game_Project_MyObject_h_15_SPARSE_DATA \
	First_Game_Project_Source_First_Game_Project_MyObject_h_15_RPC_WRAPPERS \
	First_Game_Project_Source_First_Game_Project_MyObject_h_15_INCLASS \
	First_Game_Project_Source_First_Game_Project_MyObject_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define First_Game_Project_Source_First_Game_Project_MyObject_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	First_Game_Project_Source_First_Game_Project_MyObject_h_15_PRIVATE_PROPERTY_OFFSET \
	First_Game_Project_Source_First_Game_Project_MyObject_h_15_SPARSE_DATA \
	First_Game_Project_Source_First_Game_Project_MyObject_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	First_Game_Project_Source_First_Game_Project_MyObject_h_15_INCLASS_NO_PURE_DECLS \
	First_Game_Project_Source_First_Game_Project_MyObject_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FIRST_GAME_PROJECT_API UClass* StaticClass<class UMyObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID First_Game_Project_Source_First_Game_Project_MyObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
