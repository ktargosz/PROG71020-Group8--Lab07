#include "Shape.h"
#include "Rectangle.h"
#include <iostream>
#include <Windows.h>

using namespace std; 

int Rect::area()
{

	return width * height;
}

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