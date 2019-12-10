// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "GravityGunProjectHUD.h"
#include "Engine/Canvas.h"
#include "Engine/Texture2D.h"
#include "TextureResource.h"
#include "CanvasItem.h"
#include "UObject/ConstructorHelpers.h"

AGravityGunProjectHUD::AGravityGunProjectHUD()
{
	// Set the crosshair textures
	static ConstructorHelpers::FObjectFinder<UTexture2D> CrosshairTexObj(TEXT("/Game/FirstPerson/Textures/FirstPersonCrosshair"));
	CrosshairTextureHit = CrosshairTexObj.Object;

	static ConstructorHelpers::FObjectFinder<UTexture2D> CrosshairTexObj2(TEXT("/Game/FirstPerson/Textures/FirstPersonCrosshair2"));
	CrosshairTextureMiss = CrosshairTexObj2.Object;
}

void AGravityGunProjectHUD::BeginPlay()
{
	CrosshairTextureCurrent = CrosshairTextureMiss;
}

void AGravityGunProjectHUD::DrawHUD()
{
	Super::DrawHUD();

	// find center of the Canvas
	const FVector2D Center(Canvas->ClipX * 0.5f, Canvas->ClipY * 0.5f);

	// Offset by half of the texture's dimensions so that the center of the texture aligns with the center of the Canvas.
	FVector2D CrosshairDrawPosition(Center.X - (CrosshairTextureCurrent->GetSurfaceWidth() * 0.5f), Center.Y - (CrosshairTextureCurrent->GetSurfaceHeight() * 0.5f));

	// draw the crosshair
	FCanvasTileItem TileItem( CrosshairDrawPosition, CrosshairTextureCurrent->Resource, FLinearColor::White);
	TileItem.BlendMode = SE_BLEND_Translucent;
	Canvas->DrawItem( TileItem );
}

void AGravityGunProjectHUD::UpdateCrosshairTexture(bool Hit)
{
	if (Hit) 
	{
		if (CrosshairTextureCurrent != CrosshairTextureHit)
			CrosshairTextureCurrent = CrosshairTextureHit;
	}
	else
	{
		if (CrosshairTextureCurrent != CrosshairTextureMiss)
			CrosshairTextureCurrent = CrosshairTextureMiss;
	}
}