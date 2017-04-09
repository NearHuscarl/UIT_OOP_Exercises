#include "Nguoi.h"
#include <iostream>
using namespace std;

CNguoi::CNguoi()
{
}

CNguoi::~CNguoi()
{
}

string CNguoi::getTen()
{
	return HoTen;
}

void CNguoi::setTen(string TenMoi)
{
	HoTen = TenMoi;
}

int CNguoi::getTuoi()
{
	return Tuoi;
}

void CNguoi::setTuoi(int TuoiMoi)
{
	Tuoi = TuoiMoi;
}

string CNguoi::getNoiSinh()
{
	return NoiSinh;
}

void CNguoi::setNoiSinh(int NoiSinhMoi)
{
	NoiSinh = NoiSinhMoi;
}

void CNguoi::Nhap()
{
	cout << "+ Nhap ho va ten: ";
	getchar();
	getline(cin, HoTen);

	cout << "+ Nhap tuoi: ";
	cin >> Tuoi;

	GioiTinh.Nhap();
	NgaySinh.Nhap();
}

void CNguoi::Xuat()
{
	cout << "+ Ho va ten: " << HoTen << endl;
	cout << "+ Tuoi: " << Tuoi << endl;
	cout << "+ Gioi tinh: ";
	GioiTinh.Xuat();
	cout << endl;
	cout << "+ Ngay/ Thang/ Nam sinh: ";
	NgaySinh.Xuat();
}