#include "Figure.h"
#include <iostream>
using namespace std;
void Figure::erase()
{
	cout << "Calling the function 'erase'" << endl;
	cout << "Erasing BASE class Figure" << endl;
}
void Figure::draw()
{
	cout << "Calling the function 'draw'" << endl;
	cout << "Drawing BASE class Figure" << endl;
}
void Figure::center()
{
	cout << "Calling the function 'center'" << endl;
	erase();
	draw();
}