// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"

#include <string>
#include <iostream>

#include "PatternFileLoader.generated.h"

UENUM(BlueprintType)
enum class PATTERN_ENUM : uint8
{
    FULL_HEAD = 0 UMETA(DisplayName="Full Head"),
    MOHAWK UMETA(DisplayName="Mohawk"),
};
	

/**
 * 
 */
UCLASS()
class GIANTCLIPS_API UPatternFileLoader : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

    private:
    static const int PATTERN_WIDTH = 4;
    static const int PATTERN_HEIGHT = 4;

    static const bool* FULL_HEAD;
    static const bool* MOHAWK;

    public:

    UFUNCTION(BlueprintCallable, Category = Utility)
    static TArray<bool> PatternFromFile(const PATTERN_ENUM i_patternEnum, int32& o_size, int32& o_hairWidth)
    {
        TArray<bool> retArray;

        o_size = PATTERN_WIDTH*PATTERN_HEIGHT;
        o_hairWidth = PATTERN_WIDTH;

        const bool* selected;

        switch(i_patternEnum)
        {
            default:
            case PATTERN_ENUM::FULL_HEAD:
                selected = FULL_HEAD;
                break;
            case PATTERN_ENUM::MOHAWK:
                selected = MOHAWK;
                break;
        }

        for(int i = 0; i < o_size; i++)
        {
            retArray.Add(selected[i]);
        }

        return retArray;
    }
};
