#include "Fish.h"
#include <iostream>
#include "Animal.h"
using namespace std;
Fish::Fish()
{
	fins = 0;
}
Fish::Fish(string thisspecies, string thisname, int numoffins)
{
	Animal(thisspecies, thisname);
	fins = numoffins;
}
int Fish::get_fins()
{
	return fins;
}
void Fish::set_fins(int numoffins)
{
	fins = numoffins;
}
void Fish::speak()
{
	cout << "glub glub";
}