// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "UE_ZirconTech_POCGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class UE_ZIRCONTECH_POC_API AUE_ZirconTech_POCGameModeBase : public AGameModeBase
{
	GENERATED_BODY()

public: 
	AUE_ZirconTech_POCGameModeBase();
protected:
	UPROPERTY(EditAnywhere, Category = "Class Types")
		TSubclassOf<UUserWidget> WidgetClass;
	UPROPERTY(VisibleInstanceOnly, Category = "Runtime")
		class UScreenPlayer* ScreenPlayer;
	virtual void BeginPlay() override; 
	
};
