/*
 * Polynomial.cpp
 *
 *  Created on: Nov 10, 2020
 *      Author: Rhonel Tamargo
 */
#ifndef POLYNOMIAL_H_
#define POLYNOMIAL_H_

#include <iostream>
using namespace std;
class Polynomial
{
public:
	Polynomial();
	Polynomial(int degr);
	Polynomial(const Polynomial& poly);
	Polynomial(double cf[], int degr);
	Polynomial(double ct);
	~Polynomial();
	int get_degree() const;
	double get_coeff(int index) const;
	void set_coeff(int index, double val);
	void operator = (const Polynomial& poly);
	friend Polynomial operator+(const Polynomial& polya, const Polynomial& polyb);
	friend Polynomial operator+(const double constant, const Polynomial& polya);
	friend Polynomial operator+(const Polynomial& polya, const double constant);
	friend Polynomial operator-(const Polynomial& polya, const Polynomial& polyb);
	friend Polynomial operator-(const double constant, const Polynomial& polya);
	friend Polynomial operator-(const Polynomial& polya, const double constant);
	friend Polynomial operator*(const Polynomial& polya, const Polynomial& polyb);
	friend Polynomial operator*(const double constant, const Polynomial& polya);
	friend Polynomial operator*(const Polynomial& polya, const double constant);
	friend ostream& operator << (ostream& ost, const Polynomial& pol);
	double evaluate(double val);
private:
	double* coeff;
	int degree;
};



#endif
