#ifndef STACK_H
#define STACK_H
#include <iostream>
using namespace std;
class Stack
{
private:
	double* value;
	int size;
	int maxSize;
public:
	Stack();
	Stack(int thismaxSize);
	Stack(const Stack& copy);
	~Stack();
	void operator =(const Stack& a);
	void addLast(double somevalue);
	double getLast();
	void deleteLast();
	bool isEmpty();
	friend ostream& operator<<(ostream& out, const Stack& a);
};

#endif