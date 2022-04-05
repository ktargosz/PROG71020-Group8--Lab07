#pragma once

#include<iostream>
#include<Windows.h>
#include "Drawable.h"

#define MAX 3
#define PI 3.14

class Shape : public Drawable { 
protected:
    int width, height;

public:
    Shape(int a = 0, int b = 0) {
        width = a;
        height = b;
    }

    virtual int area() = 0;
    int getTotalArea(Shape* shape[]);
};