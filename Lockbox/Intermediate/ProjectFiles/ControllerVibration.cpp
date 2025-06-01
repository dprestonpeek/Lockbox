#include "ControllerVibration.h"
#include "Kismet/GameplayStatics.h"       // Required for GetPlayerController
#include "GameFramework/PlayerController.h" // Required for APlayerController
//#include "ForceFeedbackEffect.h"

// Example within an Actor class function

// Property to hold your Force Feedback Effect (settable in Blueprint or C++)
UPROPERTY(EditAnywhere, Category = "Feedback")
UForceFeedbackEffect* VibrationEffect;

//void AControllerVibration::TriggerVibration()
//{
//    APlayerController* PlayerController = UGameplayStatics::GetPlayerController(this, 0); // Get player controller for player 0
//
//    if (PlayerController && VibrationEffect)
//    {
//        // To play the effect once
//        PlayerController->ClientPlayForceFeedback(VibrationEffect, FForceFeedbackParameters());
//
//        // For looping (ensure you have a way to stop it)
//        // FForceFeedbackParameters Params;
//        // Params.bLooping = true;
//        // PlayerController->ClientPlayForceFeedback(VibrationEffect, Params);
//    }
//}


void AControllerVibration::PlayVibrationOnce()
{
    // Get the first local player controller
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

// To stop a looping effect, you would store the FForceFeedbackHandle returned by ClientPlayForceFeedback
// and then call:
// PlayerController->ClientStopForceFeedback(StoredHandle, FName("YourEffectTagIfYouUsedOne"));
// Or more simply if you know the effect:
// PlayerController->ClientStopForceFeedback(VibrationEffect, FName("YourEffectTagIfYouUsedOne"));