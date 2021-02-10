#include "Stack.h"
#include <iostream>
using namespace std;
Stack::Stack()
{
	maxSize = 10;
	size = 0;  
	value = new double[maxSize];
}
Stack::Stack(int thismaxSize)
{
	maxSize = thismaxSize;
	size = 0;
	value = new double[maxSize];
}
Stack::Stack(const Stack& copy)
{
	maxSize = copy.maxSize;
	size = copy.size;
	value = new double[maxSize];
	for (int i = 0; i < maxSize; i++)
	{
		value[i] = copy.value[i];
	}
}
Stack::~Stack()
{
	delete[] value; 
}
void Stack::operator =(const Stack& a)
{
	if (this == &a)
	{
		return;
	}
	else
	{
		maxSize = a.maxSize;
		size = a.size;
		delete[] value;
		value = new double[maxSize];
		for (int i = 0; i < maxSize; i++)
		{
			value[i] = a.value[i];
		}
	}
}
void Stack::addLast(double somevalue)
{
	if (size >= maxSize)
	{
		Stack holder;
		holder = *this; 
		delete[] value;
		maxSize *= 2;
		value = new double[maxSize];
		for (int i = 0; i < holder.maxSize; i++)
		{
			value[i] = holder.value[i];
		}
	}
	value[size] = somevalue;
	size++;
}
double Stack::getLast()
{
	return value[size-1]; 
}
void Stack::deleteLast()
{
	value[size - 1] = 0;
	size--;
}
bool Stack::isEmpty()
{
	if (size == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
ostream& operator<<(ostream& out, const Stack& a)
{
	for (int i = 0; i < a.maxSize; i++)
	{
		out << a.value[i] << " ";
	}
	return out;
}