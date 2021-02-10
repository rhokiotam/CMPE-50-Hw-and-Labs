#ifndef DOG_H
#define DOG_H
#include "Animal.h"
class Dog : public Animal
{
private:
	bool is_sitting;
public:
	void sit();
	void speak();
};

#endif