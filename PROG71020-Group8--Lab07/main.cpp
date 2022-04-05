#include "main.h"

using namespace std;

int main()
{
	Mazda m; //Intialize a Mazda and a BMW
	BMW b;
	m.drive(m); // "Drive" a mazda across the screen then a BMW
	b.drive(b);
	cout << "Mazda Drawing: " << endl;
	m.draw(m); //Draw a Mazda
	cout << "BMW Drawing: " << endl;
	b.draw(b); //Draw a BMW
	Rect r(10, 10);
	cout << "Rectangle Drawing: " << endl;
	r.draw(r); //Draw a Rectangle
	Circle c(5);
	cout << "Circle Drawing: " << endl;
	c.draw(); //Draw a Circle

	Rect r1(2, 2), r2(5, 5);
	Circle c1(3), c2(5);

	Shape* shape[] = { &r1,&r2,&c1,&c2 };

	int sum;
	sum = (*shape)->getTotalArea(shape);
	cout << sum << endl;

	return 0;
}