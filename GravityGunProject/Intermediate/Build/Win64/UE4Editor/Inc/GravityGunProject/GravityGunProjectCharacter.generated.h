// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GRAVITYGUNPROJECT_GravityGunProjectCharacter_generated_h
#error "GravityGunProjectCharacter.generated.h already included, missing '#pragma once' in GravityGunProjectCharacter.h"
#endif
#define GRAVITYGUNPROJECT_GravityGunProjectCharacter_generated_h

#define GravityGunProject_Source_GravityGunProject_GravityGunProjectCharacter_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPlayFireAnimation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PlayFireAnimation(); \
		P_NATIVE_END; \
	}


#define GravityGunProject_Source_GravityGunProject_GravityGunProjectCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPlayFireAnimation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PlayFireAnimation(); \
		P_NATIVE_END; \
	}


#define GravityGunProject_Source_GravityGunProject_GravityGunProjectCharacter_h_15_EVENT_PARMS \
	struct GravityGunProjectCharacter_eventHitUpdateEvent_Parms \
	{ \
		bool IsHittingSomething; \
	};


#define GravityGunProject_Source_GravityGunProject_GravityGunProjectCharacter_h_15_CALLBACK_WRAPPERS
#define GravityGunProject_Source_GravityGunProject_GravityGunProjectCharacter_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGravityGunProjectCharacter(); \
	friend struct Z_Construct_UClass_AGravityGunProjectCharacter_Statics; \
public: \
	DECLARE_CLASS(AGravityGunProjectCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GravityGunProject"), NO_API) \
	DECLARE_SERIALIZER(AGravityGunProjectCharacter)


#define GravityGunProject_Source_GravityGunProject_GravityGunProjectCharacter_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAGravityGunProjectCharacter(); \
	friend struct Z_Construct_UClass_AGravityGunProjectCharacter_Statics; \
public: \
	DECLARE_CLASS(AGravityGunProjectCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GravityGunProject"), NO_API) \
	DECLARE_SERIALIZER(AGravityGunProjectCharacter)


#define GravityGunProject_Source_GravityGunProject_GravityGunProjectCharacter_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGravityGunProjectCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGravityGunProjectCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGravityGunProjectCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGravityGunProjectCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGravityGunProjectCharacter(AGravityGunProjectCharacter&&); \
	NO_API AGravityGunProjectCharacter(const AGravityGunProjectCharacter&); \
public:


#define GravityGunProject_Source_GravityGunProject_GravityGunProjectCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGravityGunProjectCharacter(AGravityGunProjectCharacter&&); \
	NO_API AGravityGunProjectCharacter(const AGravityGunProjectCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGravityGunProjectCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGravityGunProjectCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGravityGunProjectCharacter)


#define GravityGunProject_Source_GravityGunProject_GravityGunProjectCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(AGravityGunProjectCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(AGravityGunProjectCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__DefaultWeapon() { return STRUCT_OFFSET(AGravityGunProjectCharacter, DefaultWeapon); } \
	FORCEINLINE static uint32 __PPO__CurrentWeapon() { return STRUCT_OFFSET(AGravityGunProjectCharacter, CurrentWeapon); }


#define GravityGunProject_Source_GravityGunProject_GravityGunProjectCharacter_h_12_PROLOG \
	GravityGunProject_Source_GravityGunProject_GravityGunProjectCharacter_h_15_EVENT_PARMS


#define GravityGunProject_Source_GravityGunProject_GravityGunProjectCharacter_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GravityGunProject_Source_GravityGunProject_GravityGunProjectCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	GravityGunProject_Source_GravityGunProject_GravityGunProjectCharacter_h_15_RPC_WRAPPERS \
	GravityGunProject_Source_GravityGunProject_GravityGunProjectCharacter_h_15_CALLBACK_WRAPPERS \
	GravityGunProject_Source_GravityGunProject_GravityGunProjectCharacter_h_15_INCLASS \
	GravityGunProject_Source_GravityGunProject_GravityGunProjectCharacter_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GravityGunProject_Source_GravityGunProject_GravityGunProjectCharacter_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GravityGunProject_Source_GravityGunProject_GravityGunProjectCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	GravityGunProject_Source_GravityGunProject_GravityGunProjectCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	GravityGunProject_Source_GravityGunProject_GravityGunProjectCharacter_h_15_CALLBACK_WRAPPERS \
	GravityGunProject_Source_GravityGunProject_GravityGunProjectCharacter_h_15_INCLASS_NO_PURE_DECLS \
	GravityGunProject_Source_GravityGunProject_GravityGunProjectCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GRAVITYGUNPROJECT_API UClass* StaticClass<class AGravityGunProjectCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GravityGunProject_Source_GravityGunProject_GravityGunProjectCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
