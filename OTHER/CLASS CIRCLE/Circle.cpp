#include "Circle.h"
#include <iostream>
#include <cmath>
using namespace std;

bool CCircle::HopLe()
{
	float c = sqrt(abs(BanTrucLon*BanTrucLon - BanTrucNho*BanTrucNho));
	float e = c / BanTrucLon;

	if (e == 0)
		return true;
	else
		return false;
}

CCircle::CCircle()
{
}

CCircle::CCircle(float BanKinh)
{
	BanTrucLon = BanTrucNho = BanKinh;
}

CCircle::~CCircle()
{
}

void CCircle::Nhap()
{
	do {
		cout << "NHAP THONG TIN CUA HINH TRON" << endl;
		cout << "------------------------------------" << endl;
		Tam.Nhap();

		float BanKinh;
		cout << "+ Nhap do dai ban kinh: ";
		cin >> BanKinh;
		BanTrucLon = BanTrucNho = BanKinh;
	} while (HopLe() == false);
}

void CCircle::HienThiTinhChat()
{
	system("cls");
	cout << "THONG TIN CUA HINH TRON VUA NHAP" << endl;
	cout << "------------------------------------" << endl;
	cout << "+ Toa do tam: O";
	Tam.Xuat();
	cout << "+ Do dai ban kinh: R = " << BanTrucLon << endl;
	cout << "------------------------------------" << endl;
}