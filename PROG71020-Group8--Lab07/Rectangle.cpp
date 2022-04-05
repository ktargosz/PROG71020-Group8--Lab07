/* Conestoga College
* Rectangle.cpp FILE
* Authors    :   Kenneth, Ali, Nico
*/

#include "Shape.h"
#include "Rectangle.h"
#include <iostream>
#include <Windows.h>

using namespace std; 

/**
 * Rectangle area function
 * Returns the area of a rectangle object
 */
int Rect::area()
{

	return width * height; //!< Returns the rectangle object's width multiplied by its height (area)
}

/**
 * Rectangle Draw function
 * Draws a rectangle object to cout
 */
void Rect::draw(Rect r)
{
	for (int i = 0; i < r.width; i++)
	{
		cout << "*";		// print top row of rectangle
	}
	cout << endl;
	for (int i = 0; i < r.height - 2; i++)
	{
		cout << "*";			// print left side of rectangle
		for (int i = 0; i < r.width - 2; i++)
		{
			cout << " ";	//print spaces in center of rectangle
		}
		cout << "*" << endl; // print right side of rectangle
	}
	for (int i = 0; i < r.width; i++)
	{
		cout << "*"; //print bottom row of rectangle
	}
	cout << endl;
}