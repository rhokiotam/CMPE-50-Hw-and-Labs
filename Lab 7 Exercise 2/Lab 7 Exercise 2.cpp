/*===============================================================================================================
Name: Lab 7 Exercise 2.cpp
Author: Rhonel Tamargo
Copyright: Copyright 2020 @ Rhonel Tamargo
Description: Exercise 2
=================================================================================================================*/
#include <iostream>
typedef char* charPtr;
charPtr delete_repeats(char a[], int b)
{
    int count = 0;
    charPtr uniquechars, uniqueoutput;
    uniquechars = new char[b];
    uniquechars[0] = a[0];
    count++;
    for (int i = 1; i <= b - 1; i++)
    {
        bool uniqueletter = true;
        for (int j = 0; j < count; j++)
        {
            if (uniquechars[j] == a[i])
            {
                uniqueletter = false;
            }
        }
        if (uniqueletter)
        {
            uniquechars[count++] = a[i];
        }
    }
    uniqueoutput = new char[count+1];
    for (int i = 0; i <= count - 1; i++)
    {
        uniqueoutput[i] = uniquechars[i];
    }
    uniqueoutput[count] = NULL;
    return uniqueoutput;
}
using namespace std;
int main()
{
    char str[100] = "to be or not to be";
    int size = (int)strlen(str);
    char* noRepeat;
    noRepeat = delete_repeats(str, size);
    cout << noRepeat;
    delete [] noRepeat;
}

/* Console Output
   to bern
*/