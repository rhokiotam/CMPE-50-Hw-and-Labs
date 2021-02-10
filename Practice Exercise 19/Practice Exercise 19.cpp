#include <iostream>
using namespace std;
template <class T>

void yuh(T *&var1, T *&var2)
{
    T *temp = var1;
    var1 = var2;
    var2 = temp;
}
int main()
{
    int *one, *two;
    one = new int;
    two = new int;
    *one = 1;
    *two = 2;
    cout << one << " " << two << endl;
    cout << *one << " " << *two << endl;
    yuh(one, two);
    cout << one << " " << two << endl;
    cout << *one << " " << *two << endl;
}