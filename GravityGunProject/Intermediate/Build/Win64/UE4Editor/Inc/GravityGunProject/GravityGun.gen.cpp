// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GravityGunProject/GravityGun.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGravityGun() {}
// Cross Module References
	GRAVITYGUNPROJECT_API UClass* Z_Construct_UClass_AGravityGun_NoRegister();
	GRAVITYGUNPROJECT_API UClass* Z_Construct_UClass_AGravityGun();
	GRAVITYGUNPROJECT_API UClass* Z_Construct_UClass_AWeapon();
	UPackage* Z_Construct_UPackage__Script_GravityGunProject();
	GRAVITYGUNPROJECT_API UFunction* Z_Construct_UFunction_AGravityGun_Fire();
	GRAVITYGUNPROJECT_API UFunction* Z_Construct_UFunction_AGravityGun_OnEquip();
	GRAVITYGUNPROJECT_API UFunction* Z_Construct_UFunction_AGravityGun_OnUnEquip();
	GRAVITYGUNPROJECT_API UFunction* Z_Construct_UFunction_AGravityGun_SecondaryFire();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsHandleComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	void AGravityGun::StaticRegisterNativesAGravityGun()
	{
		UClass* Class = AGravityGun::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Fire", &AGravityGun::execFire },
			{ "OnEquip", &AGravityGun::execOnEquip },
			{ "OnUnEquip", &AGravityGun::execOnUnEquip },
			{ "SecondaryFire", &AGravityGun::execSecondaryFire },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGravityGun_Fire_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGravityGun_Fire_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Called on fire input */" },
		{ "ModuleRelativePath", "GravityGun.h" },
		{ "ToolTip", "Called on fire input" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGravityGun_Fire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGravityGun, nullptr, "Fire", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGravityGun_Fire_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AGravityGun_Fire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGravityGun_Fire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGravityGun_Fire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGravityGun_OnEquip_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGravityGun_OnEquip_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Called when equipping weapon */" },
		{ "ModuleRelativePath", "GravityGun.h" },
		{ "ToolTip", "Called when equipping weapon" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGravityGun_OnEquip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGravityGun, nullptr, "OnEquip", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGravityGun_OnEquip_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AGravityGun_OnEquip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGravityGun_OnEquip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGravityGun_OnEquip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGravityGun_OnUnEquip_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGravityGun_OnUnEquip_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Called when unequipping weapon */" },
		{ "ModuleRelativePath", "GravityGun.h" },
		{ "ToolTip", "Called when unequipping weapon" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGravityGun_OnUnEquip_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGravityGun, nullptr, "OnUnEquip", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGravityGun_OnUnEquip_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AGravityGun_OnUnEquip_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGravityGun_OnUnEquip()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGravityGun_OnUnEquip_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGravityGun_SecondaryFire_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGravityGun_SecondaryFire_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Called on secondary fire input */" },
		{ "ModuleRelativePath", "GravityGun.h" },
		{ "ToolTip", "Called on secondary fire input" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGravityGun_SecondaryFire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGravityGun, nullptr, "SecondaryFire", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGravityGun_SecondaryFire_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AGravityGun_SecondaryFire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGravityGun_SecondaryFire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGravityGun_SecondaryFire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AGravityGun_NoRegister()
	{
		return AGravityGun::StaticClass();
	}
	struct Z_Construct_UClass_AGravityGun_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeldObjectOffsetFromCharacter_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HeldObjectOffsetFromCharacter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShootForce_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ShootForce;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShootDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ShootDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhysicsHandle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PhysicsHandle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShootParticle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ShootParticle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HoldingParticle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HoldingParticle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FireSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MuzzleLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MuzzleLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGravityGun_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AWeapon,
		(UObject* (*)())Z_Construct_UPackage__Script_GravityGunProject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGravityGun_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGravityGun_Fire, "Fire" }, // 1359290565
		{ &Z_Construct_UFunction_AGravityGun_OnEquip, "OnEquip" }, // 2961302586
		{ &Z_Construct_UFunction_AGravityGun_OnUnEquip, "OnUnEquip" }, // 3666957726
		{ &Z_Construct_UFunction_AGravityGun_SecondaryFire, "SecondaryFire" }, // 3065459122
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGravityGun_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GravityGun.h" },
		{ "ModuleRelativePath", "GravityGun.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGravityGun_Statics::NewProp_HeldObjectOffsetFromCharacter_MetaData[] = {
		{ "Category", "GravityGun" },
		{ "Comment", "/** The offset from the camera that held objects are positioned */" },
		{ "ModuleRelativePath", "GravityGun.h" },
		{ "ToolTip", "The offset from the camera that held objects are positioned" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGravityGun_Statics::NewProp_HeldObjectOffsetFromCharacter = { "HeldObjectOffsetFromCharacter", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGravityGun, HeldObjectOffsetFromCharacter), METADATA_PARAMS(Z_Construct_UClass_AGravityGun_Statics::NewProp_HeldObjectOffsetFromCharacter_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGravityGun_Statics::NewProp_HeldObjectOffsetFromCharacter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGravityGun_Statics::NewProp_ShootForce_MetaData[] = {
		{ "Category", "GravityGun" },
		{ "Comment", "/** The force which objects shot are affected by */" },
		{ "ModuleRelativePath", "GravityGun.h" },
		{ "ToolTip", "The force which objects shot are affected by" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGravityGun_Statics::NewProp_ShootForce = { "ShootForce", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGravityGun, ShootForce), METADATA_PARAMS(Z_Construct_UClass_AGravityGun_Statics::NewProp_ShootForce_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGravityGun_Statics::NewProp_ShootForce_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGravityGun_Statics::NewProp_ShootDistance_MetaData[] = {
		{ "Category", "GravityGun" },
		{ "Comment", "/** The distance from character that objects can be affected by gun */" },
		{ "ModuleRelativePath", "GravityGun.h" },
		{ "ToolTip", "The distance from character that objects can be affected by gun" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGravityGun_Statics::NewProp_ShootDistance = { "ShootDistance", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGravityGun, ShootDistance), METADATA_PARAMS(Z_Construct_UClass_AGravityGun_Statics::NewProp_ShootDistance_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGravityGun_Statics::NewProp_ShootDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGravityGun_Statics::NewProp_PhysicsHandle_MetaData[] = {
		{ "Category", "GravityGun" },
		{ "Comment", "/** Used to grab and hold objects */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GravityGun.h" },
		{ "ToolTip", "Used to grab and hold objects" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGravityGun_Statics::NewProp_PhysicsHandle = { "PhysicsHandle", nullptr, (EPropertyFlags)0x0040000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGravityGun, PhysicsHandle), Z_Construct_UClass_UPhysicsHandleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGravityGun_Statics::NewProp_PhysicsHandle_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGravityGun_Statics::NewProp_PhysicsHandle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGravityGun_Statics::NewProp_ShootParticle_MetaData[] = {
		{ "Category", "GravityGun" },
		{ "Comment", "/** Partcle system that spawns when shooting an object */" },
		{ "ModuleRelativePath", "GravityGun.h" },
		{ "ToolTip", "Partcle system that spawns when shooting an object" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGravityGun_Statics::NewProp_ShootParticle = { "ShootParticle", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGravityGun, ShootParticle), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGravityGun_Statics::NewProp_ShootParticle_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGravityGun_Statics::NewProp_ShootParticle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGravityGun_Statics::NewProp_HoldingParticle_MetaData[] = {
		{ "Category", "GravityGun" },
		{ "Comment", "/** Partcle system that runs when holding object */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GravityGun.h" },
		{ "ToolTip", "Partcle system that runs when holding object" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGravityGun_Statics::NewProp_HoldingParticle = { "HoldingParticle", nullptr, (EPropertyFlags)0x0040000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGravityGun, HoldingParticle), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGravityGun_Statics::NewProp_HoldingParticle_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGravityGun_Statics::NewProp_HoldingParticle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGravityGun_Statics::NewProp_FireSound_MetaData[] = {
		{ "Category", "GravityGun" },
		{ "Comment", "/** Sound to play when we fire */" },
		{ "ModuleRelativePath", "GravityGun.h" },
		{ "ToolTip", "Sound to play when we fire" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGravityGun_Statics::NewProp_FireSound = { "FireSound", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGravityGun, FireSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGravityGun_Statics::NewProp_FireSound_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGravityGun_Statics::NewProp_FireSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGravityGun_Statics::NewProp_MuzzleLocation_MetaData[] = {
		{ "Category", "GravityGun" },
		{ "Comment", "/** Location on gun mesh where particles spawn. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GravityGun.h" },
		{ "ToolTip", "Location on gun mesh where particles spawn." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGravityGun_Statics::NewProp_MuzzleLocation = { "MuzzleLocation", nullptr, (EPropertyFlags)0x00400000000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGravityGun, MuzzleLocation), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGravityGun_Statics::NewProp_MuzzleLocation_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGravityGun_Statics::NewProp_MuzzleLocation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGravityGun_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGravityGun_Statics::NewProp_HeldObjectOffsetFromCharacter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGravityGun_Statics::NewProp_ShootForce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGravityGun_Statics::NewProp_ShootDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGravityGun_Statics::NewProp_PhysicsHandle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGravityGun_Statics::NewProp_ShootParticle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGravityGun_Statics::NewProp_HoldingParticle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGravityGun_Statics::NewProp_FireSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGravityGun_Statics::NewProp_MuzzleLocation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGravityGun_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGravityGun>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGravityGun_Statics::ClassParams = {
		&AGravityGun::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGravityGun_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AGravityGun_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AGravityGun_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AGravityGun_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGravityGun()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGravityGun_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGravityGun, 1077980187);
	template<> GRAVITYGUNPROJECT_API UClass* StaticClass<AGravityGun>()
	{
		return AGravityGun::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGravityGun(Z_Construct_UClass_AGravityGun, &AGravityGun::StaticClass, TEXT("/Script/GravityGunProject"), TEXT("AGravityGun"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGravityGun);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
