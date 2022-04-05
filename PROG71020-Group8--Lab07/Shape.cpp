#include "Shape.h"

using namespace std;

int Shape::area()
{

	return 0;
}

int Shape::getTotalArea(Shape* shape[])
{
	int total = 0;
	for (int i = 0; i <= MAX; i++)
	{
		total += shape[i]->area();
	}

	return total;
}
