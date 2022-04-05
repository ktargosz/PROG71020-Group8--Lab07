#pragma once

#include "Shape.h"

// Class named Rect as Rectangle is already define in std namespace
class Rect : public Shape {
public:
    Rect(int a = 0, int b = 0) :Shape(a, b) { }

    int area();

    void draw(Rect);
};