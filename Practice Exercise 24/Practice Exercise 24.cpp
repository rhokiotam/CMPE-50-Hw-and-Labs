#include <iostream>
#include <vector>
#include <string>
using namespace std;
template <class T>
class WincoDeli
{
private:
    vector<T> queue;
public:
    void addqueue(T& t)
    {
        queue.push_back(t);
    }
    T removefront()
    {
        T frontperson = queue[0];
        for (int i = 0; i < queue.size() - 1; i++)
        {
            queue[i] = queue[i + 1];
        }
        queue.pop_back();
        return frontperson;
    }
    //cutters
    //chooseperson
};
int main()
{
    WincoDeli<string> BTS;
    int length;
    cout << "What is the length of the line?" << endl;
    cin >> length;
    string input;
    for (int i = 0; i < length; i++)
    {
        cin >> input;
        BTS.addqueue(input);
    }
    cout << BTS.removefront();
}