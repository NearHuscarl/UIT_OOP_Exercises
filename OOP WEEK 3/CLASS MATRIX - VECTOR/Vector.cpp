#include "Vector.h"
#include <iostream>
using namespace std;

Vector::Vector()
{
}

Vector::Vector(const Vector &a)
{
	n = a.n;
	coords = new int[n];
	for (int i = 0; i < n; i++)
	{
		coords[i] = a.coords[i];
	}
}

Vector::~Vector()
{
	delete[] coords;
}

int Vector::getN()
{
	return n;
}

void Vector::input()
{
	cout << "- Number of dimension(s): ";
	cin >> n;

	coords = new int[n];
	for (int i = 0; i < n; i++)
	{
		cout << "- Coordinate " << i + 1 << ": ";
		cin >> coords[i];
	}
}

void Vector::output()
{
	cout << "(";
	for (int i = 0; i < n; i++)
	{
		if (i != n - 1)
			cout << coords[i] << ", ";
		else
			cout << coords[i];
	}
	cout << ")" << endl;
}

Vector Vector::add(Vector b)
{
	Vector sum(*this);
	for (int i = 0; i < n; i++)
	{
		sum.coords[i] += b.coords[i];
	}
	return sum;
}

Vector Vector::subtract(Vector b)
{
	Vector diff(*this);
	for (int i = 0; i < n; i++)
	{
		diff.coords[i] -= b.coords[i];
	}
	return diff;
}

Vector Vector::multiplyWithNumber(int k)
{
	Vector product(*this);
	for (int i = 0; i < n; i++)
	{
		product.coords[i] *= k;
	}
	return product;
}

int Vector::getScalarProduct(Vector b)
{
	int result = 0;
	for (int i = 0; i < n; i++)
	{
		result += (coords[i] * b.coords[i]);
	}
	return result;
}