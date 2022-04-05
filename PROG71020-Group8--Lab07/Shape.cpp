/* Conestoga College
* Vehicle.h FILE
* Authors    :   Kenneth, Ali, Nico
*/

#include "Shape.h"

using namespace std;

/**
 * Shape area function
 * Returns the area of a shape
 */
int Shape::area()
{
	return width * height; //!< Returns the shape object's width multiplied by its height (area)
}

/**
 * Shape getTotalArea function
 * Returns the total area of an array of shapes
 */
int Shape::getTotalArea(Shape* shape[])
{
	int total = 0;
	for (int i = 0; i <= MAX; i++)
	{
		total += shape[i]->area();
	}

	return total;
}
