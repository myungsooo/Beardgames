// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BasicsTutorial/BasicsTutorialGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBasicsTutorialGameMode() {}
// Cross Module References
	BASICSTUTORIAL_API UClass* Z_Construct_UClass_ABasicsTutorialGameMode_NoRegister();
	BASICSTUTORIAL_API UClass* Z_Construct_UClass_ABasicsTutorialGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_BasicsTutorial();
// End Cross Module References
	void ABasicsTutorialGameMode::StaticRegisterNativesABasicsTutorialGameMode()
	{
	}
	UClass* Z_Construct_UClass_ABasicsTutorialGameMode_NoRegister()
	{
		return ABasicsTutorialGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ABasicsTutorialGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABasicsTutorialGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_BasicsTutorial,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABasicsTutorialGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "BasicsTutorialGameMode.h" },
		{ "ModuleRelativePath", "BasicsTutorialGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABasicsTutorialGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABasicsTutorialGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABasicsTutorialGameMode_Statics::ClassParams = {
		&ABasicsTutorialGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_ABasicsTutorialGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABasicsTutorialGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABasicsTutorialGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABasicsTutorialGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABasicsTutorialGameMode, 3183418059);
	template<> BASICSTUTORIAL_API UClass* StaticClass<ABasicsTutorialGameMode>()
	{
		return ABasicsTutorialGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABasicsTutorialGameMode(Z_Construct_UClass_ABasicsTutorialGameMode, &ABasicsTutorialGameMode::StaticClass, TEXT("/Script/BasicsTutorial"), TEXT("ABasicsTutorialGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABasicsTutorialGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
