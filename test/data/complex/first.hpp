#pragma once

#include "second.hpp"
#include "third.hpp"

#include <iostream>

inline void firstFunction() {
    std::cout << "First function called\n";
    secondFunction();
    thirdFunction();
}