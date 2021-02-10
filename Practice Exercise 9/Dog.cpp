#include "Dog.h"
#include <iostream>
using namespace std;
void Dog::sit()
{
	is_sitting = true;
	cout << "woof woof im a good dog\n";
}
void Dog::speak()
{
	cout << "woof";
}