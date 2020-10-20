/*
Write a program that reads in a length in feet and inches and outputs the
equivalent length in meters and centimeters. Use at least three functions:
one for input, one or more for calculating, and one for output. Include a
loop that lets the user repeat this computation for new input values until
the user says he or she wants to end the program. There are 0.3048 meters
in a foot, 100 centimeters in a meter, and 12 inches in a foot.
*/

#include <iostream>
#include <string>
#include <cmath>
using namespace std;
void input(double& a, double& b) 
{
    cin >> a >> b;
    cout << "This your input for feet: " << a << endl;
    cout << "This is your input for inches: " << b << endl;
}
string calculate(double& a, double& b)
{
    double z;
    a *= .3048;
    b /= 12;
    b *= .3048;
    z = a + b;
    int y = z;
    double x = z - y;
    x *= 100;
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    string bruh = to_string(y) + " meters " + to_string(x) + " centimeters";
    return bruh;
}
void output(string x) 
{
    cout << x << endl;
}
int main()
{
    int choice = 1;
    cout << "Enter a choice number." << endl;
    cout << "1) Enter a new parameters\n" << "2) Stop the program\n";
    cin >> choice;
    while (choice == 1)
    {
        double a, b;
        input(a, b);
        string x = calculate(a, b);
        output(x);
        cout << "Enter a choice number." << endl;
        cout << "1) Enter a new parameters\n" << "2) Stop the program\n";
        cin >> choice;
    }
    if (choice == 2)
    {
        cout << "The program has ended.";
        return 0;
    }
}