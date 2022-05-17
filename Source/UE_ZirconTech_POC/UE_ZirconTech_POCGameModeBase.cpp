// Copyright Epic Games, Inc. All Rights Reserved.


#include "UE_ZirconTech_POCGameModeBase.h"
#include "PlayerCharacter.h"
#include "Blueprint/UserWidget.h"
#include "ScreenPlayer.h"

AUE_ZirconTech_POCGameModeBase::AUE_ZirconTech_POCGameModeBase()
{
	//DefaultPawnClass takes a StaticClass
	static ConstructorHelpers::FClassFinder<APawn>PlayerCharacter_BP(TEXT("/Game/Blueprints/PlayerCharacter_BP"));
	// Chaeck if ClassFinder has find class
	if (PlayerCharacter_BP.Class) {
		DefaultPawnClass = PlayerCharacter_BP.Class;
	}
}

void AUE_ZirconTech_POCGameModeBase::BeginPlay()
{
	if (IsValid(WidgetClass)) {
		ScreenPlayer = Cast<UScreenPlayer>(CreateWidget(GetWorld(), WidgetClass));
		if (ScreenPlayer != nullptr) {
			ScreenPlayer->AddToViewport();
		}
	}
}
