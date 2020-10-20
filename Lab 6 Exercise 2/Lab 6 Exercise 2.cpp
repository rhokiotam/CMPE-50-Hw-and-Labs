/*===============================================================================================================
Name: Lab_6.cpp
Author: Rhonel Tamargo
Copyright: Copyright 2020 @ Rhonel Tamargo
Description: Excercise 2
=================================================================================================================*/
#include <iostream>
using namespace std;
class Rational
{
private:
    int numerator;
    int denominator;
public:
    Rational(int a, int b)
    {
        numerator = a;
        denominator = b;
    }
    void input(istream &input_stream)
    {
        input_stream >> numerator;
        input_stream >> denominator;
    }
    void output(ostream &output_stream)
    {
        output_stream << numerator;
        output_stream << "/";
        output_stream << denominator;
    }
    friend Rational add(Rational& num1, Rational& num2)
    {
        int num3, num4, num5, num6;
        num3 = num1.denominator * num2.denominator;
        num4 = num1.numerator * num2.denominator;
        num5 = num1.denominator * num2.numerator;
        num6 = num4 + num5;
        if (num3 < 0)
        {
            num3 *= -1;
            num6 *= -1;
        }
        Rational add(num6, num3);
        simplify(add);
        return add;
    }
    friend Rational subtract(Rational& num1, Rational& num2)
    {
        int num3, num4, num5, num6;
        num3 = num1.denominator * num2.denominator;
        num4 = num1.numerator * num2.denominator;
        num5 = num1.denominator * num2.numerator;
        num6 = num4 - num5;
        if (num3 < 0)
        {
            num3 *= -1;
            num6 *= -1;
        }
        Rational subtract(num6, num3);
        simplify(subtract);
        return subtract;
    }
    friend Rational multiply(Rational& num1, Rational& num2)
    {
        int num3, num4;
        num3 = num1.numerator* num2.numerator;
        num4 = num1.denominator * num2.denominator;
        if (num4 < 0)
        {
            num3 *= -1;
            num4 *= -1;
        }
        Rational multiply(num3, num4);
        simplify(multiply);
        return multiply;
    }
    friend Rational divide(Rational& num1, Rational& num2)
    {
        int num3, num4;
        num3 = num1.numerator * num2.denominator;
        num4 = num1.denominator * num2.numerator;
        if (num3 < 0 && num4 < 0)
        {
            num3 *= -1;
            num4 *= -1;
        }
        if (num4 < 0)
        {
            num3 *= -1;
            num4 *= -1;
        }
        Rational divide(num3, num4);
        simplify(divide);
        return divide;
    }
    friend Rational simplify(Rational& num1)
    {
        int n1 = num1.numerator;
        int n2 = num1.denominator;
        int temp;
        while (n2 != 0)
        {
            temp = n1;
            n1 = n2;
            n2 = temp % n2;
        }
        int gcd = abs(n1);
        num1.numerator /= gcd;
        num1.denominator /= gcd;
        return (num1);
    }
    friend bool equal(Rational& num1, Rational& num2)
    {
        if (double(num1.numerator)/double(num1.denominator) == double(num2.numerator)/double(num2.denominator))
        {
            cout << "The numbers are equal";
            return true;
        }
        else
        {
            cout << "The numbers are not equal";
            return false;
        }
    }
    friend bool less_than(Rational& num1, Rational& num2)
    {
        if (double(num1.numerator) / double(num1.denominator) < double(num2.numerator) / double(num2.denominator))
        {
            cout << "The first rational number is less than the second rational number";
            return true;
        }
        else
        {
            cout << "The first rational number is greater than the second rational number";
            return false;
        }
    }
};

int main()
{
    Rational number1(0, 1), number2(0, 1);
    cout << "Enter a numerator and a denominator seperately" << "\n";
    number1.input(cin);
    cout << "Enter a numerator and a denominator seperately" << "\n";
    number2.input(cin);
    cout << "These are your numbers: ";
    number1.output(cout);
    cout << " , ";
    number2.output(cout);
    cout << "\n";
    cout << "Here are your rational numbers added: ";
    add(number1, number2).output(cout);
    cout << "\n" << "Here are your rational numbers subtracted: ";
    subtract(number1, number2).output(cout);
    cout << "\n" << "Here are your rational numbers multiplied: ";
    multiply(number1, number2).output(cout);
    cout << "\n" << "Here are your rational numbers divided: ";
    divide(number1, number2).output(cout);
    cout << "\n";
    equal(number1, number2);
    cout << "\n";
    less_than(number1, number2);
}

/* Console Output
Test Case 1
Enter a numerator and a denominator
4
6
Enter a numerator and a denominator
3
8
These are your numbers: 4/6 , 3/8
Here are your rational numbers added: 25/24
Here are your rational numbers subtracted: 7/24
Here are your rational numbers multiplied: 1/4
Here are your rational numbers divided: 16/9
The numbers are not equal
The first rational number is greater than the second rational number

Test Case 2
Enter a numerator and a denominator seperately
-1
-2
Enter a numerator and a denominator seperately
-1
-3
These are your numbers: -1/-2 , -1/-3
Here are your rational numbers added: 5/6
Here are your rational numbers subtracted: 1/6
Here are your rational numbers multiplied: 1/6
Here are your rational numbers divided: 3/2
The numbers are not equal
The first rational number is greater than the second rational number

Test Case 3
Enter a numerator and a denominator
-1
6
Enter a numerator and a denominator
1
5
These are your numbers: -1/6 , 1/5
Here are your rational numbers added: 1/30
Here are your rational numbers subtracted: -11/30
Here are your rational numbers multiplied: -1/30
Here are your rational numbers divided: -5/6
The numbers are not equal
The first rational number is less than the second rational number 
Test Case 4
Enter a numerator and a denominator seperately
-4
7
Enter a numerator and a denominator seperately
-3
4
These are your numbers: -4/7 , -3/4
Here are your rational numbers added: -37/28
Here are your rational numbers subtracted: 5/28
Here are your rational numbers multiplied: 3/7
Here are your rational numbers divided: 16/21
The numbers are not equa
The first rational number is greater than the second rational number

Test Case 5
Enter a numerator and a denominator seperately
3
-7
Enter a numerator and a denominator seperately
4
-5
These are your numbers: 3/-7 , 4/-5
Here are your rational numbers added: -43/35
Here are your rational numbers subtracted: 13/35
Here are your rational numbers multiplied: 12/35
Here are your rational numbers divided: 15/28
The numbers are not equal
*/