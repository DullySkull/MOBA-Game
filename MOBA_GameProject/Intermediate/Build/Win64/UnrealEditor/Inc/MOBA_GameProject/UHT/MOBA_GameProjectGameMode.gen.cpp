// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MOBA_GameProject/MOBA_GameProjectGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMOBA_GameProjectGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	MOBA_GAMEPROJECT_API UClass* Z_Construct_UClass_AMOBA_GameProjectGameMode();
	MOBA_GAMEPROJECT_API UClass* Z_Construct_UClass_AMOBA_GameProjectGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MOBA_GameProject();
// End Cross Module References
	void AMOBA_GameProjectGameMode::StaticRegisterNativesAMOBA_GameProjectGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMOBA_GameProjectGameMode);
	UClass* Z_Construct_UClass_AMOBA_GameProjectGameMode_NoRegister()
	{
		return AMOBA_GameProjectGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AMOBA_GameProjectGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMOBA_GameProjectGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MOBA_GameProject,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMOBA_GameProjectGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMOBA_GameProjectGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "MOBA_GameProjectGameMode.h" },
		{ "ModuleRelativePath", "MOBA_GameProjectGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMOBA_GameProjectGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMOBA_GameProjectGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMOBA_GameProjectGameMode_Statics::ClassParams = {
		&AMOBA_GameProjectGameMode::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMOBA_GameProjectGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AMOBA_GameProjectGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AMOBA_GameProjectGameMode()
	{
		if (!Z_Registration_Info_UClass_AMOBA_GameProjectGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMOBA_GameProjectGameMode.OuterSingleton, Z_Construct_UClass_AMOBA_GameProjectGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMOBA_GameProjectGameMode.OuterSingleton;
	}
	template<> MOBA_GAMEPROJECT_API UClass* StaticClass<AMOBA_GameProjectGameMode>()
	{
		return AMOBA_GameProjectGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMOBA_GameProjectGameMode);
	AMOBA_GameProjectGameMode::~AMOBA_GameProjectGameMode() {}
	struct Z_CompiledInDeferFile_FID_Users_Billy_Documents_MOBA_Game_MOBA_GameProject_Source_MOBA_GameProject_MOBA_GameProjectGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Billy_Documents_MOBA_Game_MOBA_GameProject_Source_MOBA_GameProject_MOBA_GameProjectGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMOBA_GameProjectGameMode, AMOBA_GameProjectGameMode::StaticClass, TEXT("AMOBA_GameProjectGameMode"), &Z_Registration_Info_UClass_AMOBA_GameProjectGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMOBA_GameProjectGameMode), 4067066138U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Billy_Documents_MOBA_Game_MOBA_GameProject_Source_MOBA_GameProject_MOBA_GameProjectGameMode_h_3386674680(TEXT("/Script/MOBA_GameProject"),
		Z_CompiledInDeferFile_FID_Users_Billy_Documents_MOBA_Game_MOBA_GameProject_Source_MOBA_GameProject_MOBA_GameProjectGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Billy_Documents_MOBA_Game_MOBA_GameProject_Source_MOBA_GameProject_MOBA_GameProjectGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
