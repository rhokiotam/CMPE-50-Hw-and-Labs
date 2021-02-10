#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Line
{
private:
	string name;
	vector<string> ticket;
public:
	Line()
	{
		name = "NULL";
	}
	Line(string a)
	{
		name = a;
	}
	void taketicket(string a)
	{
		ticket.push_back(a);
	}
	void taketicket(int cut, string a)
	{
		ticket.push_back(ticket[ticket.size()-1]);
		for (unsigned int i = ticket.size()-1; i >= cut; i--)
		{
			ticket[i] = ticket[i - 1];
		}
		ticket[cut - 1] = a;
	}
	void display()
	{
		cout << name << endl;
		for (unsigned int i = 0; i < ticket.size(); i++)
		{
			cout << ticket[i] << " Position: " << i+1 << " ";
		}
		cout << endl;
	}
	void serve()
	{
		cout << "Now Serving: ";
		cout << ticket[0] << endl;
		for (unsigned int i = 0; i < ticket.size()-1; i++)
		{
			ticket[i] = ticket[i+1];
		}
		ticket.pop_back();
	}
	void serve(string a)
	{
		cout << "Now serving: " << a << endl;
		for (unsigned int i = 0; i < ticket.size(); i++)
		{
			if (ticket[i] == a)
			{
				for (unsigned int j = i; j < ticket.size() - 1; j++)
				{
					ticket[j] = ticket[j + 1];
				}
				ticket.pop_back();
			}
		}
	}
};
int main()
{
	cout << "BTS Shops at Winco!" << endl;
	Line Winco("WincoDeli");
	Winco.taketicket("Junkook");
	Winco.display();
	Winco.taketicket("Jimin");
	Winco.display();
	Winco.taketicket("Jin");
	Winco.display();
	Winco.taketicket("V");
	Winco.display();
	Winco.taketicket("J-Hope");
	Winco.display();
	Winco.taketicket("RM");
	Winco.display();
	Winco.taketicket("Suga");
	Winco.display();
	Winco.serve();
	Winco.display();
	Winco.taketicket(2, "Anti-BTS Army Stan");
	Winco.display();
	Winco.serve();
	Winco.display();
	Winco.serve("RM");
	Winco.display();
}