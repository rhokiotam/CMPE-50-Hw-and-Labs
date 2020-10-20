/*===============================================================================================================
Name: Lab_5.cpp
Author: Rhonel Tamargo
Copyright: Copyright 2020 @ Rhonel Tamargo
Description: Excercise 1
=================================================================================================================*/
#include <iostream>
using namespace std;

class StudentRecord 
{
private:
    double quiz1;
    double quiz2;
    double midterm;
    double fin;
    double avg;
public:
    StudentRecord() 
    {
        quiz1 = 0;
        quiz2 = 0;
        midterm = 0;
        fin = 0;
        avg = 0;
    }

    void setquiz1(double score) 
    { 
        quiz1 = score; 
    }
    void setquiz2(double score) 
    { 
        quiz2 = score; 
    }
    void setmidterm(double score) 
    { 
        midterm = score; 
    }
    void setfin(double score) 
    { 
        fin = score; 
    }
  
    double getquiz1() 
    { 
        return quiz1; 
    }
    double getquiz2() 
    { 
        return quiz2; 
    }
    double getmidterm() 
    { 
        return midterm; 
    }
    double getfin() 
    { 
        return fin; 
    }
    double getavg() 
    { 
        return avg; 
    }

    void itiswhatitis()
    {
        avg = (((quiz1 + quiz2)/20)*.25 + (midterm/100)*.25 + (fin/100)*.5)*100; 
    }
};

int main()
{
    StudentRecord grade;
    double input;
    cout << "Enter the grade for your first quiz out of 10: ";
    cin >> input;
    if (input > 10)
    {
        cout << "You entered an invalid score\n";
        exit(1);
    }
    grade.setquiz1(input);
    cout << "Enter the grade for your second quiz out of 10: ";
    cin >> input;
    if (input > 10)
    {
        cout << "You entered an invalid score\n";
        exit(1);
    }
    grade.setquiz2(input);
    cout << "Enter the grade for your midterm out of 100: ";
    cin >> input;
    if (input > 100)
    {
        cout << "You entered an invalid score\n";
        exit(1);
    }
    grade.setmidterm(input);
    cout << "Enter the grade for your final out of 100: ";
    cin >> input;
    if (input > 100)
    {
        cout << "You entered an invalid score\n";
        exit(1);
    }
    grade.setfin(input);
    grade.itiswhatitis();
    cout << "Here is your final grade for the class: ";
    cout << grade.getavg();
}

/* Console Output
    Test case 1
Enter the grade for your first quiz out of 10: 10
Enter the grade for your second quiz out of 10: 10
Enter the grade for your midterm out of 100: 100
Enter the grade for your final out of 100: 100
Here is your final grade for the class: 100
    Test case 2
Enter the grade for your first quiz out of 10: 5
Enter the grade for your second quiz out of 10: 5
Enter the grade for your midterm out of 100: 50
Enter the grade for your final out of 100: 50\
Here is your final grade for the class: 50
    Test case 3
Enter the grade for your first quiz out of 10: 8
Enter the grade for your second quiz out of 10: 9
Enter the grade for your midterm out of 100: 97
Enter the grade for your final out of 100: 68
Here is your final grade for the class: 79.5
*/