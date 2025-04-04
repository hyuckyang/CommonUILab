// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "CommonUILabSubSystem.generated.h"

/**
 * 
 */
UCLASS()
class COMMONUILAB_API UCommonUILabSubSystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	
	// ~Begin UGameInstanceSubsystem Interface
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;
	virtual bool ShouldCreateSubsystem(UObject* Outer) const override;
	// ~End UGameInstanceSubsystem Interface


	// ~Begin LocalPlayer Create and Remove, Destroy
	void NotifyPlayerAdded(ULocalPlayer* LocalPlayer);
	void NotifyPlayerRemoved(ULocalPlayer* LocalPlayer);
	void NotifyPlayerDestroyed(ULocalPlayer* LocalPlayer);
	// ~End LocalPlayer Create and Remove, Destroy
};
