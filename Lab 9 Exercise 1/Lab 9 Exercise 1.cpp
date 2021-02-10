/*===============================================================================================================
Name: Lab 9 Exercise 1.cpp
Author: Rhonel Tamargo
Copyright: Copyright 2020 @ Rhonel Tamargo
Description: Exercise 1
=================================================================================================================*/
#include <iostream>
#include "Administrator.h"
using namespace std;
int main()
{
	Administrator testdummy("Dwight K. Schrute", "123-45-6789", 14776.00, "Assistant to the Regional Manager", "Sales", "Michael Scott");
	testdummy.print();
	testdummy.print_check();
}

/* Console Output
Title: Assistant to the Regional Manager
Responsibility : Sales
Immediate Supervisor : Michael Scott

__________________________________________________
Pay to the order of Dwight K.Schrute
The sum of 14776 Dollars
_________________________________________________
Check Stub NOT NEGOTIABLE
Employee Number : 123 - 45 - 6789
Administrator.Regular Pay : 14776
_________________________________________________
*/