#include <iostream>
#include <string>
using namespace std;
void update(string a[], string b[], string c[], string d[])
{
    cout << "lab 1: ";
    for (int i = 0; i < 5; i++)
    {
        cout << i + 1 << ": " << a[i] << " ";
    }
    cout << "\n";
    cout << "lab 2: ";
    for (int i = 0; i < 6; i++)
    {
        cout << i + 1 << ": " << b[i] << " ";
    }
    cout << "\n";
    cout << "lab 3: ";
    for (int i = 0; i < 4; i++)
    {
        cout << i + 1 << ": " << c[i] << " ";
    }
    cout << "\n";
    cout << "lab 4: ";
    for (int i = 0; i < 3; i++)
    {
        cout << i + 1 << ": " << d[i] << " ";
    }
}
int main()
{
    string lab1[5];
    string lab2[6];
    string lab3[4];
    string lab4[3];
    for (int i = 0; i < 5; i++)
    {
        lab1[i] = "empty";
    }
    for (int i = 0; i < 6; i++)
    {
        lab2[i] = "empty";
    }
    for (int i = 0; i < 4; i++)
    {
        lab3[i] = "empty";
    }
    for (int i = 0; i < 3; i++)
    {
        lab4[i] = "empty";
    }
    update(lab1, lab2, lab3, lab4);
    int choice = 0;
    char inputarray[2];
    string userid;
    do
    {
        cout << "\n" << "Would you like to 1) login or logout a user, 2) search for a user\n";
        cin >> choice;
        if (choice == 1)
        {
        }
        else if (choice == 2)
        {
            cout << "Enter a valid users ID number\n";
            cin >> userid;
        }
    } while (choice != 3);
}