#ifndef ANIMAL_H
#define ANIMAL_H
#include <string>
using namespace std; 
class Animal
{
private:
	string name;
	string species;
public:
	Animal();
	Animal(string thisspecies, string thisname);
	string get_name();
	string get_species();
	void set_name(string thisname);
	void set_species(string thisspecies);
	void speak();
};

#endif