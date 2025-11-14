/*
 * pair.h
 * Simple generic pair struct in C
 *
 * Description:
 *   This header defines a simple "Pair" struct where both members
 *   (`first` and `second`) are `void*` pointers. It allows you to
 *   store any type of data by storing the address of the variable.
 *
 * Source code:
 *   https://github.com/bokshi-gh/pair
 *
 * Copyright (c) 2025 Rajesh Thapa
 * All rights reserved.
 */

#pragma once

typedef struct {
    void *first;
    void *second;
} Pair;
