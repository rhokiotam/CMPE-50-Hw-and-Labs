#include "Animals.h"
Animal::Animal()
{
	name = NULL;
	species = NULL;
}
Animal::Animal(string thisspecies, string thisname)
{
	species = thispecies;
	name = thisname;
}
string Animal::get_name()
{
	return name;
}
string Animal::get_species()
{
	return species;
}
void Animal::set_name(string thisname)
{
	name = thisname;
}
void Animal::set_species(string thisspecies)
{
	species = thisspecies;
}
void Animal::speak()
{
	exit(1);
}