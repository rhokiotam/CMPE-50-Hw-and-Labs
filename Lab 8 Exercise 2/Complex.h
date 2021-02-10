/*
  complex_num.h
  Created on: November 10, 2020
  Author: Rhonel Tamargo
 */
#ifndef COMPLEX_H_
#define COMPLEX_H_
#include <iostream>
using namespace std;
class Complex
{
private:
	double real;
	double imaginary;
public:
	Complex();
	Complex(double a, double b);
	Complex(double real_part);
	friend Complex operator+(const Complex& a, const Complex& b);
	friend Complex operator-(const Complex& a, const Complex& b);
	friend Complex operator*(const Complex& a, const Complex& b);
	friend bool operator==(const Complex& a, const Complex& b);
	friend ostream& operator<<(ostream& out, const Complex& a);
	friend istream& operator>>(istream& in, Complex& a);
};
const Complex i(0, 1);
#endif