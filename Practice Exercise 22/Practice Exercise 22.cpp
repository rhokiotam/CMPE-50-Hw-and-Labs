#include <iostream>
#include <string>
using namespace std;
class InvalidTime
{
private:
    string message;
public:
    InvalidTime()
    {
        message = "An error occurred";
    }
    InvalidTime(string a)
    {
        message = a;
    }
    string get_message()
    {
        return message;
    }
};
string conversion(string bruh)
{
    try
    {
        if (bruh.length() != 5)
        {
            throw InvalidTime("That is not a time.");
        }
        if (bruh.substr(2, 1) != ":" || !isdigit(bruh.at(0)) || !isdigit(bruh.at(1)) || !isdigit(bruh.at(3)) || !isdigit(bruh.at(4)))
        {
            throw InvalidTime("What you entered is the wrong format. The format is HH:MM.");
        }
        if (stoi(bruh.substr(0, 2)) < 0 || stoi(bruh.substr(0, 2)) > 23 || stoi(bruh.substr(3, 2)) < 0 || stoi(bruh.substr(3, 2)) > 59)
        {
            throw InvalidTime("You entered and hours or minutes out of bounds: " + bruh);
        }
        int dubski = stoi(bruh.substr(0, 2));
        if (dubski > 12)
        {

            int convert = dubski % 12;
            string temp = to_string(convert);
            string stronk = temp + bruh.substr(2, 3) + " p.m";
            bruh = stronk;
        }
        else if (dubski < 12)
        {
            int convert = dubski % 12;
            string temp = to_string(convert);
            string stronk = temp + bruh.substr(2, 3) + " a.m";
            bruh = stronk;
        }
        else if (dubski == 12)
        {
            bruh = bruh + " p.m.";
        }
        else if (dubski == 0)
        {
            bruh = "12" + bruh.substr(1, 3) + " a.m.";
        }
        return bruh;
    }
    catch (InvalidTime& e)
    {
        cout << e.get_message();
    }
}
string eeyuck(string bruh)
{
    try
    {
        if (bruh.length() != 5)
        {
            throw bruh;
        }
        if (bruh.substr(2, 1) != ":" || !isdigit(bruh.at(0)) || !isdigit(bruh.at(1)) || !isdigit(bruh.at(3)) || !isdigit(bruh.at(4)))
        {
            throw bruh;
        }
        if (stoi(bruh.substr(0, 2)) < 0 || stoi(bruh.substr(0, 2)) > 23 || stoi(bruh.substr(3, 2)) < 0 || stoi(bruh.substr(3, 2)) > 59)
        {
            throw bruh;
        }
        int dubski = stoi(bruh.substr(0, 2));
        if (dubski > 12)
        {

            int convert = dubski % 12;
            string temp = to_string(convert);
            string stronk = temp + bruh.substr(2, 3) + " p.m";
            bruh = stronk;
        }
        else if (dubski < 12)
        {
            int convert = dubski % 12;
            string temp = to_string(convert);
            string stronk = temp + bruh.substr(2, 3) + " a.m";
            bruh = stronk;
        }
        else if (dubski == 12)
        {
            bruh = bruh + " p.m.";
        }
        else if (dubski == 0)
        {
            bruh = "12" + bruh.substr(1, 3) + " a.m.";
        }
        return bruh;
    }
    catch (const string &bruh)
    {
        cout << "The format of your time was invalid: " + bruh;
    }
    return "";
}
int main()
{
    string time;
    cout << "Enter a 24-hour time to be converted into 12-hour time" << endl;
    cin >> time;
    //cout << conversion(time) << endl;
    cout << eeyuck(time);
}
