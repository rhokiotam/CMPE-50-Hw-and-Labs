#include <iostream>
#include <string>
#include "Administrator.h"
using namespace std;
Administrator::Administrator() : SalariedEmployee()
{
    title = "unassigned title";
    responsibility = "unassigned responsibility";
    immediatesupervisor = "unassigned immediate supervisor";
}
Administrator::Administrator(string the_name, string the_number, double the_weekly_salary, string thetitle, string theresponsibility, string theimmediatesupervisor)
    : SalariedEmployee(the_name, the_number, the_weekly_salary)
{
    title = thetitle;
    responsibility = theresponsibility;
    immediatesupervisor = theimmediatesupervisor;
}
void Administrator::set_supervisor(string supervisor)
{
    immediatesupervisor = supervisor;
}
void Administrator::readadmindata()
{
    cin >> title >> responsibility;
}
void Administrator::print()
{
    cout << "Title: " << title << endl;
    cout << "Responsibility: " << responsibility << endl;
    cout << "Immediate Supervisor: " << immediatesupervisor << endl;
}
void Administrator::print_check()
{
    set_net_pay(salary);
    cout << "\n__________________________________________________\n";
    cout << "Pay to the order of " << get_name() << endl;
    cout << "The sum of " << get_net_pay() << " Dollars\n";
    cout << "_________________________________________________\n";
    cout << "Check Stub NOT NEGOTIABLE \n";
    cout << "Employee Number: " << get_ssn() << endl;
    cout << "Administrator. Regular Pay: "
        << salary << endl;
    cout << "_________________________________________________\n";
}