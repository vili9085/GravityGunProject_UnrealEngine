// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Weapon.h"
#include "GravityGun.generated.h"


UCLASS()
class GRAVITYGUNPROJECT_API AGravityGun : public AWeapon
{
	GENERATED_BODY()

	/** The currently held object */
	UPrimitiveComponent* CurrentHeldComponent;

	/** Location on gun mesh where particles spawn. */
	UPROPERTY(VisibleAnywhere)
	class USceneComponent* MuzzleLocation;

	/** Sound to play when we fire */
	UPROPERTY(EditAnywhere)
	class USoundBase* FireSound;

	/** Partcle system that runs when holding object */
	UPROPERTY(EditAnywhere)
	class UParticleSystemComponent* HoldingParticle;

	/** Partcle system that spawns when shooting an object */
	UPROPERTY(EditAnywhere)
	class UParticleSystem* ShootParticle;

	/** Used to grab and hold objects */
	UPROPERTY(EditAnywhere)
	class UPhysicsHandleComponent* PhysicsHandle;

	/** The distance from character that objects can be affected by gun */
	UPROPERTY(EditAnywhere)
	float ShootDistance = 2000;

	/** The force which objects shot are affected by */
	UPROPERTY(EditAnywhere)
	float ShootForce = 1000000;

	/** The offset from the camera that held objects are positioned */
	UPROPERTY(EditAnywhere)
	float HeldObjectOffsetFromCharacter = 300;

public:

	AGravityGun();

	virtual void Tick(float DeltaTime) override;

	/** Called on fire input */
	UFUNCTION()
	virtual void Fire() override;

	/** Called on secondary fire input */
	UFUNCTION()
	virtual void SecondaryFire() override;

	/** Called when equipping weapon */
	UFUNCTION()
	virtual void OnEquip() override;

	/** Called when unequipping weapon */
	UFUNCTION()
	virtual void OnUnEquip() override;bool IsHittingSomething;

protected:
	/** Shoots held object or tries to shoot objects in reach */
	void ShootObject();
	/** Drops held object ore tries to grab object in reach */
	void HandleGrab();
	/** Shoots a line trace on visible objects and return true if something was hit */
	bool ShootTrace(FHitResult* HitResult);
	/** Plays fire sound */
	void PlayFireSound();
	/** Checks if there are objects in reach to grab or shoot. Tells this to Character */
	void CheckIfObjectsAreInReach();

};
