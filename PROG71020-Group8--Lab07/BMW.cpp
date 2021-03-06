/* Conestoga College
* BMW.cpp FILE
* Authors    :   Kenneth, Ali, Nico
*/

#include "vehicle.h"
#include "BMW.h"
#include<iostream>
#include<Windows.h>
using namespace std;

/**
 * BMW draw function
 * Prints a BMW object illustration to cout
 */
void BMW::draw(BMW)
{
	cout << "__\n" << ".-'--`-._\n" << "'-O---O--' \n"; //!< prints a "BMW"
}

/**
 * BMW Drive Function
 * Prints a "BMW" driving animation to cout
 */
void BMW::drive(BMW)
{
	for (int i = 0; i < 35; i++)
	{
		space(i);
		cout << "__\n";
		space(i);
		cout << ".-'--`-._\n";		//!< print a new car with a space at the start
		space(i);
		cout << "'-O---O--' \n";

		Sleep(100);//deley between printing of car and clearing of screen
		cout << "\033[2J\033[1;1H";// clear the screen between each "frame"
	}
}
