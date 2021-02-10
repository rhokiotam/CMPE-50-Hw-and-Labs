#include <iostream>
using namespace std;
template <class T>
class SafeArray
{
private:
    int length;
    T* bruh;
    T moment;
public:
    SafeArray(T yuh)
    {
        length = 6;
        moment = yuh;
        bruh = new T[length];
    }
    SafeArray(int input,T yuh)
    {
        length = input;
        moment = yuh;
        bruh = new T[length];
    }
    T& operator[](int i)
    {
        if (i < 5 && i >= 0)
        {
            return bruh[i];
        }
        else
        {
            cout << "Attempted to access invalid index." << endl;
            T t{};
            return t;
        }
        //return bruh[i];
    }
};
void checkbts(string a)
{
    try
    {
        if (a != "Junkook" && a != "Jimin" && a != "JHope" && a != "Jin" && a != "RM" && a != "V" && a != "Suga")
        {
            throw a;
        }
        else
        {
            cout << "I luhvu BTSu!" << endl;
        }
    }
    catch (const string& e)
    {
        cout << "You fake STAN-ARMY!" << endl;
    }
}
int main()
{
    string bts;
    cout << "Name a member of BTS :)" << endl;
    cin >> bts;
    checkbts(bts);
    SafeArray<int> ahha(5, -1);
    ahha[0] = 3;
    ahha[1] = 4;
    ahha[2] = 420;
    ahha[3] = 69;
    ahha[4] = 13;
    for (int i = 0; i < 6; i++)
    {
        cout << ahha[i] << " ";
    }
    cout << endl;
}