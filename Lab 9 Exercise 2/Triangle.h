#ifndef TRIANGLE_H
#define TRIANGLE_H
#include "Figure.h"
#include <iostream>
class Triangle : public Figure
{
public:
	void erase();
	void draw();
	void center();
};

#endif