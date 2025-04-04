// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "CommonUILabPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class COMMONUILAB_API ACommonUILabPlayerController : public APlayerController
{
	GENERATED_BODY()

private:
	
	virtual void ReceivedPlayer() override;
};
