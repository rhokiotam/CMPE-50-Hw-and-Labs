//HERE COMES THE MONEYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY
//HERE COMES THE MONEY
//MONEY MONEY MONEY MONEY MONEY MONEY MONEY MONEY MONEY
#include <iostream>
using namespace std;
class Money 
{
private:
	int dollars;
	int cents;
	void conversion()
	{
		while (cents >= 100)
		{
			dollars++;
			cents -= 100; 
		}
		while (cents < 0)
		{
			dollars--;
			cents += 100;
		}
	}
public:
	Money()
	{
		dollars = 0;
		cents = 0;
	}
	Money(int this_dollar, int this_cent)
	{
		dollars = this_dollar;
		cents = this_cent;
		conversion();
	}
	Money(double split)
	{
		dollars = (int)split;
		cents = int ((split - dollars) * 100);
		conversion();
	}
	int getDollars()
	{
		return dollars;
	}
	int getCents()
	{
		return cents;
	}
	void setDollars(int setdolla)
	{
		dollars = setdolla;
	}
	void setCents(int setcent)
	{
		cents = setcent;
		conversion();
	}
	Money operator+(Money& other)
	{
		Money total;
		total.dollars = this->dollars + other.dollars;
		total.cents = this->cents + other.cents;
		total.conversion();
		return total;
	}
	Money operator-(Money& other)
	{
		Money total;
		total.dollars = this->dollars - other.dollars;
		total.cents = this->cents - other.cents;
		total.conversion();
		return total;
	}
	void display(ostream& outs)
	{
		outs << "$" << dollars << "." << cents << endl;
	}
};
int main()
{
	Money test1, test2(1,23), test3(4.56);
	int input;
	cout << "Enter a dollar amount:\n";
	cin >> input;
	test1.setDollars(input);
	cout << "Enter a cent amount:\n";
	cin >> input;
	test1.setCents(input);
	cout << "Here is the amount of test1: ";
	test1.display(cout);
	cout << "Here is the amount of test2: ";
	test2.display(cout);
	cout << "here is the amount of test3: ";
	test3.display(cout);
	Money sum = test1 + test2;
	cout << "Here is the sum of test1 and test2: ";
	sum.display(cout);
	Money difference = test1 - test3;
	cout << "Here is the difference of test1 and test3 ";
	difference.display(cout);
}