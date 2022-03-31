#pragma once

#include "Vehicle.h"

class BMW : public Vehicle {
public:
    BMW() :Vehicle() { }

    void draw(BMW);
    void drive(BMW);
};