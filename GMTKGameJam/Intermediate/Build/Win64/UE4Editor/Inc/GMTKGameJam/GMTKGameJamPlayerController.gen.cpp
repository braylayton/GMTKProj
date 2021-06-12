// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GMTKGameJam/GMTKGameJamPlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGMTKGameJamPlayerController() {}
// Cross Module References
	GMTKGAMEJAM_API UClass* Z_Construct_UClass_AGMTKGameJamPlayerController_NoRegister();
	GMTKGAMEJAM_API UClass* Z_Construct_UClass_AGMTKGameJamPlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_GMTKGameJam();
// End Cross Module References
	void AGMTKGameJamPlayerController::StaticRegisterNativesAGMTKGameJamPlayerController()
	{
	}
	UClass* Z_Construct_UClass_AGMTKGameJamPlayerController_NoRegister()
	{
		return AGMTKGameJamPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_AGMTKGameJamPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGMTKGameJamPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_GMTKGameJam,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGMTKGameJamPlayerController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "GMTKGameJamPlayerController.h" },
		{ "ModuleRelativePath", "GMTKGameJamPlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGMTKGameJamPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGMTKGameJamPlayerController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGMTKGameJamPlayerController_Statics::ClassParams = {
		&AGMTKGameJamPlayerController::StaticClass,
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
		0x008002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGMTKGameJamPlayerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGMTKGameJamPlayerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGMTKGameJamPlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGMTKGameJamPlayerController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGMTKGameJamPlayerController, 2381561670);
	template<> GMTKGAMEJAM_API UClass* StaticClass<AGMTKGameJamPlayerController>()
	{
		return AGMTKGameJamPlayerController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGMTKGameJamPlayerController(Z_Construct_UClass_AGMTKGameJamPlayerController, &AGMTKGameJamPlayerController::StaticClass, TEXT("/Script/GMTKGameJam"), TEXT("AGMTKGameJamPlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGMTKGameJamPlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
