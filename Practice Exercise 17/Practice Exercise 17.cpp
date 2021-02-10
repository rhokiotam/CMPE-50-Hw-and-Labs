#include <iostream>
#include <string>
using namespace std;
int main()
{
	char* bruh, *ahha;
	cout << "Enter in a sentence\n";
	string bruh1, ahha1;
	getline(cin, bruh1);
	cout << "Enter letter(s), word(s), or phrase(s) to take out from the sentence.\n";
	getline(cin, ahha1);
	bruh = new char[bruh1.length()];
	ahha = new char[ahha1.length()];
	for (int i = 0; i < bruh1.length(); i++)
	{
		bruh[i] = bruh1[i];
	}
	for (int i = 0; i < ahha1.length(); i++)
	{
		ahha[i] = ahha1[i];
	}
	bool sameletter = false;
	for (int i = 0; i < bruh1.length(); i++)
	{
		for (int j = 0; j < ahha1.length(); j++)
		{
			if (bruh[i+j] == ahha[j])
			{
				sameletter = true;
			}
			else
			{
				sameletter = false;
				break;
			}
		}
		if (sameletter == true)
		{
			for (int k = 0; k < ahha1.length(); k++)
			{
				bruh[i+k] = NULL;
			}
		}
	}
	for (int i = 0; i < bruh1.length(); i++)
	{
		cout << bruh[i];
	}
}