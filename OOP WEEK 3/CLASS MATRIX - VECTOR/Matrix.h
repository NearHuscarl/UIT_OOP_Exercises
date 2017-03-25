#pragma once
#include "Vector.h"
#include "Matrix.h"

class Vector;
class Matrix
{
private:
	int m;
	int n;
	double **elements;

public:
	Matrix();
	Matrix(int rows, int cols);
	Matrix(const Matrix &a);
	~Matrix();

	int getM();
	int getN();

	void input();
	void output();
	Matrix add(Matrix b);
	Matrix substract(Matrix b);
	Matrix multiplyWithNumber(int k);
	Matrix multiplyWithMatrix(Matrix b);
	friend Matrix Multiply(const Matrix &m, const Vector &v);
};