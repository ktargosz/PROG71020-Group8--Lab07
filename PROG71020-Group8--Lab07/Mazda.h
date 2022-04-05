/* Conestoga College
* Mazda.h FILE
* Authors    :   Kenneth, Ali, Nico
*/

#pragma once

#include "Vehicle.h"

/**
 * Mazda Class
 * Contains prototypes for the draw and drive functionality for Mazda objects
 */
class Mazda : public Vehicle {
public:
    Mazda() :Vehicle() { }

    void draw(Mazda); //!< Prototype for the draw functionality inherited from the vehicle class
    void drive(Mazda); //!< Prototype for the drive functionality inherited from the vehicle class
};