// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "UHealthBar.generated.h"

/**
 * 
 */
UCLASS(Abstract)
class UE4_TEAMPROJECT_API UUHealthBar : public UUserWidget
{
	GENERATED_BODY()
public:
	UUHealthBar(const FObjectInitializer& ObjectInitializer);
	UFUNCTION(BlueprintCallable, Category = "State")
		float GetPercent_MP();
	

	UFUNCTION(BlueprintCallable, Category = "State")
		float GetPercent_HP();
private:
	//HP
	float FMaxhealth;
	float FcurrentHealth;
	//MP
	float FMaxMana;
	float FcurrentMana;
};
