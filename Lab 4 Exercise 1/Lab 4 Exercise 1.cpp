/*===============================================================================================================
Name: Lab_4.cpp
Author: Rhonel Tamargo
Copyright: Copyright 2020 @ Rhonel Tamargo
Description: excercise 1
=================================================================================================================*/
#include <iostream>
#include <string>
#include <cctype>
using namespace std;
bool isWhitespace(char ch) {
    if (ch == ' ' || ch == '\t' || ch == '\n' || ch == '\r')
    {
        return true;
    }
    return false;
}
int main()
{
    string sentence;
    int count = 0;
    cout << "Enter a sentence up to 100 chars\n";
    getline(cin, sentence);
    int x = sentence.length();
    bool is_firstblank = false;
    bool is_initial = true;
    for (int i = 0; i < x; i++)
    {
        if (sentence[i] == '.')
        {
            break;
        }
        if (isWhitespace(sentence[i]))
        {
            if (is_initial)
            {
                continue;
            }
            if (is_firstblank == false)
            {
                cout << ' ';
                is_firstblank = true;
            }
        }
        else
        {
            if (is_initial)
            {
                is_initial = false;
            }
            is_firstblank = false;
            count++;
            if (count == 1)
            {
                putchar(toupper(sentence[i]));
            }
            if (count > 1)
            {
                putchar(tolower(sentence[i]));
            }
        }
    }
    cout << '.';
}

/* Console Output
* Enter a sentence up to 100 chars
   nOw is tHe tIme      to gO                                                                           to Chuck e CheESE.
Now is the time to go to chuck e cheese.
*/