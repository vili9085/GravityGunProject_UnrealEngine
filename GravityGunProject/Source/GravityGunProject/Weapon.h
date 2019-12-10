// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Weapon.generated.h"

class AGravityGunProjectCharacter;

UCLASS()
class GRAVITYGUNPROJECT_API AWeapon : public AActor // Base class for weapons. Could be abstract
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AWeapon();

protected:

	/** The mesh of the weapon */
	UPROPERTY(VisibleDefaultsOnly, Category = Mesh)
	USkeletalMeshComponent* WeaponMesh;

	/** The character that controls the weapon */
	class AGravityGunProjectCharacter* Owner;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	/** Called on fire input */
	virtual void Fire();

	/** Called on secondary fire input */
	virtual void SecondaryFire();

	/** Called when equipping weapon */
	virtual void OnEquip();

	/** Called when unequipping weapon */
	virtual void OnUnEquip();

	/** Sets weapon owner */
	void SetWeaponOwner(AGravityGunProjectCharacter *NewOwner);

};
