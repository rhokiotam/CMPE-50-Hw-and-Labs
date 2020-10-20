/*===============================================================================================================
Name: Lab 2 Excercise 2.cpp
Author: Rhonel Tamargo
Copyright: Copyright 2020 @ Rhonel Tamargo
Description: excercise 2
=================================================================================================================*/
#include <iostream>
using namespace std;
int main()
{
    char reverse[10] = { 0 };
    int size = 0;
    cout << "Enter up to 10 characters to see them in reverse order. Enter a period to stop the program\n";
    for (int i = 0; i < 10; i++)
    {
        cin >> reverse[i];
        size++;
        if (reverse[i] == '.')
        {
            size--;
            break;
        }
    }
    for (int i = size-1; i >= 0; i--)
    {
        cout << reverse[i];
    }

    return 0;
}
/* Console Output
* Enter up to 10 characters to see them in reverse order. Enter a period to stop the program
a
b
c
d
e
f
g
h
i
j
jihgfedcba

Enter up to 10 characters to see them in reverse order. Enter a period to stop the program
a
b
c
d
.
dcba
*/