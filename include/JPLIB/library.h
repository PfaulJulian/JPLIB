#pragma once

#include "JPLIB/type/ix.h"
#include "JPLIB/type/ux.h"
#include "JPLIB/type/fx.h"

#include <iostream>

namespace jp {
    auto welcome() -> void {
        std::cout << "Welcome to the JPLIB librarey!" << std::endl;
    }
}