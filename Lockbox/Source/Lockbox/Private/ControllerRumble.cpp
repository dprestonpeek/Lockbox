// Fill out your copyright notice in the Description page of Project Settings.


#include "ControllerRumble.h"
#include <Kismet/GameplayStatics.h>


// Sets default values
AControllerRumble::AControllerRumble()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
    VibrationEffectToPlay = nullptr; // Initialize the pointer
}

// Called when the game starts or when spawned
void AControllerRumble::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AControllerRumble::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AControllerRumble::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AControllerRumble::TriggerRumble(float length) 
{// Get the first local player controller
    APlayerController* PlayerController = UGameplayStatics::GetPlayerController(this, 0);

    if (PlayerController)
    {
        if (VibrationEffectToPlay)
        {
            // FForceFeedbackParameters allows you to specify looping, tag, etc.
            // For a one-shot, default parameters are usually fine.
            FForceFeedbackParameters Params;
            Params.bLooping = false;
            Params.Tag = NAME_None; // Optional tag

            PlayerController->ClientPlayForceFeedback(VibrationEffectToPlay, Params);
            UE_LOG(LogTemp, Log, TEXT("VibrationTestActor: Attempted to play vibration effect '%s'."), *VibrationEffectToPlay->GetName());
        }
        else
        {
            UE_LOG(LogTemp, Warning, TEXT("VibrationTestActor: VibrationEffectToPlay is not assigned!"));
        }
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("VibrationTestActor: PlayerController not found!"));
    }
}

