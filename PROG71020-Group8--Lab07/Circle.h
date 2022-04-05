/* Conestoga College
* Circle.h FILE
* Authors    :   Kenneth, Ali, Nico
*/

#pragma once
#include "Shape.h"

/**
 * Circle Class
 * Contains prototypes for the area and draw functionality
 */
class Circle : public Shape {
public:
    Circle(int b = 0) :Shape(b) { } //!< Constructor for a circle object

    int area(); //!< Prototype for the area functionality inherited from the shape class

    void draw(); //!< Prototype for the draw functionality inherited from the shape class
};
