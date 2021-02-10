#ifndef FIGURE_H
#define FIGURE_H
#include <iostream>
using namespace std;
// non virtual class definition
/*
class Figure
{
public:
	void erase();
	void draw();
	void center();
};

*/

//virtual class definition 

class Figure
{
public:
	virtual void erase();
	virtual void draw();
	virtual void center();
};

#endif
// to test either, comment or uncomment either class definition