#include "Diem.h"
#include <iostream>
using namespace std;

CDiem::CDiem(void)
{
	x = 0;
	y = 0;
}

CDiem::CDiem(float a, float b)
{
	x = a;
	y = b;
}

CDiem::~CDiem(void)
{
}

void CDiem::setX(float a)
{
	x = a;
}

void CDiem::setY(float a)
{
	y = a;
}

void CDiem::setXY(float a, float b)
{
	setX(a);
	setY(b);
}

float CDiem::getX()
{
	return x;
}

float CDiem::getY()
{
	return y;
}

void CDiem::Nhap()
{
	cout << "Nhap hoanh do: ";
	cin >> x;
	cout << "Nhap tung do: ";
	cin >> y;
}

void CDiem::TinhTien(float dx, float dy)
{
	x = x + dx;
	y = y + dy;
}

void CDiem::Xuat()
{
	cout << "(" << x << "," << y << ")" << endl;
}
