#pragma once

#include <climits>
static_assert(sizeof(float)*CHAR_BIT==32, "Warning: A float is not 32 bit on this architecture! Continuing may lead to unforeseen behavior!");
static_assert(sizeof(double)*CHAR_BIT==64, "Warning: A double is not 64 bit on this architecture! Continuing may lead to unforeseen behavior!");
static_assert(sizeof(long double)*CHAR_BIT==128, "Warning: A long double is not 128 bit on this architecture! Continuing may lead to unforeseen behavior!");

namespace jp {
    using f32 = float;
    using f64 = double;
    using f128 = long double;
}