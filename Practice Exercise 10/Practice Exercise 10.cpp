#include <iostream>
#include <string>
using namespace std;
void display(string array[][4])
{
	for (int row = 0; row < 3; row++)
	{
		for (int col = 0; col < 4; col++)
		{
			cout << array[row][col] << " ";
		}
		cout << endl;
	}
}
int main()
{
	string twod[3][4];
	for (int row = 0; row < 3; row++)
	{
		for (int col = 0; col < 4; col++)
		{
			twod[row][col] = "Row:" + to_string(row) + " " + "Column:" + to_string(col);
		}
	}
	display(twod);
	cout << "Enter a row number and a column number\n";
	int rownum, colnum;
	cin >> rownum >> colnum;
	cout << "Enter a word\n";
	string newword;
	cin >> newword;
	twod[rownum][colnum] = newword;
	display(twod);
}