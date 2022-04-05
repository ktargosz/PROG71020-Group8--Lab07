/* Conestoga College
* Vehicle.h FILE
* Authors    :   Kenneth, Ali, Nico
*/

#pragma once

#include<iostream>
#include<Windows.h>
#include "Drawable.h"

/**
 * Vehicle Class
 * Contains a prototype constructor for a vehicle and prototype for the space function
 */
class Vehicle : public Drawable {
public:
    Vehicle() {}  //!< Constructor for a Vehicle object
    void space(int); //!< Prototype for the space functionality 
}; 