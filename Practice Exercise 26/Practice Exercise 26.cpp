#include <iostream>
#include <string>
#include <fstream>
using namespace std;
void displayhtml(string filename)
{
	ifstream fin;
	try
	{
		fin.open(filename);
		if (fin.fail())
		{
			throw filename;
		}
		string holder;
		while (getline(fin, holder))
		{
			while (holder.find("<") != string::npos && holder.find(">") != string::npos)
			{
				int start = holder.find("<");
				int end = holder.find(">");
				for (int i = start; i <= end; i++)
				{
					holder[i] = NULL;
				}
			}
			while (holder.find("\t") != string::npos)
			{
				int temp = holder.find("\t");
				holder[temp] = NULL;
			}
			bool stringisnull = true;
			for (int i = 0; i < holder.length(); i++)
			{
				if (holder[i] != NULL)
				{
					stringisnull = false;
					break;
				}
			}
			if (!stringisnull)
			{
				cout << holder << endl;
			}
		}
		fin.close();
	}
	catch (const string& filename)
	{
		cout << "File failed to open";
	}
	
}
int main()
{
	displayhtml("index.html");
}
