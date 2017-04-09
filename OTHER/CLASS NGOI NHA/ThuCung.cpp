#include "ThuCung.h"
#include <iostream>
#include <string>
using namespace std;

CThuCung::CThuCung()
{
}

CThuCung::CThuCung(string ten, int tuoi, float cannang)
{
	Ten = ten;
	Tuoi = tuoi;
	CanNang = cannang;
}

CThuCung::~CThuCung()
{
}

int CThuCung::getLoaiThuCung()
{
	return LoaiThuCung;
}

void CThuCung::setLoaiThuCung(int Loai)
{
	LoaiThuCung = Loai;
}

void CThuCung::Nhap()
{
	system("cls");
	cout << "NHAP THONG TIN CUA THU CUNG" << endl;
	cout << "-----------------------------------" << endl;
	fflush(stdin);
	cout << "+ Nhap ten: ";
	getchar();
	getline(cin, Ten);

	cout << "+ Nhap tuoi: ";
	cin >> Tuoi;

	cout << "+ Nhap can nang: ";
	cin >> CanNang;
}

void CThuCung::Xuat()
{
	cout << "+ Ten: " << Ten << endl;
	cout << "+ Tuoi: " << Tuoi << endl;
	cout << "+ Can nang: " << CanNang << endl;
}

float CThuCung::TinhTienAn()
{
	return 0.0f;
}