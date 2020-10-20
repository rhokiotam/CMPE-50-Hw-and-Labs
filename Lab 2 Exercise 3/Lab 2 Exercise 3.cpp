/*===============================================================================================================
Name: Lab 2 Exercise 3.cpp
Author: Rhonel Tamargo
Copyright: Copyright 2020 @ Rhonel Tamargo
Description: Exercise 3
=================================================================================================================*/
#include <iostream>
using namespace std;
int main()
{
    const int ASSIGNMENT_SCORE = 2, ASSIGNMENT_NUM = 5, BEST_WORST_AVG = 3;
    double val[ASSIGNMENT_SCORE][ASSIGNMENT_NUM + BEST_WORST_AVG];
    val[0][5] = 0, val[1][5] = 0;
    val[0][6] = 100, val[1][6] = 100;
    val[0][7] = 0, val[1][7] = 0;
    cout << "Please enter 5 homework scores [0-100]\n";
    for (int i = 0; i < 5; i++)
    {
        cin >> val[0][i];
        val[0][7] = val[0][i] + val[0][7];
    }
    val[0][7] /= ASSIGNMENT_NUM;
    cout << "Please enter 5 lab scores [0-100]\n";
    for (int i = 0; i < 5; i++)
    {
        cin >> val[1][i];
        val[1][7] = val[1][i] + val[1][7];
    }
    val[1][7] /= ASSIGNMENT_NUM;
    for (int i = 0; i < 5; i++)
    {
        if (val[0][i] > val[0][5])
        {
            val[0][5] = val[0][i];
        }
        if (val[0][i] < val[0][6])
        {
            val[0][6] = val[0][i];
        }
        if (val[1][i] > val[1][5])
        {
            val[1][5] = val[0][i];
        }
        if (val[1][i] < val[1][6])
        {
            val[1][6] = val[0][i];
        }
    }
    double avg[6];
    avg[5] = 0;
    for (int i = 0; i < 5; i++)
    {
        avg[i] = val[0][i] + val[1][i];
        avg[i] = avg[i] / 2;
    }
    for (int i = 0; i < 5; i++)
    {
        avg[5] += avg[i];
    }
    avg[5] /= 5;

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    cout << "        1        2       3       4       5     BEST   WORST    AVG\n"
        << "    *****************************************************************\n";

    cout << "HW ";
    for (int i = 0; i < 8; i++)
    {
        cout.width(8);
        cout << val[0][i];
    }
    cout << "\n";
    cout << "Lab";
    for (int i = 0; i < 8; i++)
    {
        cout.width(8);
        cout << val[1][i];
    }
    cout << "\n";
    cout << "AVG";
    for (int i = 0; i < 5; i++)
    {
        cout.width(8);
        cout << avg[i];
    }
    cout << "   Overall: " << avg[5];
    cout << "\n";
    bool passed = false;
    if (val[0][7] < 50)
    {
        passed = false;
        cout << "sorry, you failed because you got less than 50% in homework";
    }
    else if (val[1][7] < 50)
    {
        passed = false;
        cout << "sorry, you failed because you got less than 50% in labs";
    }
    else if (val[0][7] < 50 && val[1][7] < 50)
    {
        passed = false;
        cout << "sorry, you failed because you got less than 50% in both homework and labs";
    }
    else if (val[0][7] >= 50 && val[1][7] >= 50)
    {
        passed = true;
        cout << "congratulations, you passed";
    }
    return 0;
}

/*
Console output
        1        2       3       4       5     BEST   WORST    AVG
    *****************************************************************
HW    60.00   70.00   80.00   90.00  100.00  100.00   60.00   80.00
Lab    7.00  100.00   90.00   99.00   80.00   90.00   60.00   75.20
AVG   33.50   85.00   85.00   94.50   90.00   Overall: 77.60
congratulations, you passed
*/