#ifndef FISH_H
#define FISH_H
#include "Animal.h"
class Fish : public Animal
{
private:
	int fins;
public:
	Fish();
	Fish(string name, string species, int numoffins);
	int get_fins();
	void set_fins(int numoffins);
	void speak();
};

#endif