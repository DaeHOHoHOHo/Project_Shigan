// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerWeapon_Melee.h"

// Sets default values
APlayerWeapon_Melee::APlayerWeapon_Melee()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APlayerWeapon_Melee::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APlayerWeapon_Melee::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

