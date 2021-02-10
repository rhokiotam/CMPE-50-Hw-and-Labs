#include <iostream>
#include <string>
using namespace std;
class InvalidDate
{
private:
    string message;
public:
    InvalidDate()
    {
        message = "An error occured";
    }
    InvalidDate(string a)
    {
        message = a;
    }
    string get_message()
    {
        return message;
    }
};

string conversion(string date)
{
    try
    {
        if (date.length() != 5)
        {
            throw InvalidDate("You have not entered a date: " + date);
        }
        else if (!isdigit(date[0]) || !isdigit(date[1]) || date[2] != '/' || !isdigit(date[3]) || !isdigit(date[4]))
        {
            throw InvalidDate("You have entered an invalid format. Format is MM/DD. Your input was: " + date);
        }
        else if (stoi(date.substr(0, 2)) < 0 || stoi(date.substr(0, 2)) > 12 || stoi(date.substr(3, 2)) < 0 || stoi(date.substr(3, 2)) > 30)
        {
            throw InvalidDate("You have entered a date out of range: " + date);
        }
        int convert = stoi(date.substr(0, 2));
        if (convert == 1)
        {
            date = "The converted date is January " + date.substr(3, 2);
        }
        else if (convert == 2)
        {
            date = "The converted date is February " + date.substr(3, 2);
        }
        else if (convert == 3)
        {
            date = "The converted date is March " + date.substr(3, 2);
        }
        else if (convert == 4)
        {
            date = "The converted date is April " + date.substr(3, 2);
        }
        else if (convert == 5)
        {
            date = "The converted date is May " + date.substr(3, 2);
        }
        else if (convert == 6)
        {
            date = "The converted date is June " + date.substr(3, 2);
        }
        else if (convert == 7)
        {
            date = "The converted date is July " + date.substr(3, 2);
        }
        else if (convert == 8)
        {
            date = "The converted date is August " + date.substr(3, 2);
        }
        else if (convert == 9)
        {
            date = "The converted date is September " + date.substr(3, 2);
        }
        else if (convert == 10)
        {
            date = "The converted date is October " + date.substr(3, 2);
        }
        else if (convert == 11)
        {
            date = "The converted date is November " + date.substr(3, 2);
        }
        else if (convert == 12)
        {
            date = "The converted date is December " + date.substr(3, 2);
        }
        return date;
    }
    catch (InvalidDate& e)
    {
       cout << e.get_message();
    }
}
int main()
{
    string input;
    cout << "Enter a date in the format MM/DD like on your credit card: ";
    cin >> input;
    cout << conversion(input) << endl;
}