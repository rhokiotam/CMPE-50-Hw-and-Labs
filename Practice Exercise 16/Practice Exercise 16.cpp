#include <iostream>
#include <vector>
#include <string>
bool isVowel(char ch)
{
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        return true;
    }
    return false;
}
using namespace std;
int main()
{
    vector<char> covergirl;
    for (int i = 0; i < 6; i++)
    {
        covergirl.push_back('a' + i);
    }
    for (char bruh : covergirl)
    {
        cout << bruh << " ";
    }
    cout << endl << covergirl.size() << endl;
    string sentence;
    cout << "Enter a sentence\n";
    getline(cin, sentence);
    for (unsigned int i = 0; i < sentence.length(); i++)
    {
        covergirl.push_back(sentence.at(i));
    }
    for (char bruh : covergirl)
    {
        cout << bruh << " ";
    }
    cout << endl;
    for (int i = 0; i < covergirl.size(); i++)
    {
        if (isVowel(covergirl[i]))
        {
            for (int j = i; j < covergirl.size()-1; j++)
            {
                covergirl[j] = covergirl[j+1];
            }
            covergirl.pop_back();
            i--;
        }
    }
    for (char bruh : covergirl)
    {
        cout << bruh << " ";
    }
}

