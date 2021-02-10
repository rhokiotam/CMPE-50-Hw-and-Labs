/*
 * Polynomial.cpp
 *
 *  Created on: Nov 10, 2020
 *      Author: Rhonel Tamargo
 */
#include <iostream>
#include <cmath>
#include "Polynomial.h"
using namespace std;
Polynomial::Polynomial()
{
	degree = 10;
	coeff = new double[degree + 1];
	for (int i = 0; i <= degree; i++)
	{
		coeff[i] = 0;
	}
}
Polynomial::Polynomial(int degr)
{
	degree = degr;
	coeff = new double[degree + 1];
	for (int i = 0; i <= degree; i++)
	{
		coeff[i] = 0;
	}
}
Polynomial::Polynomial(const Polynomial& poly)
{
	degree = poly.get_degree();
	coeff = new double[degree + 1];
	for (int i = 0; i <= degree; i++)
	{
		coeff[i] = poly.get_coeff(i);
	}
}
Polynomial::Polynomial(double cf[], int deg)
{
	degree = deg;
	coeff = new double[degree + 1];
	for (int i = 0; i <= degree; i++)
	{
		coeff[i] = cf[i];
	}
}
Polynomial::~Polynomial()
{
	delete[] coeff;
}
int Polynomial::get_degree() const
{
	return degree;
}
double Polynomial::get_coeff(int deg) const
{
	if (degree < deg)
	{
		return 0;
	}
	return coeff[deg];
}
void Polynomial::set_coeff(int degr, double val)
{
	if (degree < degr)
	{
		cout << "Degree exceeded." << endl;
		return;
	}
	coeff[degr] = val;
}
double Polynomial::evaluate(double val)
{
	double total = 0;
	for (int i = 0; i <= degree - 1; i++)
	{
		total += coeff[i] * pow(val, degree - i);
	}
	total += coeff[degree];
	return total;
}

void Polynomial::operator =(const Polynomial& poly)
{
	if (this == &poly)
	{
		return;
	}
	else
	{
		degree = poly.get_degree();
		delete[] coeff;
		coeff = new double[degree + 1];
		for (int i = 0; i <= degree; i++)
		{
			coeff[i] = poly.get_coeff(i);
		}
	}
}

Polynomial operator+(const Polynomial& pola, const Polynomial& polb)
{
	Polynomial sum;
	if (pola.degree > polb.degree)
	{
		sum = pola;
		for (int i = polb.degree; i >= 0; i--)
		{
			sum.coeff[sum.degree - i] += polb.coeff[polb.degree - i];
		}
	}
	else
	{
		sum = polb;
		for (int i = pola.degree; i >= 0; i--)
		{
			sum.coeff[sum.degree - i] += pola.coeff[pola.degree - i];
		}
	}
	return sum;
}
Polynomial operator+(const double constant, const Polynomial& polya)
{
	Polynomial sum;
	sum = polya;
	sum.coeff[sum.degree] += constant;
	return sum;
}
Polynomial operator+(const Polynomial& polya, const double constant)
{
	Polynomial sum;
	sum = polya;
	sum.coeff[sum.degree] += constant;
	return sum;
}
Polynomial operator-(const Polynomial& polya, const Polynomial& polyb)
{
	Polynomial diff;
	diff = polya;
	if (polya.degree < polyb.degree)
	{
		diff = Polynomial(polyb.degree); // uses Polynomial::Polynomial(int degr) to set the coeff values of the new object 'diff' all to zero
		diff = diff + polya; // takes the coeff values from polya and the overloaded operator+ to 'copy' the coeffs from polya to diff for subtraction
	}
	for (int i = polyb.degree; i >= 0; i--)
	{
		diff.coeff[diff.degree - i] -= polyb.coeff[polyb.degree - i]; // takes degree - i and polyb.degree - i to get the index to store the coeff value into the right 'degree'
	}
	return diff;
}
Polynomial operator-(const double constant, const Polynomial& polya)
{
	Polynomial diff;
	diff = polya;
	diff.coeff[diff.degree] -= constant;
	return diff;
}
Polynomial operator-(const Polynomial& polya, const double constant)
{
	Polynomial diff;
	diff = polya;
	diff.coeff[diff.degree] -= constant;
	return diff;
}
Polynomial operator*(const Polynomial& polya, const Polynomial& polyb)
{
	Polynomial product;  
	product.degree = polya.degree + polyb.degree;
	for (int i = 0; i <= polya.degree; i++)
	{
		for (int j =0; j <= polyb.degree; j++)
		{
			int index = product.degree - ((polya.degree - i) + (polyb.degree - j)); //stores the index of product. value is derived from adding the indexes of polya and polyb. subtracting from ints i and j respectively to associate the index with the right degree
			product.coeff[index] += (polya.coeff[i] * polyb.coeff[j]); // takes the index from the line before and multiplies the coeff values from polya and ployb to get the final coeff value for the multiplied polynomial
		}
	}
	return product;
}
Polynomial operator*(const double constant, const Polynomial& polya)
{
	Polynomial product;
	product = polya;
	for (int i = 0; i <= product.degree; i++)
	{
		product.coeff[i] *= constant;
	}
	return product;
}
Polynomial operator*(const Polynomial& polya, const double constant)
{
	Polynomial product;
	product = polya;
	for (int i = 0; i <= product.degree; i++)
	{
		product.coeff[i] *= constant;
	}
	return product;
}
ostream& operator << (ostream& ost, const Polynomial& pol)
{
	for (int i = 0; i < pol.degree; i++)
	{
		ost << pol.coeff[i] << "x^" << pol.degree - i << " + ";
	}
	ost << pol.coeff[pol.degree];
	return ost;
}