#include "Triangle.h"
#include <iostream>
using namespace std;
void Triangle::erase()
{
	cout << "Calling the function 'erase'" << endl;
	cout << "Erasing DERIVED class Triangle" << endl;
}
void Triangle::draw()
{
	cout << "Calling the function 'draw'" << endl;
	cout << "Drawing DERIVED class Triangle" << endl;
}
void Triangle::center()
{
	cout << "Calling the function 'center'" << endl;
	erase();
	draw();
}

