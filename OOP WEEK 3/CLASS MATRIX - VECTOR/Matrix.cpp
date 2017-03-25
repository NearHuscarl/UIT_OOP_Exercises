#include "Matrix.h"
#include "Vector.h"
#include <iostream>
using namespace std;

Matrix::Matrix()
{
}

Matrix::Matrix(int rows, int cols)
{
	m = rows;
	n = cols;

	elements = new double*[m];
	for (int i = 0; i < m; i++)
	{
		elements[i] = new double[n];
	}
}

Matrix::Matrix(const Matrix & a)
{
	m = a.m;
	n = a.n;

	elements = new double*[m];
	for (int i = 0; i < m; i++)
	{
		elements[i] = new double[n];
		for (int j = 0; j < n; j++)
		{
			elements[i][j] = a.elements[i][j];
		}
	}
}

Matrix::~Matrix()
{
}

int Matrix::getM()
{
	return m;
}

int Matrix::getN()
{
	return n;
}

void Matrix::input()
{
	cout << "+ Number of row(s): ";
	cin >> m;
	cout << "+ Number of column(s): ";
	cin >> n;

	elements = new double*[m];
	for (int i = 0; i < m; i++)
	{
		elements[i] = new double[n];
	}

	cout << "---------------------------------------" << endl;
	for (int x = 0; x < m; x++)
	{
		for (int y = 0; y < n; y++)
		{
			cout << "+ Value at A[" << x << "][" << y << "]: ";
			cin >> elements[x][y];
		}
	}
}

void Matrix::output()
{
	for (int i = 0; i < m; i++)
	{
		cout << "[";
		for (int j = 0; j < n; j++)
		{
			if (j != n - 1)
				cout << elements[i][j] << "\t";
			else
				cout << elements[i][j];
		}
		cout << "]";
		cout << endl;
	}
}

Matrix Matrix::add(Matrix b)
{
	Matrix sum(*this);
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			sum.elements[i][j] += b.elements[i][j];
		}
	}
	return sum;
}

Matrix Matrix::substract(Matrix b)
{
	Matrix diff(*this);
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			diff.elements[i][j] -= b.elements[i][j];
		}
	}
	return diff;
}

Matrix Matrix::multiplyWithNumber(int k)
{
	Matrix product(*this);
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			product.elements[i][j] *= k;
		}
	}
	return product;
}

Matrix Matrix::multiplyWithMatrix(Matrix b)
{
	Matrix product(m, b.n);
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < b.n; j++)
		{
			int sum = 0;
			for (int k = 0; k < n; k++)
			{
				sum += (elements[i][k] * b.elements[k][j]);
				product.elements[i][j] = sum;
			}
		}
	}
	return product;
}

Matrix Multiply(const Matrix & m, const Vector & v)
{
	Matrix product(m);
	for (int i = 0; i < m.m; i++)
	{
		for (int j = 0; j < m.n; j++)
		{
			product.elements[i][j] *= v.coords[j];
		}
	}
	return product;;
}