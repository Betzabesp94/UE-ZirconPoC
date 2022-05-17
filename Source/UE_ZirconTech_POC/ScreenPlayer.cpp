// Fill out your copyright notice in the Description page of Project Settings.


#include "ScreenPlayer.h"
#include "Components/Button.h"
#include "Components/EditableTextBox.h"
#include "Components/TextBlock.h"
void UScreenPlayer::NativeConstruct()
{
	if (SendButton) {
		SendButton->OnClicked.AddDynamic(this, &UScreenPlayer::SendButtonOnClicked);
	}
}

void UScreenPlayer::SendButtonOnClicked()
{
	AddressTextBlock->SetText(AddressTextBox->GetText()); 
}
