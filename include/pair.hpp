/*
 * pair.hpp
 * Simple generic pair template in C++
 *
 * Description:
 *   This header defines a lightweight, generic `pair` template
 *   similar to `std::pair`. It can hold two values of arbitrary
 *   types, accessible through `first` and `second` members.
 *
 * Repository:
 *   https://github.com/bokshi-gh/pair
 *
 * Copyright (c) 2025 Rajesh Thapa
 * All rights reserved.
 */


#pragma once

template <typename T1, typename T2>
struct pair {
    T1 first;
    T2 second;
};