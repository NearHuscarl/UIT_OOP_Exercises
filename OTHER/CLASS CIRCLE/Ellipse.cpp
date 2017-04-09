#include "Ellipse.h"
#include <iostream>
#include <cmath>
using namespace std;

bool CEllipse::isHopLe()
{
	float c = sqrt(abs(BanTrucLon*BanTrucLon - BanTrucNho*BanTrucNho));
	float e = c / BanTrucLon;

	if (0 <= e && e < 1)
		return true;
	else
		return false;
}

CEllipse::CEllipse()
{
}

CEllipse::CEllipse(CDiem tdTam, float bTrucLon, float bTrucNho)
{
	Tam = tdTam;
	BanTrucLon = bTrucLon;
	BanTrucNho = bTrucNho;
}

CEllipse::~CEllipse()
{
}

void CEllipse::Nhap()
{
	do {
		cout << "NHAP THONG TIN CUA HINH ELIP";
		cout << "------------------------------------" << endl;
		Tam.Nhap();

		cout << "+ Nhap do dai ban truc lon: ";
		cin >> BanTrucLon;

		cout << "+ Nhap do dai ban truc nho: ";
		cin >> BanTrucNho;
	} while (isHopLe() == false);
}

void CEllipse::HienThiTinhChat()
{
	system("cls");
	cout << "THONG TIN CUA HINH ELIP VUA NHAP" << endl;
	cout << "------------------------------------" << endl;
	cout << "+ Toa do tam: O";
	Tam.Xuat();
	cout << "+ Do dai ban truc lon: " << BanTrucLon << endl;
	cout << "+ Do dai ban truc nho: " << BanTrucNho << endl;
	cout << "------------------------------------" << endl;
}
