/*===============================================================================================================
Name: Lab_3.cpp
Author: Rhonel Tamargo
Copyright: Copyright 2020 @ Rhonel Tamargo
Description: excercise 2
=================================================================================================================*/

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <locale>

using namespace std;
int main()
{
    //declaring the in and out streams, the option variable for whether they want to input from the keyboard or read from a file, and the arrays that I use for sorting, finding uniqueness, and counting how many
    //iterations of number there are
    ifstream in_stream;
    ofstream out_stream;
    int option = 0;
    int inputnums[50] = { 0 }, uniquenums[50][2] = { 0 };
    int count = 0;
    cout << "Enter option number to read numbers\n" << "1. Enter through keyboard\n" << "2. Enter through a file\n";
    cin >> option;
    if (1 == option)
    {
        cout << "Enter up to 50 numbers. To stop the program enter any letter'\n";
        while (cin >> inputnums[count++]) //while loop creates a either true or false value: true if there is a number being inputted and false if there is a character inputted which then exits the loop
        {
            if (count > 49)
            {
                break;
            }
        }
        count--; //decreasing the size of count so that the letter is not counted as a '0' in the sorting and uniqueness test
    }
    else if (2 == option) // Option 2 if they want to enter a file
    {
        char file_name[20] = { NULL };
        cout << "Enter a file name max 20 chars\n";
        cin >> file_name;
        in_stream.open(file_name);
        if (in_stream.fail())
        {
            cout << "The file failed to open";
            exit(1);
        }
        out_stream.open("LabOutput3-2.txt");
        if (out_stream.fail())
        {
            cout << "The file failed to open";
            exit(1);
        }
    }
    while (in_stream >> inputnums[count++])
    {
    }
    //bubblesort
    for (int i = count - 2; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (inputnums[j] > inputnums[j + 1])
            {
                int temp = inputnums[j + 1];
                inputnums[j + 1] = inputnums[j];
                inputnums[j] = temp;
            }
        }
    }
    bool uniquezero = false; // boolean value to check if there is a 0 that was inputted from the keyboard or file. we assume that there are no zeroes entered
    int uniqueindex = 0; //counts the index for the unique numbers array
    for (int i = 0; i < count - 1; i++) // first for loop runs thru each value of the numbers that were inputted or read from file
    {
        bool unique = true; //boolean value for uniqueness
        for (int j = 0; j < uniqueindex; j++) // second for loop runs thru each value from the unique array
        {
            if (inputnums[i] == uniquenums[j][0] || inputnums[i] == 0 && uniquezero) // if statement used to check whether or not the value from the input is unique, or if it is a 0 entered from the keyboard or read from file
            {
                unique = false; // if the number was a duplicate, it is false but thru the first iteration of the loop there are no other values to check it against
                uniquenums[j][1]++; //increments the amount of iterations of the number in the loop if the number has already been identified as unique
            }
        }
        if (unique) //if the value passes the first for loop, it then gets added to the unique array as a unique num and adds one to the iteration since it's the first time it sees that num
        {
            uniquenums[uniqueindex][0] = inputnums[i];
            uniquenums[uniqueindex++][1]++;
            if (inputnums[i] == 0) // if the value entered is 0 then the uniquezero boolean becomes true
            {
                uniquezero = true;
            }
        }
    }
    cout << "N" << "  " << "Count" << "\n"; // anything below this is the formatting for the output of the console and for the output file as well as closing the streams
    for (int i = uniqueindex - 1; i >= 0; i--)
    {
        cout << uniquenums[i][0] << " ";
        cout.width(4);
        cout << uniquenums[i][1] << "\n";
    }
    out_stream << " N" << "  " << " Count" << "\n";
    for (int i = uniqueindex - 1; i >= 0; i--)
    {
        out_stream << uniquenums[i][0] << " ";
        out_stream.width(4);
        out_stream << uniquenums[i][1] << "\n";
    }
    in_stream.close();
    out_stream.close();
    return 0;
}


/* Console Output
Enter option number to read numbers
1. Enter through keyboard
2. Enter through a file
1
Enter up to 50 numbers. To stop the program enter any letter'
5
5
4
4
6
6
7
7
8
8
0
0
0
0
2
1
1
1
1
a
N  Count
8    2
7    2
6    2
5    2
4    2
2    1
1    4
0    4

Enter option number to read numbers
1. Enter through keyboard
2. Enter through a file
2
Enter a file name max 20 chars
LabInput3-2.txt
N  Count
4    2
3    1
1    2
-3    1
*/