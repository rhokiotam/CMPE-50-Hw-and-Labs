/*===============================================================================================================
Name: Lab_5.cpp
Author: Rhonel Tamargo
Copyright: Copyright 2020 @ Rhonel Tamargo
Description: Excercise 2
=================================================================================================================*/
#include <iostream>
using namespace std;
class CounterType 
{
    private:
        int count;
    public:
        CounterType ()
        {
            count = 0;
        }
        CounterType(int b)
        {
            count = b;
        }
        void addOne()
        {
            count++;
        }
        void minusOne()
        {
            if (count > 0)
            {
                count--;
            }
            else
            {
                cout << "count cannot be negative\n";
            }
        }
        int getCountValue()
        {
            return count;
        }
        void output(ostream &f)
        {
            f << count << "\n";
        }

};
int main()
{
    int x;
    cout << "enter a positive number\n";
    cin >> x;
    CounterType y(x);
    y.addOne();
    y.output(cout);
    y.minusOne();
    y.output(cout);
    y.addOne();
    y.output(cout);
    y.addOne();
    y.output(cout);
    y.minusOne();
    y.output(cout);
}

/*Console Output
enter a positive number
4
5
4
5
6
5
*/