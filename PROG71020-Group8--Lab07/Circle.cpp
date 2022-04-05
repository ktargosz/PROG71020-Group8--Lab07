#include "Circle.h"

using namespace std;


int Circle::area()
{

	return (PI * width * width);
}

void Circle::draw()
{
	cout << "  *****\n" << " *     *\n" << "*       *\n" << " *     *\n" << "  *****" << endl; // prints a circle
}