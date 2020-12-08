// Fill out your copyright notice in the Description page of Project Settings.


#include "MyObject.h"

UMyObject::UMyObject()
{
	MyFloat = 0;
}

void UMyObject::MyFunction()
{
	//Temporary yellow text warning
	UE_LOG(LogTemp, Warning, TEXT("This is the warning text"));
}