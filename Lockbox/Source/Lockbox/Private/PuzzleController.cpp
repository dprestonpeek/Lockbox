// Fill out your copyright notice in the Description page of Project Settings.


#include "PuzzleController.h"
#include <EnhancedInputComponent.h>


// Sets default values
APuzzleController::APuzzleController()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APuzzleController::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APuzzleController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APuzzleController::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

    // --- Enhanced Input System (Example - More modern approach) ---
    // Make sure to also add the Input Mapping Context in BeginPlay if using Enhanced Input
     if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent))
     {
         // Assuming UInputAction* IA_Move and IA_Jump are defined in your header and linked to Input Actions in the editor
         //EnhancedInputComponent->BindAction(IA_LeftTrigger, ETriggerEvent::Triggered, this, &AMyCharacter::MoveForwardEnhanced); // Example
         // EnhancedInputComponent->BindAction(IA_Jump, ETriggerEvent::Started, this, &AMyCharacter::JumpActionEnhanced); // Example
     }
}

