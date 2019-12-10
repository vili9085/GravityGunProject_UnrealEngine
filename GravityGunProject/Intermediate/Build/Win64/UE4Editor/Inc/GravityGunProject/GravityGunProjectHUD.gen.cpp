// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GravityGunProject/GravityGunProjectHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGravityGunProjectHUD() {}
// Cross Module References
	GRAVITYGUNPROJECT_API UClass* Z_Construct_UClass_AGravityGunProjectHUD_NoRegister();
	GRAVITYGUNPROJECT_API UClass* Z_Construct_UClass_AGravityGunProjectHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_GravityGunProject();
	GRAVITYGUNPROJECT_API UFunction* Z_Construct_UFunction_AGravityGunProjectHUD_UpdateCrosshairTexture();
// End Cross Module References
	void AGravityGunProjectHUD::StaticRegisterNativesAGravityGunProjectHUD()
	{
		UClass* Class = AGravityGunProjectHUD::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UpdateCrosshairTexture", &AGravityGunProjectHUD::execUpdateCrosshairTexture },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGravityGunProjectHUD_UpdateCrosshairTexture_Statics
	{
		struct GravityGunProjectHUD_eventUpdateCrosshairTexture_Parms
		{
			bool Hit;
		};
		static void NewProp_Hit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Hit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AGravityGunProjectHUD_UpdateCrosshairTexture_Statics::NewProp_Hit_SetBit(void* Obj)
	{
		((GravityGunProjectHUD_eventUpdateCrosshairTexture_Parms*)Obj)->Hit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGravityGunProjectHUD_UpdateCrosshairTexture_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GravityGunProjectHUD_eventUpdateCrosshairTexture_Parms), &Z_Construct_UFunction_AGravityGunProjectHUD_UpdateCrosshairTexture_Statics::NewProp_Hit_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGravityGunProjectHUD_UpdateCrosshairTexture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGravityGunProjectHUD_UpdateCrosshairTexture_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGravityGunProjectHUD_UpdateCrosshairTexture_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Other classes can tell this if they are hitting something. This can be done in blueprints */" },
		{ "ModuleRelativePath", "GravityGunProjectHUD.h" },
		{ "ToolTip", "Other classes can tell this if they are hitting something. This can be done in blueprints" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGravityGunProjectHUD_UpdateCrosshairTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGravityGunProjectHUD, nullptr, "UpdateCrosshairTexture", nullptr, nullptr, sizeof(GravityGunProjectHUD_eventUpdateCrosshairTexture_Parms), Z_Construct_UFunction_AGravityGunProjectHUD_UpdateCrosshairTexture_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AGravityGunProjectHUD_UpdateCrosshairTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGravityGunProjectHUD_UpdateCrosshairTexture_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AGravityGunProjectHUD_UpdateCrosshairTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGravityGunProjectHUD_UpdateCrosshairTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGravityGunProjectHUD_UpdateCrosshairTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AGravityGunProjectHUD_NoRegister()
	{
		return AGravityGunProjectHUD::StaticClass();
	}
	struct Z_Construct_UClass_AGravityGunProjectHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGravityGunProjectHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_GravityGunProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGravityGunProjectHUD_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGravityGunProjectHUD_UpdateCrosshairTexture, "UpdateCrosshairTexture" }, // 1948564275
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGravityGunProjectHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "GravityGunProjectHUD.h" },
		{ "ModuleRelativePath", "GravityGunProjectHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGravityGunProjectHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGravityGunProjectHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGravityGunProjectHUD_Statics::ClassParams = {
		&AGravityGunProjectHUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AGravityGunProjectHUD_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AGravityGunProjectHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGravityGunProjectHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGravityGunProjectHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGravityGunProjectHUD, 2779559806);
	template<> GRAVITYGUNPROJECT_API UClass* StaticClass<AGravityGunProjectHUD>()
	{
		return AGravityGunProjectHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGravityGunProjectHUD(Z_Construct_UClass_AGravityGunProjectHUD, &AGravityGunProjectHUD::StaticClass, TEXT("/Script/GravityGunProject"), TEXT("AGravityGunProjectHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGravityGunProjectHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
