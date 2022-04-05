/* Conestoga College
* BMW.cpp FILE
* Authors    :   Kenneth, Ali, Nico
*/

#include "Vehicle.h"
#include "Mazda.h"
#include <iostream>
#include <Windows.h>

using namespace std;

/**
 * Mazda draw function
 * Prints a Mazda object illustration to cout
 */
void Mazda::draw(Mazda)
{
	cout << "  ______\n /|_||_\\`.__\n(   _    _ _\\ \n=`-(_)--(_)-'\n" << endl; //!< Prints a "Mazda" illustration
}

/**
 * Mazda Drive function
 * Prints a "Mazda" driving animation to cout
 */
void Mazda::drive(Mazda)
{
	for (int i = 0; i < 35; i++)
	{
		space(i);
		cout << "  ______\n";
		space(i);
		cout << " /|_||_\\`.__\n";
		space(i);							//print a new car with a space at the start
		cout << "(   _    _ _\\ \n";
		space(i);
		cout << "=`-(_)--(_)-'\n";

		Sleep(100); //deley between printing of car and clearing of screen
		cout << "\033[2J\033[1;1H"; // clear the screen between each "frame"

	}
}