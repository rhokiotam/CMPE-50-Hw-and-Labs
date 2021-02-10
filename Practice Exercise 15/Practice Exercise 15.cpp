#include <iostream>
using namespace std;
int main()
{
    char quickie[4][4];
    for (int col = 0; col < 4; col++)
    {
        for (int row = 0; row < 4; row++)
        {
            if (col % 2 == 0)
            {
                quickie[row][col] = 'a' + (4 * col) + row;
            }
            else
            {
                quickie[row][col] = 'a' + (4 * col) + (3 - row);
            }
        }
    }
    for (int row = 0; row < 4; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cout << quickie[row][col] << " ";
        }
        cout << endl;
    }
}
