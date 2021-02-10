#include "Circle.h"
#include <iostream>
using namespace std;
void Circle::erase()
{
	cout << "Calling the function 'erase'" << endl;
	cout << "Erasing DERIVED class Circle" << endl;
}
void Circle::draw()
{
	cout << "Calling the function 'draw'" << endl;
	cout << "Drawing DERIVED class Circle" << endl;
}
void Circle::center()
{
	cout << "Calling the function 'center'" << endl;
	erase();
	draw();
}