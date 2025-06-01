// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLockbox_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Lockbox;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Lockbox()
	{
		if (!Z_Registration_Info_UPackage__Script_Lockbox.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Lockbox",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xBFC14676,
				0xC2869667,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Lockbox.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Lockbox.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Lockbox(Z_Construct_UPackage__Script_Lockbox, TEXT("/Script/Lockbox"), Z_Registration_Info_UPackage__Script_Lockbox, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xBFC14676, 0xC2869667));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
