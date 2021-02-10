// sponsored by Wendy's 4 by 4 deal
#include <iostream>
using namespace std;
int main()
{
    char norm[4][4];
    for (int row= 0; row < 4; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            norm[row][col] = 'a' + (4*row) + col;
        }
    }
    for (int row = 0; row < 4; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cout << norm[row][col] << " ";
        }
        cout << endl;
    }
    char bruh[4];
    for (int i = 0; i < 4; i++)
    {
        bruh[i] = norm[3][i];
    }
    for (int row = 3; row > 0; row--)
    {
        for (int col = 0; col < 4; col++)
        {
            norm[row][col] = norm[row-1][col];
        }
    }
    for (int i = 0; i < 4; i++)
    {
        norm[0][i] = bruh[i];
    }
    cout << endl;
    for(int row = 0; row < 4; row++)
    {
        char temp;
        temp = norm[row][3];
        for (int col = 3; col > 0; col--)
        {
            norm[row][col] = norm[row][col - 1];
        }
        norm[row][0] = temp;
    }
    for (int row = 0; row < 4; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cout << norm[row][col] << " ";
        }
        cout << endl;
    }
}
