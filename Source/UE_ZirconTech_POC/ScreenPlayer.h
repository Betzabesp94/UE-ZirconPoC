// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ScreenPlayer.generated.h"

/**
 * 
 */
UCLASS()
class UE_ZIRCONTECH_POC_API UScreenPlayer : public UUserWidget
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
		class UTextBlock* AddressTextBlock;
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
		class UEditableTextBox* AddressTextBox;
	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
		class UButton* SendButton;
	virtual void NativeConstruct() override; 

	UFUNCTION()
		void SendButtonOnClicked(); 
};
