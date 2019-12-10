// Fill out your copyright notice in the Description page of Project Settings.


#include "GravityGun.h"
#include "GravityGunProjectCharacter.h"
#include "Components/SkeletalMeshComponent.h"
#include "Camera/CameraComponent.h"
#include "Kismet/GameplayStatics.h"
#include "PhysicsEngine/PhysicsHandleComponent.h"
#include "Particles/ParticleSystemComponent.h"
#include "Particles/ParticleSystem.h"
#include "GravityGunProjectHUD.h"
#include "GameFramework/HUD.h"
//#include "DrawDebugHelpers.h" // Debug

AGravityGun::AGravityGun()
{
	// Create a gun mesh component
	WeaponMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("WeaponMesh"));
	WeaponMesh->SetOnlyOwnerSee(false);
	WeaponMesh->bCastDynamicShadow = false;
	WeaponMesh->CastShadow = false;
	WeaponMesh->SetupAttachment(RootComponent);

	MuzzleLocation = CreateDefaultSubobject<USceneComponent>(TEXT("MuzzleLocation"));
	MuzzleLocation->SetupAttachment(WeaponMesh);
	MuzzleLocation->SetRelativeLocation(FVector(0.2f, 48.4f, -10.6f));

	PhysicsHandle = CreateDefaultSubobject<UPhysicsHandleComponent>(TEXT("PhysicsHandle"));

	HoldingParticle = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("HoldingParticle"));
	HoldingParticle->SetupAttachment(MuzzleLocation);

}

void AGravityGun::Fire() 
{
	ShootObject();
}

void AGravityGun::SecondaryFire()
{
	HandleGrab();
}

void AGravityGun::OnEquip()
{
	WeaponMesh->AttachToComponent(Owner->GetMesh1P(), FAttachmentTransformRules(EAttachmentRule::SnapToTarget, true), TEXT("GripPoint"));
}

void AGravityGun::OnUnEquip()
{

}

void AGravityGun::ShootObject()
{
	if (CurrentHeldComponent) // Shoot the current object
	{
		PhysicsHandle->ReleaseComponent();
		CurrentHeldComponent->AddImpulse(Owner->GetFirstPersonCameraComponent()->GetForwardVector() * ShootForce);
		CurrentHeldComponent = NULL;
		HoldingParticle->Deactivate();
	}
	else // Look for object within reach to shoot
	{
		FHitResult* HitResult = new FHitResult();

		if (ShootTrace(HitResult))
		{
			UPrimitiveComponent* Component = HitResult->GetComponent();

			if (Component != NULL && Component->IsSimulatingPhysics())
			{
				Component->AddImpulse(Owner->GetFirstPersonCameraComponent()->GetForwardVector() * ShootForce);
			}
		}
	}

	PlayFireSound();
	Owner->PlayFireAnimation();
	UParticleSystemComponent* Particle = UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ShootParticle, MuzzleLocation->GetComponentLocation());
	Particle->SetWorldScale3D(FVector(0.2, 0.2, 0.2)); //Scale down particles because they are too big
}

void AGravityGun::HandleGrab()
{
	if (CurrentHeldComponent) // Release object
	{
		CurrentHeldComponent = NULL;
		PhysicsHandle->ReleaseComponent();
		HoldingParticle->Deactivate();
	}
	else // Look for object to grab
	{
		FHitResult* HitResult = new FHitResult();

		if (ShootTrace(HitResult))
		{
			UPrimitiveComponent* HitComponent = HitResult->GetComponent();

			if (HitComponent != NULL && HitComponent->IsSimulatingPhysics()) // Grab object
			{
				CurrentHeldComponent = HitComponent;
				PhysicsHandle->GrabComponentAtLocation(CurrentHeldComponent, "", CurrentHeldComponent->GetComponentLocation());
				HoldingParticle->Activate();
			}
		}
	}
}

/** Shoots line trace from camera position in cameras forward direction */
bool AGravityGun::ShootTrace(FHitResult* HitResult)
{
	FVector Direction = Owner->GetFirstPersonCameraComponent()->GetForwardVector();
	FVector StartPos = Owner->GetFirstPersonCameraComponent()->GetComponentLocation();
	FVector EndPos = StartPos + (Direction * ShootDistance);
	FCollisionQueryParams* Params = new FCollisionQueryParams();

	//DrawDebugLine(GetWorld(), StartPos, EndPos, FColor::Green, 5); // Debug

	return GetWorld()->LineTraceSingleByChannel(*HitResult, StartPos, EndPos, ECC_Visibility, Params);
}

void AGravityGun::PlayFireSound()
{
	// try and play the sound if specified
	if (FireSound != NULL)
	{
		UGameplayStatics::PlaySoundAtLocation(this, FireSound, GetActorLocation());
	}
}

void AGravityGun::Tick(float DeltaTime)
{
	if (CurrentHeldComponent) // If object is being held, update its position
	{
		FVector HoldPos = Owner->GetFirstPersonCameraComponent()->GetComponentLocation() + Owner->GetFirstPersonCameraComponent()->GetForwardVector() * HeldObjectOffsetFromCharacter;
		PhysicsHandle->SetTargetLocation(HoldPos);
	}

	CheckIfObjectsAreInReach();
}

void AGravityGun::CheckIfObjectsAreInReach()
{
	FHitResult* HitResult = new FHitResult();
	if (ShootTrace(HitResult))
	{
		UPrimitiveComponent* HitComponent = HitResult->GetComponent();
		Owner->HitUpdateEvent((HitComponent != NULL && HitComponent->IsSimulatingPhysics()));
		return;
	}
	Owner->HitUpdateEvent(false);
}