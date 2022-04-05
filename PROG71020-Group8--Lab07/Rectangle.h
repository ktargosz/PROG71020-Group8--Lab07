/* Conestoga College
* Rectangle.h FILE
* Authors    :   Kenneth, Ali, Nico
*/

#pragma once
#include "Shape.h"

/**
 * BMW Class
 * Contains prototypes for the draw and drive functionality
 * Class named Rect as Rectangle is already define in std namespace
 */
class Rect : public Shape {
public:
    Rect(int a = 0, int b = 0) :Shape(a, b) { }  //!< Constructor for a Rect object

    int area(); //!< Prototype for the area functionality inherited from the shape class

    void draw(Rect); //!< Prototype for the draw functionality inherited from the shape class
};