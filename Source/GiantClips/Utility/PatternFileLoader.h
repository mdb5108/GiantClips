// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"

#include <string>
#include <iostream>
#include <utility>

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
    static const int PATTERN_WIDTH = 8;
    static const int PATTERN_HEIGHT = 8;

    typedef std::pair<size_t, size_t> WidthHeight;

    static const WidthHeight FULL_HEAD_DIM;
    static const bool* FULL_HEAD;
    static const WidthHeight MOHAWK_DIM;
    static const bool* MOHAWK;

    public:

    UFUNCTION(BlueprintCallable, Category = Utility)
    static TArray<bool> PatternFromFile(const PATTERN_ENUM i_patternEnum, int32& o_size, int32& o_hairWidth)
    {
        TArray<bool> retArray;

        o_size = PATTERN_WIDTH*PATTERN_HEIGHT;
        o_hairWidth = PATTERN_WIDTH;

        const bool* selected;
        WidthHeight dimensions;

        switch(i_patternEnum)
        {
            default:
            case PATTERN_ENUM::FULL_HEAD:
                selected = FULL_HEAD;
                dimensions = FULL_HEAD_DIM;
                break;
            case PATTERN_ENUM::MOHAWK:
                selected = MOHAWK;
                dimensions = MOHAWK_DIM;
                break;
        }

        const float widthConversion = PATTERN_WIDTH/dimensions.first;
        const float heightConversion = PATTERN_WIDTH/dimensions.second;
        const int conversion = widthConversion*heightConversion;
        for(int j = 0; j < dimensions.second; j++)
        {
            for(int jj = 0; jj < heightConversion; jj++)
            {
                for(int i = 0; i < dimensions.first; i++)
                {
                    for(int ii = 0; ii < widthConversion; ii++)
                    {
                        retArray.Add(selected[i]);
                    }
                }
            }
        }

        return retArray;
    }
};
