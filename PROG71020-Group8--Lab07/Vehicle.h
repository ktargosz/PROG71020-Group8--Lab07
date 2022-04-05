#pragma once

#include<iostream>
#include<Windows.h>
#include "Drawable.h"

class Vehicle : public Drawable {
public:
    Vehicle() {}
    void space(int);
};