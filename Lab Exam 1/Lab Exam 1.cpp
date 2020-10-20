#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;

double annexp(double  groceries[])
{
    double sum = 0;
    for (int i = 0; i < 12; i++)
    {
        sum += groceries[i];
    }
    return sum;
}

double avgmonth(double groceries[])
{
    double sum = 0;
    for (int i = 0; i < 12; i++)
    {
        sum += groceries[i];
    }
    return sum / 12;
}

void groceries()
{
    ifstream in_stream;
    in_stream.open("LabExam1-2.txt");
    if (in_stream.fail())
    {
        cout << "The file failed to open";
        exit(1);
    }
    double arr[12] = { 0 };
    int count = 0;
    while (in_stream >> arr[count++])
    {
    }
    for (int i = count - 2; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                double temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout << "Annual expense:" << annexp(arr) << "\n";
    cout << "Lowest expense:" << arr[0] << "\n";
    cout << "highest expense:" << arr[11] << "\n";
    cout << "Avg. expense per month:" << avgmonth(arr) << "\n";
    in_stream.close();
}

void letters()
{
    ifstream in_stream;
    ofstream out_stream;
    int option1 = 0;
    int count = 0;
    char inputchars[30] = { NULL }, uniquechars[30] = { 0 };
    int countarray[30] = { 0 };
    cout << "1. enter characters thru keyboard\n" << "2. enter numbers through file name\n";
    cin >> option1;
    if (1 == option1)
    {
        cout << "enter up to 30 characters. to stop enter a number\n";
        while (cin >> inputchars[count++])
        {
            if (count > 29)
            {
                break;
            }
        }
        count--;

    }
    else if (2 == option1)
    {
        char file_name[30] = { NULL };
        cout << "Enter a file name\n";
        cin >> file_name;
        in_stream.open(file_name);
        if (in_stream.fail())
        {
            cout << "The file failed to open";
            exit(1);
        }
        out_stream.open("LabExamOutput1-3.txt");
        if (out_stream.fail())
        {
            cout << "The file failed to open";
            exit(1);
        }
        while (in_stream >> inputchars[count++])
        {
        }
    }
    for (int i = count - 2; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (inputchars[j] > inputchars[j + 1])
            {
                double temp = inputchars[j + 1];
                inputchars[j + 1] = inputchars[j];
                inputchars[j] = temp;
            }
        }
    }
    bool unique = false;
    for (int i = 0; i < 29; i++) 
    {
        cout << inputchars[i];
    }
}

int main()
{
    int option = 0;
    do {
        cout << "Enter an option number:\n" << "1. exercise 2\n" << "2. exercise 3\n" << "3. exit program\n";
        cin >> option;
        if (1 == option)
        {
            groceries();
        }
        else if (2 == option)
        {
            letters();
        }
    } while (3 != option);
    if (3 == option)
    {
        cout << "you exited the program";
        exit(0);
    }
    return 0;
}