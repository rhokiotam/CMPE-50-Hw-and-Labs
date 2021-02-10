#ifndef CIRCLE_H
#define CIRCLE_H
#include "Figure.h"
#include <iostream>
class Circle : public Figure
{
public:
	void erase();
	void draw();
	void center();
};

#endif