#pragma once

#include "Vehicle.h"

class Mazda : public Vehicle {
public:
    Mazda() :Vehicle() { }

    void draw(Mazda);
    void drive(Mazda);
};