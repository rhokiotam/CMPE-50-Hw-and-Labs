#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
using namespace std;
void output(ofstream& outtie, char innie)
{
	cout << innie;
	outtie << innie;
}
int main()
{
	ifstream in_stream;
	ofstream out_stream;
	in_stream.open("mockinterviewinput.txt");
	if (in_stream.fail())
	{
		cout << "The file failed to open";
		exit(1);
	}
	out_stream.open("mockinterviewoutput.txt");
	if (out_stream.fail())
	{
		cout << "The file failed to open";
		exit(1);
	}
	string input, full;
	while (getline(in_stream, input))
	{
		full += input;
		full.push_back('\n');
	}
	int lastindex;
	lastindex = full.length() - 1;
	for (int i = 0; i < lastindex; i++)
	{
		char current = full[i];   
		int multiplier = 0;
		if (isdigit(current))
		{
			if (i < lastindex - 1 && full[i + 1] == 'x') // checks if the current char in the string is at least the 2nd from the last character and if the next character after it is an 'x'
			{
				multiplier = stoi(full.substr(i, 1)); // stoi converts the digit in the string to a number
				for (int j = 0; j < multiplier; j++)
				{
					output(out_stream, full[i + 2]);
				}
				i += 2;
			}
			else
			{
				output(out_stream, current);
			}
		}
		else // if it is not a digit
		{
			output(out_stream, current);
		}
	}
}