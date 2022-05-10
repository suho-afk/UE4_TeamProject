// Fill out your copyright notice in the Description page of Project Settings.


#include "UHealthBar.h"

UUHealthBar::UUHealthBar(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{
	FMaxhealth = 100.0f;
	FcurrentHealth = 100.0f;
	FMaxMana = 100.0f;
	FcurrentMana = 100.0f;
}
float UUHealthBar::GetPercent_MP()
{
	return FcurrentMana/FMaxMana;
}
float UUHealthBar::GetPercent_HP()
{
	return FcurrentHealth /FMaxhealth;
}