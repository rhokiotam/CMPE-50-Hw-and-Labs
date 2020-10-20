/*===============================================================================================================
Name: Lab_1.cpp
Author: Rhonel Tamargo

Copyright: Copyright 2020 @ Rhonel Tamargo
Description: cout, arithmethic operation, checking prime numbers
=================================================================================================================*/
void exercise2();
void exercise3();
void exercise4();
#include <iostream>
using namespace std;
int main()
{
	exercise2();
	exercise3();
	exercise4();

	return 0;
}


void exercise2()
{
	cout << "A fool thinks himself to be wise, but a wise man knows himself to be a fool. \n";
	return;
}

void exercise3()
{
	int var = 0;
	cin >> var;
	cout << "your number: \n";
	cout << var * var;
	cout << "\n";
	return;
}

void exercise4()
{
	int i, num;
	cin >> num;
	if (2 == num || 3 == num)
	{
		cout << num;
	}
	else {
		for (i = 3; i <= num - 1; i++) {
			bool prime_num = true;
			for (int x = 2; x < i; x++)
			{
				if (i % x == 0) {
					prime_num = false;
				}
			}
			if (prime_num) {
				cout << i;
				cout << " is a prime number \n";
			}
		}
	};
	return;
}
/*
1)want to user to input a number and check every single value in btwn
2)if/else statement checks if number is either 2 or 3. if so then it outputs that num
3)first for loop goes through every num in btwn 3 and the inputted num
4)second for loop divides each number from the outer for loops and divides it
and if it divisible perfectly then it is not prime
5)print out all the numbers that were set as prime by the boolean value
*/

/*A fool thinks himself to be wise, but a wise man knows himself to be a fool.
3
your number :
9
6
3 is a prime number
5 is a prime number

C : \Users\RhobiwanPC\source\repos\Lab_1\Debug\Lab_1.exe(process 11680) exited with code 0.
Press any key to close this window . . . */