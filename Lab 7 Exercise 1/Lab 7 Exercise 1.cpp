/*===============================================================================================================
Name: Lab 7 Exercise 1.cpp
Author: Rhonel Tamargo
Copyright: Copyright 2020 @ Rhonel Tamargo
Description: exercise 1
=================================================================================================================*/
#include <iostream>
#include <fstream>
typedef char* charArrayPtr;
using namespace std;
int main()
{
    ifstream input;
    int choice = 0;
    charArrayPtr colnum, colA, colB, colC, colD;
    int numberofrows = 0;
    cout << "Would you like to enter your seats through 1) the console or 2) the file?\n";
    cin >> choice;
    if (choice == 1)
    {
        cout << "How many rows are there on the plane (MIN 1 MAX 9)?\n";
        cin >> numberofrows;
        if (numberofrows > 9 || numberofrows < 1)
        {
            cout << "You have entered an invalid number of rows\n";
            exit(1);
        }
    }
    else if (choice == 2)
    {
        char file_name[20];
        cout << "What is the name of the file? (20 characters max)\n";
        cin >> file_name;
        input.open(file_name);
        if (input.fail())
        {
            cout << "The file failed to open\n";
            exit(1);
        }
        cout << "How many rows are there on the plane (MIN 1 MAX 9)?\n";
        input >> numberofrows;
        if (numberofrows > 9 || numberofrows < 1)
        {
            cout << "You have entered an invalid number of rows\n";
            exit(1);
        }
    }
    colnum = new char[numberofrows];
    colA = new char[numberofrows];
    colB = new char[numberofrows];
    colC = new char[numberofrows];
    colD = new char[numberofrows];
    for (int i = 0; i < numberofrows; i++)
    {
        colnum[i] = 49 + i;
    }
    for (int i = 0; i < numberofrows; i++)
    {
        colA[i] = 'A';
        colB[i] = 'B';
        colC[i] = 'C';
        colD[i] = 'D';
    }
    for (int i = 0; i < numberofrows; i++)
    {
        cout << colnum[i] << " " << colA[i] << colB[i] << colC[i] << colD[i];
        cout << "\n";
    }
    int input1 = 1;
    int seatcount;
    seatcount = 4 * numberofrows;
    while (input1 == 1)
    {
        char inputarray[2];
        if (choice == 1)
        {
            cout << "What seat would you like to take? (Input caplital letters only. Enter 99 to exit)\n";
            for (int i = 0; i < 2; i++)
            {
                cin >> inputarray[i];
            }
        }
        else
        {
            cout << "What seat would you like to take? (Input caplital letters only. Enter 99 to exit.)\n";
            for (int i = 0; i < 2; i++)
            {
                input >> inputarray[i];
            }
        }
        if (inputarray[0] == '9' && inputarray[1] == '9')
        {
            break;
        }
        int row, column;
        column = inputarray[1] - 64;
        row = inputarray[0] - 49;
        if (row < 0 || row >= numberofrows)
        {
            cout << "Invalid entry\n";
            continue;
        }
        switch (column)
        {
        case(1):
            if (colA[row] == 'X')
            {
                cout << "Seat is already taken\n";
            }
            else
            {
                colA[row] = 'X';
                seatcount--;
            }
            break;
        case(2):
            if (colB[row] == 'X')
            {
                cout << "Seat is already taken\n";
            }
            else
            {
                colB[row] = 'X';
                seatcount--;
            }
            break;
        case(3):
            if (colC[row] == 'X')
            {
                cout << "Seat is already taken\n";
            }
            else
            {
                colC[row] = 'X';
                seatcount--;
            }
            break;
        case(4):
            if (colD[row] == 'X')
            {
                cout << "Seat is already taken\n";
            }
            else
            {
                colD[row] = 'X';
                seatcount--;
            }
            break;
        default:
            cout << "invalid input\n";
            break;
        }
        for (int i = 0; i < numberofrows; i++)
        {
            cout << colnum[i] << " " << colA[i] << colB[i] << colC[i] << colD[i];
            cout << "\n";
        }
        if (seatcount == 0)
        {
            cout << "All the seats have been taken\n";
            break;
        }
    }
    delete [] colnum;
    delete [] colA;
    delete [] colB;
    delete [] colC;
    delete [] colD;
}
/* Console Output
* Would you like to enter your seats through 1) the console or 2) the file?
1
How many rows are there on the plane (MIN 1 MAX 9)?
5
1 ABCD
2 ABCD
3 ABCD
4 ABCD
5 ABCD
What seat would you like to take? (Input caplital letters only. Enter 99 to exit)
1A
1 XBCD
2 ABCD
3 ABCD
4 ABCD
5 ABCD
What seat would you like to take? (Input caplital letters only. Enter 99 to exit)
2B
1 XBCD
2 AXCD
3 ABCD
4 ABCD
5 ABCD
What seat would you like to take? (Input caplital letters only. Enter 99 to exit)
4C
1 XBCD
2 AXCD
3 ABCD
4 ABXD
5 ABCD
What seat would you like to take? (Input caplital letters only. Enter 99 to exit)
5B
1 XBCD
2 AXCD
3 ABCD
4 ABXD
5 AXCD
What seat would you like to take? (Input caplital letters only. Enter 99 to exit)
99

Would you like to enter your seats through 1) the console or 2) the file?
2
What is the name of the file? (20 characters max)
Labinput7-1.txt
How many rows are there on the plane (MIN 1 MAX 9)?
1 ABCD
2 ABCD
3 ABCD
4 ABCD
What seat would you like to take? (Input caplital letters only. Enter 99 to exit.)
1 XBCD
2 ABCD
3 ABCD
4 ABCD
What seat would you like to take? (Input caplital letters only. Enter 99 to exit.)
1 XBXD
2 ABCD
3 ABCD
4 ABCD
What seat would you like to take? (Input caplital letters only. Enter 99 to exit.)
1 XBXX
2 ABCD
3 ABCD
4 ABCD
What seat would you like to take? (Input caplital letters only. Enter 99 to exit.)
1 XBXX
2 XBCD
3 ABCD
4 ABCD
What seat would you like to take? (Input caplital letters only. Enter 99 to exit.)
1 XBXX
2 XBCX
3 ABCD
4 ABCD
What seat would you like to take? (Input caplital letters only. Enter 99 to exit.)
1 XBXX
2 XBCX
3 XBCD
4 ABCD
What seat would you like to take? (Input caplital letters only. Enter 99 to exit.)
1 XBXX
2 XBCX
3 XXCD
4 ABCD
What seat would you like to take? (Input caplital letters only. Enter 99 to exit.)
1 XBXX
2 XBCX
3 XXXD
4 ABCD
What seat would you like to take? (Input caplital letters only. Enter 99 to exit.)
1 XBXX
2 XBCX
3 XXXD
4 XBCD
What seat would you like to take? (Input caplital letters only. Enter 99 to exit.)
1 XBXX
2 XBCX
3 XXXD
4 XBXD
What seat would you like to take? (Input caplital letters only. Enter 99 to exit.)
1 XBXX
2 XBCX
3 XXXD
4 XBXX
What seat would you like to take? (Input caplital letters only. Enter 99 to exit.)
*/