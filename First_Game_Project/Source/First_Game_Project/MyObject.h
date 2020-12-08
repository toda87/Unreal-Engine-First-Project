// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MyObject.generated.h" //data harvesting / garbage collection

/**
 * 
 */
UCLASS(Blueprintable)
class FIRST_GAME_PROJECT_API UMyObject : public UObject
{
	GENERATED_BODY()

public:

	UMyObject();

	UPROPERTY(BlueprintReadOnly, Category = "MyVariables")
	float MyFloat;

	UFUNCTION(BlueprintCallable, Category = "MyVariables")
	void MyFunction();
	
};
