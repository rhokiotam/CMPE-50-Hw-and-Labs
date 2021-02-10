#include <iostream>
#include <string>
using namespace std;
int main()
{
    string** bruh;
    int rows, cols;
    cin >> rows;
    bruh = new string*[rows];
    cin >> cols;
    for (int i = 0; i < rows; i++)
    {
        bruh[i] = new string[cols];
    }
    for (int row = 0; row < rows; row++)
    {
        for (int col = 0; col < cols; col++)
        {
            bruh[row][col] = "";
        }
    }
    for (int row = 1; row < rows; row++)
    {
        bruh[row][0] = to_string(row);
    }
    for (int col = 1; col < cols; col++)
    {
        bruh[0][col] = 'A' + (col - 1);
    }
    for (int row = 1; row < rows; row++)
    {
        for (int col = 1; col < cols; col++)
        {
            bruh[row][col] = 'A' + (col - 1);
            bruh[row][col] = bruh[row][col] + to_string(row);
        }
    }
    for (int row = 0; row < rows; row++)
    {
        for (int col = 0; col < cols; col++)
        {
            cout.width(2);
            cout << bruh[row][col];
            cout << " ";
        }
        cout << endl;
    }
}