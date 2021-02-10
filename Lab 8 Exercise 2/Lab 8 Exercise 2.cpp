/*===============================================================================================================
Name: Lab 8 Exercise 2.cpp
Author: Rhonel Tamargo
Copyright: Copyright 2020 @ Rhonel Tamargo
Description: Exercise 2
=================================================================================================================*/
#include <iostream>
#include "Complex.h"
using namespace std;
int main()
{
	Complex test1, test2, test3(5), test4;
	cout << "Here is the complex number test1: ";
	cout << test1 << endl;
	cout << "Enter two numbers for test2, the first will be real and the second will be imaginary\n";
	cin >> test2;
	cout << "Here is the complex number test2: ";
	cout << test2 << endl;
	cout << "Here is the complex number test3: ";
	cout << test3 << endl;
	cout << "Enter two numbers for test4, the first will be real and the second will be imaginary\n";
	cin >> test4;
	cout << "Here is the complex number test4: ";
	cout << test4 << endl;
	cout << "Here is test2 + test4: ";
	cout << test2 + test4 << endl;
	cout << "Here is test2 - test4: ";
	cout << test2 - test4 << endl;
	cout << "Here is test2 * test4: ";
	cout << test2 * test4 << endl;
	cout << "Here is the comparison between test2 and test4: ";
	test2 == test4;

}

/* Console Output
* Here is the complex number test1: 0 + 0 * i
Enter two numbers for test2, the first will be real and the second will be imaginary
1
2
Here is the complex number test2: 1 + 2 * i
Here is the complex number test3: 5 + 0 * i
Enter two numbers for test4, the first will be real and the second will be imaginary
3
4
Here is the complex number test4: 3 + 4 * i
Here is test2 + test4: 4 + 6 * i
Here is test2 - test4: -2 + -2 * i
Here is test2 * test4: -5 + 10 * i
Here is the comparison between test2 and test4: The complex numbers are not the same
*/