// Fill out your copyright notice in the Description page of Project Settings.


#include "AI.h"
#include "Runtime/Engine/Classes/Engine/World.h"
#include "Components/SkeletalMeshComponent.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "GameFramework/PlayerController.h"

// Sets default values
AAI::AAI()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AAI::BeginPlay()
{
	Super::BeginPlay();

	UMaterialInstanceDynamic* const material_instance = UMaterialInstanceDynamic::Create(GetMesh()->GetMaterial(0), this);
		if (material_instance)
		{
			material_instance->SetVectorParameterValue("BodyColor", FLinearColor(1.0f, 0.0f, 0.0f, 1.0f));
			GetMesh()->SetMaterial(0, material_instance);
		}
	
}

// Called every frame
void AAI::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AAI::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

