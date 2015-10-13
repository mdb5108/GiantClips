// Fill out your copyright notice in the Description page of Project Settings.

#include "GiantClips.h"
#include "PatternFileLoader.h"

static const bool FULL_HEAD_DATA[] = {
    1, 1, 1, 1,
    1, 1, 1, 1,
    1, 1, 1, 1,
    1, 1, 1, 1,
};

const bool* UPatternFileLoader::FULL_HEAD = &FULL_HEAD_DATA[0];

static const bool MOHAWK_DATA[] = {
    0, 1, 1, 0,
    0, 1, 1, 0,
    0, 1, 1, 0,
    0, 1, 1, 0,
};

const bool* UPatternFileLoader::MOHAWK = &MOHAWK_DATA[0];
