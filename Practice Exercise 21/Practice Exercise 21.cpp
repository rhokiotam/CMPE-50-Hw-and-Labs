#include <iostream>
#include <string>
using namespace std;
class TooLittleCokkies: public exception
{
private:
    int cokkies;
public:
    TooLittleCokkies(int coook)
    {
        cokkies = coook;
    }
    const char* what() const throw ()
    {
        return "You did not give cokkie monster enough cokkies!";
    }
};
class TooManyCokkies: public exception
{
private:
    int cokkies;
public:
    TooManyCokkies(int coook)
    {
        cokkies = coook;
    }
    const char* what() const throw()
    {
        return "You gave cokkie monster too many cokkies!";
    }
};
void cokkiemonster()
{
    int cokkies;
    cin >> cokkies;
    try
    {
        if (cokkies < 1)
        {
            throw TooLittleCokkies(cokkies);
        }
        if (cokkies > 10)
        {
            throw TooManyCokkies(cokkies);
        }
    }
    catch (const TooLittleCokkies& e)
    {
        cout << e.what();
    }
    catch (const TooManyCokkies& e)
    {
        cout << e.what();
    }
}
int main()
{
    cokkiemonster();
}

