#pragma once

#include "Shape.h"

class Rectangle : public Shape {
public:
    Rectangle(int a = 0, int b = 0) :Shape(a, b) { }

    int area();

    void draw(Rectangle);
};