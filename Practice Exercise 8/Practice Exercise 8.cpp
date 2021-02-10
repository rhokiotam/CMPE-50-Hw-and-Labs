#include <iostream>
typedef int* intPtr;
using namespace std;
int main()
{
    intPtr rowA, rowB, rowC, rowD, rowE;
    int size;
    cout << "How many seats are there per row (MAX: 9)?\n";
    cin >> size;
    if (size > 9 || size <= 0)
    {
        cout << "You entered too many or too little seats\n";
        exit(1);
    }
    rowA = new int[size];
    rowB = new int[size];
    rowC = new int[size];
    rowD = new int[size];
    rowE = new int[size];
    for (int i = 0; i < size; i++)
    {
        rowA[i] = i + 1;
        rowB[i] = i + 1;
        rowC[i] = i + 1;
        rowD[i] = i + 1;
        rowE[i] = i + 1;
    }
    cout << "A: ";
    for (int i = 0; i < size; i++)
    {
        cout << rowA[i] << " ";
    }
    cout << "\n" << "B: ";
    for (int i = 0; i < size; i++)
    {
        cout << rowB[i] << " ";
    }
    cout << "\n" << "C: ";
    for (int i = 0; i < size; i++)
    {
        cout << rowC[i] << " ";
    }
    cout << "\n" << "D: ";
    for (int i = 0; i < size; i++)
    {
        cout << rowD[i] << " ";
    }
    cout << "\n" << "E: ";
    for (int i = 0; i < size; i++)
    {
        cout << rowE[i] << " ";
    }
    cout << "\n";
    char input[2];
    cout << "What seat number would you like?\n";
    for (int i = 0; i < 2; i++)
    {
        cin >> input[i];
    }
    int index;
    index = (input[1] - '0') - 1;
    if (input[0] == 'A')
    {
        rowA[index] = 0;
    }
    else if (input[0] == 'B')
    {
        rowB[index] = 0;
    }
    else if (input[0] == 'C')
    {
        rowC[index] = 0;
    }
    else if (input[0] == 'D')
    {
        rowD[index] = 0;
    }
    else if (input[0] == 'E')
    {
        rowE[index] = 0;
    }
    cout << "A: ";
    for (int i = 0; i < size; i++)
    {
        cout << rowA[i] << " ";
    }
    cout << "\n" << "B: ";
    for (int i = 0; i < size; i++)
    {
        cout << rowB[i] << " ";
    }
    cout << "\n" << "C: ";
    for (int i = 0; i < size; i++)
    {
        cout << rowC[i] << " ";
    }
    cout << "\n" << "D: ";
    for (int i = 0; i < size; i++)
    {
        cout << rowD[i] << " ";
    }
    cout << "\n" << "E: ";
    for (int i = 0; i < size; i++)
    {
        cout << rowE[i] << " ";
    }
    cout << "\n";
}   