// Fill out your copyright notice in the Description page of Project Settings.


#include "Weapon.h"

// Sets default values
AWeapon::AWeapon()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

void AWeapon::SetWeaponOwner(AGravityGunProjectCharacter *NewOwner)
{
	Owner = NewOwner;
}

void AWeapon::Fire()
{
}

void AWeapon::SecondaryFire()
{
}

void AWeapon::OnEquip()
{
}

void AWeapon::OnUnEquip()
{
}

// Called every frame
void AWeapon::Tick(float DeltaTime)
{
	

}

