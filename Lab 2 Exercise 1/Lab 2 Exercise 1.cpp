/*===============================================================================================================
Name: Lab_2.cpp
Author: Rhonel Tamargo
Copyright: Copyright 2020 @ Rhonel Tamargo
Description: excercise 1
=================================================================================================================*/
#include <iostream>
using namespace std;

void Add(double x, double y);
void Add(int x, int y);
void Add(char letter_one, char letter_two);

int main()
{
	double d1, d2;
	int i1, i2;
	char one[1];
	char two[1];
	int option = 0;
	cout << "Enter option number:\n" << "1. Add doubles\n" << "2. Add integers\n" << "3. Add characters\n";
	cin >> option;
	if (1 == option)
	{
		cout << "enter two doubles\n";
		for (int i = 1; i < 2; i++)
		{
			cin >> d1;
			cin >> d2;
		}
		Add(d1, d2);
	}
	else if (2 == option)
	{
		cout << "enter two integers\n";
		for (int i = 1; i < 2; i++)
		{
			cin >> i1;
			cin >> i2;
		}
		Add(i1, i2);
	}
	else if (3 == option)
	{
		cout << "enter two characters\n";
		cin >> one[1];
		cin >> two[1];
		Add(one[1], two[1]);
	}

	return 0;

}

void Add(double x, double y)
{
	cout << x + y;
}

void Add(int x, int y)
{
	cout << x + y;
}

void Add(char letter_one, char letter_two)
{
	cout << letter_one << letter_two;
}

/* Console Output
Enter option number:
1. Add doubles
2. Add integers
3. Add characters
1
enter two doubles
3.0
4.7
7.7

Enter option number:
1. Add doubles
2. Add integers
3. Add characters
2
enter two integers
3
4
7

Enter option number:
1. Add doubles
2. Add integers
3. Add characters
3
enter two characters
a
b
ab
*/