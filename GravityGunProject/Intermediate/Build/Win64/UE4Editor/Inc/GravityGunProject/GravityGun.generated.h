// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GRAVITYGUNPROJECT_GravityGun_generated_h
#error "GravityGun.generated.h already included, missing '#pragma once' in GravityGun.h"
#endif
#define GRAVITYGUNPROJECT_GravityGun_generated_h

#define GravityGunProject_Source_GravityGunProject_GravityGun_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnUnEquip) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnUnEquip(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnEquip) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnEquip(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSecondaryFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SecondaryFire(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Fire(); \
		P_NATIVE_END; \
	}


#define GravityGunProject_Source_GravityGunProject_GravityGun_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnUnEquip) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnUnEquip(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnEquip) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnEquip(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSecondaryFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SecondaryFire(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFire) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Fire(); \
		P_NATIVE_END; \
	}


#define GravityGunProject_Source_GravityGunProject_GravityGun_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGravityGun(); \
	friend struct Z_Construct_UClass_AGravityGun_Statics; \
public: \
	DECLARE_CLASS(AGravityGun, AWeapon, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GravityGunProject"), NO_API) \
	DECLARE_SERIALIZER(AGravityGun)


#define GravityGunProject_Source_GravityGunProject_GravityGun_h_13_INCLASS \
private: \
	static void StaticRegisterNativesAGravityGun(); \
	friend struct Z_Construct_UClass_AGravityGun_Statics; \
public: \
	DECLARE_CLASS(AGravityGun, AWeapon, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GravityGunProject"), NO_API) \
	DECLARE_SERIALIZER(AGravityGun)


#define GravityGunProject_Source_GravityGunProject_GravityGun_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGravityGun(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGravityGun) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGravityGun); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGravityGun); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGravityGun(AGravityGun&&); \
	NO_API AGravityGun(const AGravityGun&); \
public:


#define GravityGunProject_Source_GravityGunProject_GravityGun_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGravityGun(AGravityGun&&); \
	NO_API AGravityGun(const AGravityGun&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGravityGun); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGravityGun); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGravityGun)


#define GravityGunProject_Source_GravityGunProject_GravityGun_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MuzzleLocation() { return STRUCT_OFFSET(AGravityGun, MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FireSound() { return STRUCT_OFFSET(AGravityGun, FireSound); } \
	FORCEINLINE static uint32 __PPO__HoldingParticle() { return STRUCT_OFFSET(AGravityGun, HoldingParticle); } \
	FORCEINLINE static uint32 __PPO__ShootParticle() { return STRUCT_OFFSET(AGravityGun, ShootParticle); } \
	FORCEINLINE static uint32 __PPO__PhysicsHandle() { return STRUCT_OFFSET(AGravityGun, PhysicsHandle); } \
	FORCEINLINE static uint32 __PPO__ShootDistance() { return STRUCT_OFFSET(AGravityGun, ShootDistance); } \
	FORCEINLINE static uint32 __PPO__ShootForce() { return STRUCT_OFFSET(AGravityGun, ShootForce); } \
	FORCEINLINE static uint32 __PPO__HeldObjectOffsetFromCharacter() { return STRUCT_OFFSET(AGravityGun, HeldObjectOffsetFromCharacter); }


#define GravityGunProject_Source_GravityGunProject_GravityGun_h_10_PROLOG
#define GravityGunProject_Source_GravityGunProject_GravityGun_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GravityGunProject_Source_GravityGunProject_GravityGun_h_13_PRIVATE_PROPERTY_OFFSET \
	GravityGunProject_Source_GravityGunProject_GravityGun_h_13_RPC_WRAPPERS \
	GravityGunProject_Source_GravityGunProject_GravityGun_h_13_INCLASS \
	GravityGunProject_Source_GravityGunProject_GravityGun_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GravityGunProject_Source_GravityGunProject_GravityGun_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GravityGunProject_Source_GravityGunProject_GravityGun_h_13_PRIVATE_PROPERTY_OFFSET \
	GravityGunProject_Source_GravityGunProject_GravityGun_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	GravityGunProject_Source_GravityGunProject_GravityGun_h_13_INCLASS_NO_PURE_DECLS \
	GravityGunProject_Source_GravityGunProject_GravityGun_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GRAVITYGUNPROJECT_API UClass* StaticClass<class AGravityGun>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GravityGunProject_Source_GravityGunProject_GravityGun_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
