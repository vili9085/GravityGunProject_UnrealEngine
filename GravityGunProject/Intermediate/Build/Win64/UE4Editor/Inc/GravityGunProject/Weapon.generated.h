// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GRAVITYGUNPROJECT_Weapon_generated_h
#error "Weapon.generated.h already included, missing '#pragma once' in Weapon.h"
#endif
#define GRAVITYGUNPROJECT_Weapon_generated_h

#define GravityGunProject_Source_GravityGunProject_Weapon_h_14_RPC_WRAPPERS
#define GravityGunProject_Source_GravityGunProject_Weapon_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define GravityGunProject_Source_GravityGunProject_Weapon_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWeapon(); \
	friend struct Z_Construct_UClass_AWeapon_Statics; \
public: \
	DECLARE_CLASS(AWeapon, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GravityGunProject"), NO_API) \
	DECLARE_SERIALIZER(AWeapon)


#define GravityGunProject_Source_GravityGunProject_Weapon_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAWeapon(); \
	friend struct Z_Construct_UClass_AWeapon_Statics; \
public: \
	DECLARE_CLASS(AWeapon, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GravityGunProject"), NO_API) \
	DECLARE_SERIALIZER(AWeapon)


#define GravityGunProject_Source_GravityGunProject_Weapon_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWeapon(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWeapon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeapon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeapon(AWeapon&&); \
	NO_API AWeapon(const AWeapon&); \
public:


#define GravityGunProject_Source_GravityGunProject_Weapon_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeapon(AWeapon&&); \
	NO_API AWeapon(const AWeapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeapon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWeapon)


#define GravityGunProject_Source_GravityGunProject_Weapon_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__WeaponMesh() { return STRUCT_OFFSET(AWeapon, WeaponMesh); }


#define GravityGunProject_Source_GravityGunProject_Weapon_h_11_PROLOG
#define GravityGunProject_Source_GravityGunProject_Weapon_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GravityGunProject_Source_GravityGunProject_Weapon_h_14_PRIVATE_PROPERTY_OFFSET \
	GravityGunProject_Source_GravityGunProject_Weapon_h_14_RPC_WRAPPERS \
	GravityGunProject_Source_GravityGunProject_Weapon_h_14_INCLASS \
	GravityGunProject_Source_GravityGunProject_Weapon_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GravityGunProject_Source_GravityGunProject_Weapon_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GravityGunProject_Source_GravityGunProject_Weapon_h_14_PRIVATE_PROPERTY_OFFSET \
	GravityGunProject_Source_GravityGunProject_Weapon_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	GravityGunProject_Source_GravityGunProject_Weapon_h_14_INCLASS_NO_PURE_DECLS \
	GravityGunProject_Source_GravityGunProject_Weapon_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GRAVITYGUNPROJECT_API UClass* StaticClass<class AWeapon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GravityGunProject_Source_GravityGunProject_Weapon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
