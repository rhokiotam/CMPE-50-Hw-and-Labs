/*===============================================================================================================
Name: Lab 8 Exercise 1.cpp
Author: Rhonel Tamargo
Copyright: Copyright 2020 @ Rhonel Tamargo
Description: Exercise 1
=================================================================================================================*/
#include <iostream>
#include "Polynomial.h"
using namespace std;
int main()
{
    int deg1 = 2;
    double coeff1[3] = { 1, 2, 3 };
    Polynomial test1(coeff1, deg1);
    cout << "Here is the polynomial test1: " << test1 << endl;
    int deg2 = 4;
    double coeff2[5] = { 1, 2, 3, 4, 5 };
    Polynomial test2(coeff2, deg2);
    cout << "Here is the polynomial test2: " << test2 << endl;
    cout << "Here is test1 + test2: ";
    cout << test1 + test2 << endl;
    cout << "Here is test1 - test2: ";
    cout << test1 - test2 << endl;;
    cout << "Here is test1 * test2: ";
    cout << test1 * test2 << endl;;
    double a = 10;
    cout << "Constant a = " << a << endl;
    cout << "Here is test1 + a: ";
    cout << test1 + a << endl;
    cout << "Here is a + test1: ";
    cout << a + test1 << endl;
    cout << "Here is test1 - a: ";
    cout << test1 - a << endl;;
    cout << "Here is a - test1: ";
    cout << a - test1 << endl;
    cout << "Here is test1 * a: ";
    cout << test1 * a << endl;
    cout << "Here is a * test1: ";
    cout << a * test1 << endl;
    double eval = 5;
    cout << "Here is test1 when x = 5: ";
    cout << test1.evaluate(eval) << endl;
    cout << test1.get_coeff(deg1);
}

/* CONSOLE OUTPUT
Here is the polynomial test1: 1x^2 + 2x^1 + 3
Here is the polynomial test2: 1x^4 + 2x^3 + 3x^2 + 4x^1 + 5
Here is test1 + test2: 1x^4 + 2x^3 + 4x^2 + 6x^1 + 8
Here is test1 - test2: -1x^4 + -2x^3 + -2x^2 + -2x^1 + -2
Here is test1 * test2: 1x^6 + 4x^5 + 10x^4 + 16x^3 + 22x^2 + 22x^1 + 15
Constant a = 10
Here is test1 + a: 1x^2 + 2x^1 + 13
Here is a + test1: 1x^2 + 2x^1 + 13
Here is test1 - a: 1x^2 + 2x^1 + -7
Here is a - test1: 1x^2 + 2x^1 + -7
Here is test1 * a: 10x^2 + 20x^1 + 30
Here is a * test1: 10x^2 + 20x^1 + 30
Here is test1 when x = 5: 38
3
*/