#ifndef ADMINISTRATOR_H
#define ADMINISTRATOR_H
#include <iostream>
#include <string>
#include "salariedemployee.h"
using namespace std;
class Administrator : public SalariedEmployee
{
private:
	string title;
	string responsibility;
	string immediatesupervisor;
public:
	Administrator();
	Administrator(string the_name, string the_number, double the_weekly_salary, string thetitle, string theresponsibility, string theimmediatesupervisor);
	void set_supervisor(string supervisor);
	void readadmindata();
	void print();
	void print_check();
};

#endif