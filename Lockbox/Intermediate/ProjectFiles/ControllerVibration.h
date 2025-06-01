#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameFramework/ForceFeedbackEffect.h" // Required for UForceFeedbackEffect
#include "VibrationTestActor.generated.h"

UCLASS()
class LOCKBOX_API AControllerVibration : public AActor
{
	GENERATED_BODY()

public:
	static void AControllerVibration::TriggerVibration();
};