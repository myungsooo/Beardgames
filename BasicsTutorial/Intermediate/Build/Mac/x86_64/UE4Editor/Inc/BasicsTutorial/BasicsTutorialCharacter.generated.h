// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BASICSTUTORIAL_BasicsTutorialCharacter_generated_h
#error "BasicsTutorialCharacter.generated.h already included, missing '#pragma once' in BasicsTutorialCharacter.h"
#endif
#define BASICSTUTORIAL_BasicsTutorialCharacter_generated_h

#define BasicsTutorial_Source_BasicsTutorial_BasicsTutorialCharacter_h_12_SPARSE_DATA
#define BasicsTutorial_Source_BasicsTutorial_BasicsTutorialCharacter_h_12_RPC_WRAPPERS
#define BasicsTutorial_Source_BasicsTutorial_BasicsTutorialCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define BasicsTutorial_Source_BasicsTutorial_BasicsTutorialCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABasicsTutorialCharacter(); \
	friend struct Z_Construct_UClass_ABasicsTutorialCharacter_Statics; \
public: \
	DECLARE_CLASS(ABasicsTutorialCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BasicsTutorial"), NO_API) \
	DECLARE_SERIALIZER(ABasicsTutorialCharacter)


#define BasicsTutorial_Source_BasicsTutorial_BasicsTutorialCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesABasicsTutorialCharacter(); \
	friend struct Z_Construct_UClass_ABasicsTutorialCharacter_Statics; \
public: \
	DECLARE_CLASS(ABasicsTutorialCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/BasicsTutorial"), NO_API) \
	DECLARE_SERIALIZER(ABasicsTutorialCharacter)


#define BasicsTutorial_Source_BasicsTutorial_BasicsTutorialCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABasicsTutorialCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABasicsTutorialCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABasicsTutorialCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABasicsTutorialCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABasicsTutorialCharacter(ABasicsTutorialCharacter&&); \
	NO_API ABasicsTutorialCharacter(const ABasicsTutorialCharacter&); \
public:


#define BasicsTutorial_Source_BasicsTutorial_BasicsTutorialCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABasicsTutorialCharacter(ABasicsTutorialCharacter&&); \
	NO_API ABasicsTutorialCharacter(const ABasicsTutorialCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABasicsTutorialCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABasicsTutorialCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABasicsTutorialCharacter)


#define BasicsTutorial_Source_BasicsTutorial_BasicsTutorialCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ABasicsTutorialCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(ABasicsTutorialCharacter, FollowCamera); }


#define BasicsTutorial_Source_BasicsTutorial_BasicsTutorialCharacter_h_9_PROLOG
#define BasicsTutorial_Source_BasicsTutorial_BasicsTutorialCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BasicsTutorial_Source_BasicsTutorial_BasicsTutorialCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	BasicsTutorial_Source_BasicsTutorial_BasicsTutorialCharacter_h_12_SPARSE_DATA \
	BasicsTutorial_Source_BasicsTutorial_BasicsTutorialCharacter_h_12_RPC_WRAPPERS \
	BasicsTutorial_Source_BasicsTutorial_BasicsTutorialCharacter_h_12_INCLASS \
	BasicsTutorial_Source_BasicsTutorial_BasicsTutorialCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define BasicsTutorial_Source_BasicsTutorial_BasicsTutorialCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	BasicsTutorial_Source_BasicsTutorial_BasicsTutorialCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	BasicsTutorial_Source_BasicsTutorial_BasicsTutorialCharacter_h_12_SPARSE_DATA \
	BasicsTutorial_Source_BasicsTutorial_BasicsTutorialCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	BasicsTutorial_Source_BasicsTutorial_BasicsTutorialCharacter_h_12_INCLASS_NO_PURE_DECLS \
	BasicsTutorial_Source_BasicsTutorial_BasicsTutorialCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BASICSTUTORIAL_API UClass* StaticClass<class ABasicsTutorialCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID BasicsTutorial_Source_BasicsTutorial_BasicsTutorialCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
