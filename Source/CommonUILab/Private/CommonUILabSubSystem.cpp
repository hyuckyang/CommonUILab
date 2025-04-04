// Fill out your copyright notice in the Description page of Project Settings.


#include "CommonUILabSubSystem.h"

void UCommonUILabSubSystem::Initialize(FSubsystemCollectionBase& Collection)
{
	// TODO
	
	Super::Initialize(Collection);
}

void UCommonUILabSubSystem::Deinitialize()
{
	Super::Deinitialize();

	// TODO
}


bool UCommonUILabSubSystem::ShouldCreateSubsystem(UObject* Outer) const
{
	if (!CastChecked<UGameInstance>(Outer)->IsDedicatedServerInstance())
	{
		TArray<UClass*> ChildClasses;
		GetDerivedClasses(GetClass(), ChildClasses, false);

		return ChildClasses.Num() == 0;
	}
	return false;
}

void UCommonUILabSubSystem::NotifyPlayerAdded(ULocalPlayer* LocalPlayer)
{
	// TODO
}

void UCommonUILabSubSystem::NotifyPlayerRemoved(ULocalPlayer* LocalPlayer)
{
	// TODO
}

void UCommonUILabSubSystem::NotifyPlayerDestroyed(ULocalPlayer* LocalPlayer)
{
	// TODO
}