/* Conestoga College
* Circle.cpp FILE
* Authors    :   Kenneth, Ali, Nico
*/

#include "Circle.h"

using namespace std;

/**
 * Circle area function
 * Returns the area of a circle object
 */
int Circle::area()
{
	return (PI * width * width); //!< Returns the area of a circle object
} ///< Multiplies PI with twice the radius to return area of a circle

/**
 * Circle draw function
 * Prints a circle object to cout
 */
void Circle::draw()
{
	cout << "  *****\n" << " *     *\n" << "*       *\n" << " *     *\n" << "  *****" << endl; //!< prints a circle
}