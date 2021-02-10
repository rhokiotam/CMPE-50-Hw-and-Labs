/*===============================================================================================================
Name: Lab 9 Exercise 2.cpp
Author: Rhonel Tamargo
Copyright: Copyright 2020 @ Rhonel Tamargo
Description: Exercise 2
=================================================================================================================*/
#include <iostream>
#include "Figure.h"
#include "Triangle.h"
#include "Circle.h"

using namespace std;

void myDraw(Figure* fig)
{
	fig->draw();
	cout << "\nmyDraw: Derived class object calling center().\n";
	fig->center();
}

int main()
{
	Figure* fig;
	Triangle* tri = new Triangle;

	fig = tri;
	fig->draw();
	cout << "\nDerived class Trangle object calling center(). \n";
	fig->center();

	myDraw(tri);

	Circle* cir = new Circle;
	fig = cir;
	cir->draw();
	cout << "\nDerived class Circle object calling center().\n";
	cir->center();

	myDraw(cir);

	return 0;
}


/*Console Output 
a)	Non-virtual functions
Calling the function 'draw'
Drawing BASE class Figure

Derived class Trangle object calling center().
Calling the function 'center'
Calling the function 'erase'
Erasing BASE class Figure
Calling the function 'draw'
Drawing BASE class Figure
Calling the function 'draw'
Drawing BASE class Figure

myDraw: Derived class object calling center().
Calling the function 'center'
Calling the function 'erase'
Erasing BASE class Figure
Calling the function 'draw'
Drawing BASE class Figure
Calling the function 'draw'
Drawing DERIVED class Circle

Derived class Circle object calling center().
Calling the function 'center'
Calling the function 'erase'
Erasing DERIVED class Circle
Calling the function 'draw'
Drawing DERIVED class Circle
Calling the function 'draw'
Drawing BASE class Figure

myDraw: Derived class object calling center().
Calling the function 'center'
Calling the function 'erase'
Erasing BASE class Figure
Calling the function 'draw'
Drawing BASE class Figure

b)	Virtual Functions 
Calling the function 'draw'
Drawing DERIVED class Triangle

Derived class Trangle object calling center().
Calling the function 'center'
Calling the function 'erase'
Erasing DERIVED class Triangle
Calling the function 'draw'
Drawing DERIVED class Triangle
Calling the function 'draw'
Drawing DERIVED class Triangle

myDraw: Derived class object calling center().
Calling the function 'center'
Calling the function 'erase'
Erasing DERIVED class Triangle
Calling the function 'draw'
Drawing DERIVED class Triangle
Calling the function 'draw'
Drawing DERIVED class Circle

Derived class Circle object calling center().
Calling the function 'center'
Calling the function 'erase'
Erasing DERIVED class Circle
Calling the function 'draw'
Drawing DERIVED class Circle
Calling the function 'draw'
Drawing DERIVED class Circle

myDraw: Derived class object calling center().
Calling the function 'center'
Calling the function 'erase'
Erasing DERIVED class Circle
Calling the function 'draw'
Drawing DERIVED class Circle

c) The difference between the two is that when the virtual function is defined in the base class,
it points to the functions in the derived classes, whether it is 'Triangle' or 'Circle'. After it points to the derived
classes at runtime, it executes the dervied class's functions rather than the base class seen in B. If the functions in Figure.h are
virutal funcitons, they will execute the functions of the base class, seen in A/
*/