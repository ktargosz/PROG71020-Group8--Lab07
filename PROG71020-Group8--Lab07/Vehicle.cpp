#include "vehicle.h"
using namespace std;

void Vehicle::space(int x)
{
	int i;
	for (i = 0; i < x; i++)
	{
		cout << "   "; // prints a space to "move" cars along the screen
	}
}