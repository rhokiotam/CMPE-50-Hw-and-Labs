#include <iostream>
#include <vector>
using namespace std;
template <class T>

void helper(vector<T> &bruh)
{
    char temp = bruh[0];
    for (int i = 1; i < bruh.size(); i++)
    {
        bruh[i-1] = bruh[i];
    }
    bruh[bruh.size() - 1] = temp;
}
int main()
{
    vector<char> huh;
    for (unsigned int i = 0; i < 6; i++)
    {
        huh.push_back('a' + i);
    }
    helper(huh);
    for (int i = 0; i < huh.size(); i++)
    {
        cout << huh[i];
    }
}
