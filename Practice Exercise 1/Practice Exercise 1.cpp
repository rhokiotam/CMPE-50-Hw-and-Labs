/*
Write a void function definition for a function called zero_both that has
two reference parameters, both of which are variables of type int, and sets
the values of both variables to 0.
*/
#include <iostream>
using namespace std;

int zero_both(int& a, int& b) 
{
    a = 0;
    b = 0;
    cout << a << " " << b << endl;
    return a;
}
int main()
{
    int a, b;
    cin >> a >> b;
    zero_both(a, b);
}

