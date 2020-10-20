/*===============================================================================================================
Name: Lab_6.cpp
Author: Rhonel Tamargo
Copyright: Copyright 2020 @ Rhonel Tamargo
Description: Excercise 1
=================================================================================================================*/
#include <iostream>
using namespace std;
class Resource {
private:
    int status;
    int writeTo;
public:
    Resource()
    {
        status = 0;
        writeTo = 0;
    }
    Resource(int a) 
    {
        status = 0;
        writeTo = a;
    }
    int setStatus(int b)
    {
        status = b;
        if (status != 0 && status != 1)
        {
            cout << "The value you entered is out of bounds. Enter a 1 or 0";
        }
        return 0;

    }
    int setwriteTo(int c)
    {
        writeTo = c;
    }
    int getStatus()
    {
        return status;
    }
    int getwriteTo()
    {
        return writeTo;
    }
    void output(ostream &out_stream)
    {
        out_stream << status;
    }
    friend bool check_status(Resource &res1, Resource &res2)
    {
        if (res1.status == 1 && res2.status == 1)
        {
            cout << "Resource Available";
            return true;
        }
        else
        {
            cout << "Resource Unavailable";
            return false;
        }
    }
};
int main()
{
    Resource res1, res2(1);
    cout << "The status of resource 1 is: ";
    res1.output(cout);
    cout << "\n";
    cout << "The status of resource 2 is: ";
    res2.output(cout);
    cout << "\n";
    res1.setStatus(0);
    cout << "The status of resource 1 is: ";
    res1.output(cout);
    cout << "\n";
    res2.setStatus(1);
    cout << "The status of resource 2 is: ";
    res2.output(cout);
    cout << "\n";
    check_status(res1, res2);
}

/* Console Output
Case Test 1 
The status of resource 1 is: 0
The status of resource 2 is: 0
The status of resource 1 is: 1
The status of resource 2 is: 1
Resource Available

Case Test 2
The status of resource 1 is: 0
The status of resource 2 is: 0
The status of resource 1 is: 0
The status of resource 2 is: 1
Resource Unavailable

Case Test 3
The status of resource 1 is: 0
The status of resource 2 is: 0
The status of resource 1 is: 1
The status of resource 2 is: 0
Resource Unavailable

Case Test 4
The status of resource 1 is: 0
The status of resource 2 is: 0
The status of resource 1 is: 0
The status of resource 2 is: 0
Resource Unavailable
*/