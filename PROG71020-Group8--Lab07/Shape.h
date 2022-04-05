/* Conestoga College
* BMW.h FILE
* Authors    :   Kenneth, Ali, Nico
*/

#pragma once

#include<iostream>
#include<Windows.h>
#include "Drawable.h"

#define MAX 3
#define PI 3.14

/**
 * Shape Class
 * Contains two attributes for the width and height of a shape
 * Contains a constructor for a shape and prototypes for area() and getTotalArea() functions
 */
class Shape : public Drawable { 
protected:
    int width; //!< Define the width of an object
    int height; //!< Define the height of an object

public:

    Shape(int a = 0, int b = 0) { 
        width = a;
        height = b;
    } //!< Constructor for a Shape object

    virtual int area() = 0; //!< Prototype for the area functionality inherited from the drawable class
    int getTotalArea(Shape* shape[]); //!< Prototype for the getTotalArea functionality inherited from the drawable class
};