#include "Ngay.h"
#include <iostream>
using namespace std;

CNgay::CNgay()
{
}

CNgay::CNgay(int n, int t, int N)
{
	Ngay = n;
	Thang = t;
	Nam = N;
}

CNgay::~CNgay()
{
}

int CNgay::getNgay()
{
	return Ngay;
}

int CNgay::getThang()
{
	return Thang;
}

int CNgay::getNam()
{
	return Nam;
}

void CNgay::setNgay(int n)
{
	Ngay = n;
}

void CNgay::setThang(int t)
{
	Thang = t;
}

void CNgay::setNam(int N)
{
	Nam = N;
}

void CNgay::Nhap()
{
	cout << "      + Nhap ngay: ";
	cin >> Ngay;
	cout << "      + Nhap thang: ";
	cin >> Thang;
	cout << "      + Nhap nam: ";
	cin >> Nam;
}

void CNgay::Xuat()
{
	cout << Ngay << "/" << Thang << "/" << Nam << endl;
}
