/*===============================================================================================================
Name: Lab_3.cpp
Author: Rhonel Tamargo
Copyright: Copyright 2020 @ Rhonel Tamargo
Description: excercise 3
=================================================================================================================*/
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <locale>
using namespace std;

//bubblesort
void bubblesort(int arr[], int length)
{
    for (int i = length = 1; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

//function calling that takes pointers for the stream variables, merges them and then outputs into the out stream
void merge(ifstream* ifs1, ifstream* ifs2, ofstream* ofs)
{
    ifs1->open("LabInput3-3.txt");
    ifs2->open("LabInput3-4.txt");
    ofs->open("LabOutput3-3.txt");
    int arr[50] = { 0 }; // array that stores all the values from both the first and second file
    if (ifs1->fail())
    {
        cout << "The first file failed to open";
        exit(1);
    }
    if (ifs2->fail())
    {
        cout << "The second file failed to open";
        exit(1);
    }
    int count = 0;
    while (*ifs1 >> arr[count++]) // the while loop is important because it reads any values as a boolean. if there are values it's true, if there are no more it's false and then moves on
    {
    }
    while (*ifs2 >> arr[count++])
    {
    }
    bubblesort(arr, count); // bubblesort funtion calling
    for (int i = 0; i < count - 1; i++)
    {
        *ofs << arr[i] << " ";  // output of the merged and sorted files
    }
}

int main()
{
    ifstream ifs1, ifs2;
    ofstream ofs;
    merge(&ifs1, &ifs2, &ofs);
    ifs1.close();
    ifs2.close();
    ofs.close();
    return 0;
}