// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GRAVITYGUNPROJECT_GravityGunProjectHUD_generated_h
#error "GravityGunProjectHUD.generated.h already included, missing '#pragma once' in GravityGunProjectHUD.h"
#endif
#define GRAVITYGUNPROJECT_GravityGunProjectHUD_generated_h

#define GravityGunProject_Source_GravityGunProject_GravityGunProjectHUD_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdateCrosshairTexture) \
	{ \
		P_GET_UBOOL(Z_Param_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateCrosshairTexture(Z_Param_Hit); \
		P_NATIVE_END; \
	}


#define GravityGunProject_Source_GravityGunProject_GravityGunProjectHUD_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateCrosshairTexture) \
	{ \
		P_GET_UBOOL(Z_Param_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateCrosshairTexture(Z_Param_Hit); \
		P_NATIVE_END; \
	}


#define GravityGunProject_Source_GravityGunProject_GravityGunProjectHUD_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGravityGunProjectHUD(); \
	friend struct Z_Construct_UClass_AGravityGunProjectHUD_Statics; \
public: \
	DECLARE_CLASS(AGravityGunProjectHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/GravityGunProject"), NO_API) \
	DECLARE_SERIALIZER(AGravityGunProjectHUD)


#define GravityGunProject_Source_GravityGunProject_GravityGunProjectHUD_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAGravityGunProjectHUD(); \
	friend struct Z_Construct_UClass_AGravityGunProjectHUD_Statics; \
public: \
	DECLARE_CLASS(AGravityGunProjectHUD, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/GravityGunProject"), NO_API) \
	DECLARE_SERIALIZER(AGravityGunProjectHUD)


#define GravityGunProject_Source_GravityGunProject_GravityGunProjectHUD_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGravityGunProjectHUD(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGravityGunProjectHUD) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGravityGunProjectHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGravityGunProjectHUD); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGravityGunProjectHUD(AGravityGunProjectHUD&&); \
	NO_API AGravityGunProjectHUD(const AGravityGunProjectHUD&); \
public:


#define GravityGunProject_Source_GravityGunProject_GravityGunProjectHUD_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGravityGunProjectHUD(AGravityGunProjectHUD&&); \
	NO_API AGravityGunProjectHUD(const AGravityGunProjectHUD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGravityGunProjectHUD); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGravityGunProjectHUD); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGravityGunProjectHUD)


#define GravityGunProject_Source_GravityGunProject_GravityGunProjectHUD_h_12_PRIVATE_PROPERTY_OFFSET
#define GravityGunProject_Source_GravityGunProject_GravityGunProjectHUD_h_9_PROLOG
#define GravityGunProject_Source_GravityGunProject_GravityGunProjectHUD_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GravityGunProject_Source_GravityGunProject_GravityGunProjectHUD_h_12_PRIVATE_PROPERTY_OFFSET \
	GravityGunProject_Source_GravityGunProject_GravityGunProjectHUD_h_12_RPC_WRAPPERS \
	GravityGunProject_Source_GravityGunProject_GravityGunProjectHUD_h_12_INCLASS \
	GravityGunProject_Source_GravityGunProject_GravityGunProjectHUD_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GravityGunProject_Source_GravityGunProject_GravityGunProjectHUD_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GravityGunProject_Source_GravityGunProject_GravityGunProjectHUD_h_12_PRIVATE_PROPERTY_OFFSET \
	GravityGunProject_Source_GravityGunProject_GravityGunProjectHUD_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	GravityGunProject_Source_GravityGunProject_GravityGunProjectHUD_h_12_INCLASS_NO_PURE_DECLS \
	GravityGunProject_Source_GravityGunProject_GravityGunProjectHUD_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GRAVITYGUNPROJECT_API UClass* StaticClass<class AGravityGunProjectHUD>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GravityGunProject_Source_GravityGunProject_GravityGunProjectHUD_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
