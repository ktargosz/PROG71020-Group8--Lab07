#pragma once

#include "Shape.h"

class Circle : public Shape {
public:
    Circle(int b = 0) :Shape(b) { }

    int area();

    void draw();
};
