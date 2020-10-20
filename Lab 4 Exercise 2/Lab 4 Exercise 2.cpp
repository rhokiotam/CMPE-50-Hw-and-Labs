/*===============================================================================================================
Name: Lab_4.cpp
Author: Rhonel Tamargo
Copyright: Copyright 2020 @ Rhonel Tamargo
Description: excercise 2
=================================================================================================================*/
#include <iostream>
#include <string>
#include <cctype>
using namespace std;
bool isAlphabet(char ch) {
    if (ch == 'a' || ch == 'b' || ch == 'c' || ch == 'd' || ch == 'e' || ch == 'f' || ch == 'g' || ch == 'h'
        || ch == 'i' || ch == 'j' || ch == 'k' || ch == 'l' || ch == 'm' || ch == 'n' || ch == 'o'
        || ch == 'p' || ch == 'q' || ch == 'r' || ch == 's' || ch == 't' || ch == 'u' ||
        ch == 'v' || ch == 'w' || ch == 'x' || ch == 'y' || ch == 'z' || ch == 'A' || ch == 'B' || ch == 'C' || ch == 'D' || ch == 'E' || ch == 'F' || ch == 'G' || ch == 'H'
        || ch == 'I' || ch == 'J' || ch == 'K' || ch == 'L' || ch == 'M' || ch == 'N' || ch == 'O'
        || ch == 'P' || ch == 'Q' || ch == 'R' || ch == 'S' || ch == 'T' || ch == 'U' ||
        ch == 'V' || ch == 'W' || ch == 'X' || ch == 'Y' || ch == 'Z')
    {
        return true;
    }
    return false;
}

int main()
{
    int option = 1;
    while (option == 1)
    {
        cout << "Enter a sentence and add a period at the end\n";
        string sentence, he_she_con, him_her_con, his_hers_con, apostrophe, he_she_con1, him_her_con1, his_hers_con1, apostrophe1, word;
        he_she_con = "he or she";
        him_her_con = "him or her";
        his_hers_con = "his or her(s)";
        apostrophe = "he or she's";
        he_she_con1 = "He or she";
        him_her_con1 = "Him or her";
        his_hers_con1 = "His or her(s)";
        apostrophe1 = "He or she's";
        getline(cin, sentence);
        int x = sentence.length();
        for (int i = 0; i < x; i++)
        {
            if (isAlphabet(sentence[i]))
            {
                word += sentence[i];
            }
            else
            {
                if (word == "hers" || word == "his")
                {
                    word = his_hers_con;
                }
                else if (word == "her" || word == "him")
                {
                    word = him_her_con;
                }
                else if (word == "she's" || word == "he's")
                {
                    word = apostrophe;
                }
                else if (word == "she" || word == "he")
                {
                    word = he_she_con;
                }
                else if (word == "Hers" || word == "His")
                {
                    word = his_hers_con1;
                }
                else if (word == "Her" || word == "Him")
                {
                    word = him_her_con1;
                }
                else if (word == "She's" || word == "He's")
                {
                    word = apostrophe1;
                }
                else if (word == "She" || word == "He")
                {
                    word = he_she_con1;
                }
                cout << word;
                word = "";
                if (sentence[i] == '.')
                {
                    cout << '.';
                }
                else if (sentence[i] == ',')
                {
                    cout << ',';
                }
                else if (sentence[i] == '\'')
                {
                    cout << '\'';
                }
                else
                {
                    cout << ' ';
                }
            }
        }
        cout << "\n";
        cout << "1) Continue\n" << "2) Exit Program\n";
        cin >> option;
        cin.ignore();
    }
}



/* Console Output
Press Enter once and then enter a sentence and add a period to stop
She's.
He or she's.
1) Continue
2) Exit Program
1
Press Enter once and then enter a sentence and add a period to stop
He does the dishes while she is in charge of her.
He or she does the dishes while he or she is in charge of him or her.
1) Continue
2) Exit Program
1
Press Enter once and then enter a sentence and add a period to stop
He's the problem, not his sister.
He or she's the problem, not his or her(s) sister.
1) Continue
2) Exit Program
2
*/