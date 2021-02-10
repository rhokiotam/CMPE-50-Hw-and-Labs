#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main()
{
	ifstream input;
	ofstream output;
	string letters, holder;
	int choice;
	cout << "Do you want to input by keyboard or file?\n";
	cin >> choice;
	if (choice == 1)
	{
		cout << "Enter a sentence\n";
		while (cin >> holder)
		{
			letters += holder;
			if (holder.back() == '.')
			{
				break;
			}
		}
	}
	else
	{
		string filename;
		cout << "What is the name of the file\n";
		cin >> filename;
		input.open(filename);
		if (input.fail())
		{
			cout << "The file failed to open\n";
			exit(1);
		}
		output.open("Practice11.txt");
		if (output.fail())
		{
			cout << "The file failed to open\n";
			exit(1);
		}
		while (input >> holder)
		{
			letters += holder;
			if (holder.back() == '.')
			{
				break;
			}
		}
	}
	string uniqueletters;
	int* occurences;
	occurences = new int[letters.length()];
	letters = letters.substr(0, letters.length() - 1);
	uniqueletters = letters[0];
	occurences[0] = 1;
	bool uniqueletter = true;
	for (int i = 1; i < letters.length(); i++)
	{
		for (int j = 0; j < uniqueletters.length(); j++)
		{
			uniqueletter = true;
			if (uniqueletters[j] == letters[i])
			{
				uniqueletter = false;
				occurences[j] += 1;
				break;
			}
		}
		if (uniqueletter == true)
		{
			uniqueletters += letters[i];
			occurences[uniqueletters.length() - 1] = 1;
		}
	}
	cout << uniqueletters << endl;
	for (int i = 0; i < uniqueletters.length(); i++)
	{
		cout << occurences[i] << endl;
	}
}