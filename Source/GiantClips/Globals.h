// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include <iostream>
#include "Globals.generated.h"

/**
*
*/
UCLASS()
class GIANTCLIPS_API UGlobals : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	static AActor* activeHeadOfHair;
	static int32 numberOfDiffHairs;

	UFUNCTION(BLueprintCallable, Category = Utility)
		static AActor* GetActiveHeadOfHair() {
		std::cout << "*************get: " << activeHeadOfHair << std::endl;
		return activeHeadOfHair;
	}

	UFUNCTION(BLueprintCallable, Category = Utility)
		static void SetActiveHeadOfHair(AActor* i_activeHeadOfHair) {
		activeHeadOfHair = i_activeHeadOfHair;
		std::cout << "*************set: " << activeHeadOfHair << std::endl;
	}
	UFUNCTION(BLueprintCallable, Category = Utility)
		static int32 GetNumberOfDiffHairs() {
		return numberOfDiffHairs;
	}
	UFUNCTION(BLueprintCallable, Category = Utility)
		static void SetNumberOfDiffHairs(int32 i_numberOfDiffHairs) {
		numberOfDiffHairs = i_numberOfDiffHairs;
	}
};
