#include <iostream>
#include <string>
using namespace std;
void hello_name(string name)
{
    cout << "Hello " << name << "!" << endl;
}
void abba(string one, string two)
{
    cout << one << two << two << one << endl;
}
void tag(string one, string two)
{
    cout << "<" << one << ">";
    cout << two;
    cout << "</" << one << ">" << endl;
}
void middle(string one, string two)
{
    int half = (one.length() / 2);
    int otherhalf = one.length() - half;
    cout << one.substr(0, half);
    cout << two;
    cout << one.substr(half, otherhalf) << endl;
}
void xtra(string one)
{
    cout << one.substr(one.length() - 2, 2) << one.substr(one.length() - 2, 2) << one.substr(one.length() - 2, 2) << endl;
}
void firsttwo(string one)
{
    if (one.length() < 2)
    {
        cout << one << endl;
    }
    else
    {
        cout << one.substr(0, 2) << endl;
    }
}
void nofol(string one)
{
    cout << one.substr(1, one.length() - 2) << endl;
}
void twigs(string one, string two)
{
    int shlong = one.length();
    int magnumshlong = two.length();
    if (shlong > magnumshlong)
    {
        cout << two << one << two << endl;
    }
    else 
    {
        cout << one << two << one << endl;
    }
}
void sticks(string one, string two)
{
    cout << one.substr(1, one.length() - 1) << two.substr(1, two.length() - 1) << endl;
}
void rotate(string one)
{
    if (one.length() < 3)
    {
        cout << one;
    }
    else
    { 
        cout << one.substr(2, one.length() - 2) << one.substr(0, 2) << endl;
    }
}
void jarule(string one, bool fyrefestival)
{
    if (fyrefestival == true)
    {
        cout << one.substr(0, 1) << endl;
    }
    else
    {
        cout << one.substr(one.length() - 1, 1) << endl;
    }
}
void stringss(string one)
{
    int half = (one.length() / 2);
    cout << one.substr(half-1, 2) << endl;
}
void bigbooty(string one)
{
    if (one.substr(one.length() - 2, 2) == "og")
    {
        cout << true << endl;
    }
    else
    {
        cout << false << endl;
    }
}
void pimpmywheel(string one)
{
    string search = "abc";
    if (one.find(search) == 0 || one.find(search) == 1)
    {
        cout << true << endl;
    }
    else
    {
        cout << false << endl;
    }
}
void babymomma(string one)
{
    for (int i = 0; i < one.length(); i++)
    {
        cout << one[i] << one[i];
    }
    cout << endl;
}
void babydaddy(string one)
{
    string search = "hi";
    int count = 0;
    for (int i = 0; i < one.length()-1; i++)
    {
        if (one.substr(i, 2) == search)
        {
            count++;
        }
    }
    cout << count << endl;
}
void theworstone(string one)
{
    int sum = 0;
    for (int i = 0; i < one.length() - 1; i++)
    {
        if (isdigit(one[i]))
        {
            sum += one[i] - '0';
        }
    }
    cout << sum;
}
int main()
{
    string test = "Junkook";
    hello_name(test);
    abba(test, "Jimin");
    tag("header", "urmom<3");
    middle(test, "B.T.S"); 
    xtra(test);
    firsttwo("urmom");
    nofol("ooooog gaa boo gaa oog oog boog ga goo boogg");
    twigs("Xx", "bigbootybitchez");
    sticks("skuh uh", "money add then multiply");
    rotate("bigbootybitchez");
    jarule("BillyMcFarland", true);
    stringss("whyh");
    bigbooty("oogaboaog");
    pimpmywheel("jasdfsabc");
    babymomma("checkurself");
    babydaddy("fasfhiahi"); // 0f1a2s3f4h5i6a7h8i -> the index corresponds to the letter on its right
    theworstone("1a2b3c");
}