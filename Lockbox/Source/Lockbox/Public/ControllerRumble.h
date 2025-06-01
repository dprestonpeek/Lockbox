// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "ControllerRumble.generated.h"

UCLASS()
class LOCKBOX_API AControllerRumble : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AControllerRumble();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Vibration")
	UForceFeedbackEffect* VibrationEffectToPlay;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	// Trigger Rumble
	UFUNCTION(BlueprintCallable, Category = "Vibration")
	void TriggerRumble(float length);
	
};
