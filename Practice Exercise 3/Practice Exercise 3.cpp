/*
Define a class called Odometer that will be used to track fuel and mileage for
an automotive vehicle. Include private member variables to track the miles
driven and the fuel efficiency of the vehicle in miles per gallon. The class
should have a constructor that initializes these values to zero. Include a
member function to reset the odometer to zero miles, a member function
to set the fuel efficiency, a member function that accepts miles driven for a
trip and adds it to the odometer’s total, and a member function that returns
the number of gallons of gasoline that the vehicle has consumed since the
odometer was last reset.
Use your class with a test program that creates several trips with different
fuel efficiencies.
*/

#include <iostream>
using namespace std;
class Odometer {
private:
    int miles;
    int mpg;
public:
    Odometer ()
    {
    miles = 0;
    mpg = 0;
    }
    void resetOdometer()
    {
        miles = 0;
    }
    void setFuelEfficiency(int& a)
    {
        mpg = a;
    }
    int addOdometer(int& a)
    {
        miles += a;
        return miles;
    }
    double numberOfGallons()
    {
        double gals;
        gals = (double) miles / mpg;
        return gals;
    }
};
int main()
{
    Odometer trip;
    int a;
    cout << "Enter the mpg of the car" << endl;
    cin >> a;
    trip.setFuelEfficiency(a);
    cout << "Enter the number of miles you have driven" << endl;
    cin >> a;
    trip.addOdometer(a);
    cout << "Enter the number of miles you have driven in a different trip" << endl;
    cin >> a;
    trip.addOdometer(a);
    cout << "Here are the number of gallons that you have used over all trips: " << endl;
    cout << trip.numberOfGallons() << endl;
}