// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "GravityGunProjectHUD.generated.h"

UCLASS()
class AGravityGunProjectHUD : public AHUD
{
	GENERATED_BODY()

public:
	AGravityGunProjectHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

	/** Other classes can tell this if they are hitting something. This can be done in blueprints */
	UFUNCTION(BlueprintCallable)
	void UpdateCrosshairTexture(bool Hit);

private:
	/** Hit Crosshair asset pointer */
	class UTexture2D* CrosshairTextureHit;

	/** Miss Crosshair asset pointer */
	class UTexture2D* CrosshairTextureMiss;

	/** Current Crosshair pointer */
	class UTexture2D* CrosshairTextureCurrent;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

};

