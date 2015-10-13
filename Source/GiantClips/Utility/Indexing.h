// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "Indexing.generated.h"

/**
 * 
 */
UCLASS()
class GIANTCLIPS_API UIndexing : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
    public:
    UFUNCTION(BlueprintCallable, Category = Utility)
    static bool GetTwoDimensionalBool(const TArray<bool>& array, const int32 width, const int32 i, const int32 j)
    {
        return array[i + j*width];
    }
	
};
