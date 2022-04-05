/* Conestoga College
* BMW.h FILE
* Authors    :   Kenneth, Ali, Nico
*/

#pragma once
#include "Vehicle.h"

/**
 * BMW Class 
 * Contains prototypes for the draw and drive functionality
 */
class BMW : public Vehicle {
public:
    BMW() :Vehicle() { } //!< Constructor for a BMW object

    void draw(BMW); //!< Prototype for the draw functionality inherited from the vehicle class
    void drive(BMW); //!< Prototype for the drive functionality inherited from the vehicle class
};