/*===============================================================================================================
Name: Lab Exam 3.cpp
Author: Rhonel Tamargo
Copyright: Copyright 2020 @ Rhonel Tamargo
Description: Exam 3
=================================================================================================================*/
#include <iostream>
#include "Stack.h"
using namespace std;
void exercise2(char ch[], int length)
{
    char* front, *rear; 
    int half = length / 2;
    front = &ch[0];
    rear = &ch[length-1];
    for (int i = 0; i < half; i++)
    {
        char temp;
        temp = *front;
        *front = *rear;
        *rear = temp;
        front++;
        rear--;
    }
    for (int i = 0; i < length; i++)
    {
        cout << ch[i];
    }
    cout << endl;
}
void exercise3()
{
    Stack stk1(20);
    double num;
    for (int i = 1; i <= 20; i++)
    {
        stk1.addLast(i);
    }
    cout << stk1 << endl;
    Stack stk2(stk1), stk3;
    while (stk2.isEmpty() == 0)
    {
        stk3.addLast(stk2.getLast());
        stk2.deleteLast();
    }
    stk1 = stk3;
    cout << stk1 << endl;
    cout << stk2 << endl;
    cout << stk3 << endl;
} 
int main()
{
    int choice = 0;
    while (choice == 0)
    {
        int option;
        cout << "Enter a choice 1) Exercise 2 2)Exercise 3 3) exit\n";
        cin >> option;
        if (option == 1)
        {
            int length = 0;
            cout << "What is the length of the character array?\n";
            cin >> length;
            cout << "Enter your " << length << "-letter array\n";
            char* test1;
            test1 = new char[length];
            for (int i = 0; i < length; i++)
            {
                cin >> test1[i];
            }
            exercise2(test1, length);
        }
        else if (option == 2)
        {
            exercise3();
        }
        else if (option == 3)
        {
            cout << "You have exited the program.\n";
            exit(0);
        }
    }
}
/* CONSOLE OUTPUT
* Enter a choice 1) Exercise 2 2)Exercise 3 3) exit
1
What is the length of the character array?
8
Enter your 8-letter array
saturday
yadrutas
Enter a choice 1) Exercise 2 2)Exercise 3 3) exit
1
What is the length of the character array?
9
Enter your 9-letter array
wednesday
yadsendew
Enter a choice 1) Exercise 2 2)Exercise 3 3) exit
1
What is the length of the character array?
9
Enter your 9-letter array
ilovecmpe
epmcevoli
Enter a choice 1) Exercise 2 2)Exercise 3 3) exit
2
1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20
20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1
0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
20 19 18 17 16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1
Enter a choice 1) Exercise 2 2)Exercise 3 3) exit
3
You have exited the program.

*/