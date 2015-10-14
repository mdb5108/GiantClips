// Fill out your copyright notice in the Description page of Project Settings.

#include "GiantClips.h"
#include "PatternFileLoader.h"

static const bool FULL_HEAD_DATA[] = {
    1, 1, 1, 1,
    1, 1, 1, 1,
    1, 1, 1, 1,
    1, 1, 1, 1,
};
const UPatternFileLoader::WidthHeight UPatternFileLoader::FULL_HEAD_DIM = std::make_pair(4, 4);
const bool* UPatternFileLoader::FULL_HEAD = &FULL_HEAD_DATA[0];

static const bool MOHAWK_DATA[] = {
    0, 1, 1, 0,
    0, 1, 1, 0,
    0, 1, 1, 0,
    0, 1, 1, 0,
};
const UPatternFileLoader::WidthHeight UPatternFileLoader::MOHAWK_DIM = std::make_pair(4, 4);
const bool* UPatternFileLoader::MOHAWK = &MOHAWK_DATA[0];

static const bool FOUR_SPIKE_DATA[] = {
    1, 1, 0, 1, 1,
    1, 1, 0, 1, 1,
    0, 0, 0, 0, 0,
    1, 1, 0, 1, 1,
    1, 1, 0, 1, 1,
};
const UPatternFileLoader::WidthHeight UPatternFileLoader::FOUR_SPIKE_DIM = std::make_pair(5, 5);
const bool* UPatternFileLoader::FOUR_SPIKE = &FOUR_SPIKE_DATA[0];
