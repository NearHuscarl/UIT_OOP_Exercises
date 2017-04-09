#include "Diem.h"
#include <iostream>
using namespace std;

Diem::Diem(void)
{
	x = 0;
	y = 0;
}

Diem::Diem(float a, float b)
{
	x = a;
	y = b;
}

Diem::~Diem(void)
{
}

void Diem::setX(float a)
{
	x = a;
}

void Diem::setY(float a)
{
	y = a;
}

void Diem::setXY(float a, float b)
{
	setX(a);
	setY(b);
}

float Diem::getX()
{
	return x;
}

float Diem::getY()
{
	return y;
}

void Diem::Nhap()
{
	cout << "+ Nhap hoanh do: ";
	cin >> x;
	cout << "+ Nhap tung do: ";
	cin >> y;
}

void Diem::TinhTien(float dx, float dy)
{
	x = x + dx;
	y = y + dy;
}

void Diem::Xuat()
{
	cout << "(" << x << "," << y << ")" << endl;
}