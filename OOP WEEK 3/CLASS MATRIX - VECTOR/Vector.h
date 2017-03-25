#pragma once
#include "Matrix.h"
#include "Vector.h"

class Matrix;
class Vector
{
private:
	int n;
	int *coords;

public:
	Vector();
	Vector(const Vector &a);
	~Vector();

	int getN();
	void input();
	void output();
	Vector add(Vector b);
	Vector subtract(Vector b);
	Vector multiplyWithNumber(int k);
	int getScalarProduct(Vector b);
	friend Matrix Multiply(const Matrix &product, const Vector &v);
};