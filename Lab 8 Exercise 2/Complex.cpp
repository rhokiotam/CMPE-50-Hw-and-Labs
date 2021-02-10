/*
Complex.cpp
Created on : November 10, 2020
Author : Rhonel Tamargo
*/
#include <iostream>
#include "Complex.h"
Complex::Complex()
{
	real = 0;
	imaginary = 0;
}
Complex::Complex(double a, double b)
{
	real = a;
	imaginary = b;
}
Complex::Complex(double real_part)
{
	real = real_part;
	imaginary = 0;
}
Complex operator+(const Complex& a, const Complex& b)
{
	Complex sum;
	sum.real = a.real + b.real;
	sum.imaginary = a.imaginary + b.imaginary;
	return sum;
}
Complex operator-(const Complex& a, const Complex& b)
{
	Complex diff;
	diff.real = a.real - b.real;
	diff.imaginary = a.imaginary - b.imaginary;
	return diff;
}
Complex operator*(const Complex& a, const Complex& b)
{
	Complex product;
	product.real = a.real * b.real - a.imaginary * b.imaginary;
	product.imaginary = a.real * b.imaginary + b.real * a.imaginary;
	return product;
}
bool operator==(const Complex& a, const Complex& b)
{
	if (a.real == b.real && a.imaginary == b.imaginary)
	{
		cout << "The complex numbers are the same\n";
		return true;
	}
	else
	{
		cout << "The complex numbers are not the same\n";
		return false;
	}
}
ostream& operator<<(ostream& out, const Complex& a)
{
	out << a.real << " + " << a.imaginary << " * i";
	return out;
}
istream& operator>>(istream& in, Complex& a)
{
	in >> a.real >> a.imaginary;
	return in;
}