// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "RunAway.generated.h"

/**
 * 
 */
UCLASS()
class ASSIGNMENT1_API URunAway : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()


	UFUNCTION(BlueprintCallable, Category = "Run Away")
	static void RunAwayStelio(AActor* Player, AActor* Enemy, float Distance);

	UFUNCTION(BlueprintCallable, Category = "Run Away")
	static float BaskingStelio(float Energy);
};
