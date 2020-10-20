/*===============================================================================================================
Name: Lab_3.cpp
Author: Rhonel Tamargo
Copyright: Copyright 2020 @ Rhonel Tamargo
Description: excercise 1
=================================================================================================================*/
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <locale>
using namespace std;
int main()
{
    // declaring the streams 
    ifstream in_stream;
    ofstream out_stream;
    in_stream.open("labinput3-1.txt"); //opening the stream
    if (in_stream.fail()) //checks if the input file fails to open
    {
        cout << "The file failed to open";
        exit(1);
    }
    out_stream.open("LabOutput3-1.txt"); //check if the output file fails to open
    if (out_stream.fail())
    {
        cout << "The file failed to open";
        exit(1);
    }
    char input[100] = { NULL }; //array to store all the input chars
    for (int i = 0; i < 100; i++) //for loop that runs takes input from the read file, makes the letter uppercase, and skips any white space and new lines
    {
        in_stream >> input[i];
        input[i] = toupper(input[i]);
        if (input[i] == ' ' || input[i] == '\n')
        {
            i--;
        }
    }
    for (int i = 0; i < 100; i++) // runs through the array again to output the uppercased letters into a new file
    {
        out_stream << input[i];
    }
    in_stream.close();
    out_stream.close();
    return 0;
}