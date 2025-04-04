// Fill out your copyright notice in the Description page of Project Settings.


#include "CommonUILabGameInstance.h"

int32 UCommonUILabGameInstance::AddLocalPlayer(ULocalPlayer* NewPlayer, FPlatformUserId UserId)
{
	// TODO:
	
	return Super::AddLocalPlayer(NewPlayer, UserId);
}

bool UCommonUILabGameInstance::RemoveLocalPlayer(ULocalPlayer* ExistingPlayer)
{
	// TODO:
	
	return Super::RemoveLocalPlayer(ExistingPlayer);
}
