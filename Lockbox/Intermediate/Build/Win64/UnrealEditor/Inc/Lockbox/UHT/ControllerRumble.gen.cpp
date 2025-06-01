// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Lockbox/Public/ControllerRumble.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeControllerRumble() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APawn();
ENGINE_API UClass* Z_Construct_UClass_UForceFeedbackEffect_NoRegister();
LOCKBOX_API UClass* Z_Construct_UClass_AControllerRumble();
LOCKBOX_API UClass* Z_Construct_UClass_AControllerRumble_NoRegister();
UPackage* Z_Construct_UPackage__Script_Lockbox();
// End Cross Module References

// Begin Class AControllerRumble Function TriggerRumble
struct Z_Construct_UFunction_AControllerRumble_TriggerRumble_Statics
{
	struct ControllerRumble_eventTriggerRumble_Parms
	{
		float length;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Vibration" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Trigger Rumble\n" },
#endif
		{ "ModuleRelativePath", "Public/ControllerRumble.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Trigger Rumble" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_length;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AControllerRumble_TriggerRumble_Statics::NewProp_length = { "length", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ControllerRumble_eventTriggerRumble_Parms, length), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AControllerRumble_TriggerRumble_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AControllerRumble_TriggerRumble_Statics::NewProp_length,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AControllerRumble_TriggerRumble_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AControllerRumble_TriggerRumble_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AControllerRumble, nullptr, "TriggerRumble", nullptr, nullptr, Z_Construct_UFunction_AControllerRumble_TriggerRumble_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AControllerRumble_TriggerRumble_Statics::PropPointers), sizeof(Z_Construct_UFunction_AControllerRumble_TriggerRumble_Statics::ControllerRumble_eventTriggerRumble_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AControllerRumble_TriggerRumble_Statics::Function_MetaDataParams), Z_Construct_UFunction_AControllerRumble_TriggerRumble_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AControllerRumble_TriggerRumble_Statics::ControllerRumble_eventTriggerRumble_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AControllerRumble_TriggerRumble()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AControllerRumble_TriggerRumble_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AControllerRumble::execTriggerRumble)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_length);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TriggerRumble(Z_Param_length);
	P_NATIVE_END;
}
// End Class AControllerRumble Function TriggerRumble

// Begin Class AControllerRumble
void AControllerRumble::StaticRegisterNativesAControllerRumble()
{
	UClass* Class = AControllerRumble::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "TriggerRumble", &AControllerRumble::execTriggerRumble },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AControllerRumble);
UClass* Z_Construct_UClass_AControllerRumble_NoRegister()
{
	return AControllerRumble::StaticClass();
}
struct Z_Construct_UClass_AControllerRumble_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ControllerRumble.h" },
		{ "ModuleRelativePath", "Public/ControllerRumble.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VibrationEffectToPlay_MetaData[] = {
		{ "Category", "Vibration" },
		{ "ModuleRelativePath", "Public/ControllerRumble.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_VibrationEffectToPlay;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AControllerRumble_TriggerRumble, "TriggerRumble" }, // 1700031601
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AControllerRumble>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AControllerRumble_Statics::NewProp_VibrationEffectToPlay = { "VibrationEffectToPlay", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AControllerRumble, VibrationEffectToPlay), Z_Construct_UClass_UForceFeedbackEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VibrationEffectToPlay_MetaData), NewProp_VibrationEffectToPlay_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AControllerRumble_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AControllerRumble_Statics::NewProp_VibrationEffectToPlay,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AControllerRumble_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AControllerRumble_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_Lockbox,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AControllerRumble_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AControllerRumble_Statics::ClassParams = {
	&AControllerRumble::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AControllerRumble_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AControllerRumble_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AControllerRumble_Statics::Class_MetaDataParams), Z_Construct_UClass_AControllerRumble_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AControllerRumble()
{
	if (!Z_Registration_Info_UClass_AControllerRumble.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AControllerRumble.OuterSingleton, Z_Construct_UClass_AControllerRumble_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AControllerRumble.OuterSingleton;
}
template<> LOCKBOX_API UClass* StaticClass<AControllerRumble>()
{
	return AControllerRumble::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AControllerRumble);
AControllerRumble::~AControllerRumble() {}
// End Class AControllerRumble

// Begin Registration
struct Z_CompiledInDeferFile_FID_Lockbox_Lockbox_Source_Lockbox_Public_ControllerRumble_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AControllerRumble, AControllerRumble::StaticClass, TEXT("AControllerRumble"), &Z_Registration_Info_UClass_AControllerRumble, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AControllerRumble), 3642456365U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Lockbox_Lockbox_Source_Lockbox_Public_ControllerRumble_h_3595193599(TEXT("/Script/Lockbox"),
	Z_CompiledInDeferFile_FID_Lockbox_Lockbox_Source_Lockbox_Public_ControllerRumble_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Lockbox_Lockbox_Source_Lockbox_Public_ControllerRumble_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
