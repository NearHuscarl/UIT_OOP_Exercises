#include "HocSinh.h"
#include <iostream>
#include <string>
using namespace std;

CHocSinh::CHocSinh()
{
}

CHocSinh::~CHocSinh()
{
}

string CHocSinh::getTruong()
{
	return string();
}

void CHocSinh::setTruong(string TenTruong)
{
	Truong = TenTruong;
}

int CHocSinh::getKhoiLop()
{
	return KhoiLop;
}

void CHocSinh::setKhoiLop(int Khoi)
{
	KhoiLop = Khoi;
}

float CHocSinh::getDiemTrungBinh()
{
	return DiemTrungBinh;
}

void CHocSinh::setDiemTrungBinh(float DTB)
{
	DiemTrungBinh = DTB;
}

void CHocSinh::Nhap()
{
	CNguoi::Nhap();

	fflush(stdin);
	cout << "Nhap ten truong: ";
	getchar();
	getline(cin, Truong);
	
	cout << "Nhap khoi lop: ";
	cin >> KhoiLop;

	cout << "Nhap diem trung binh: ";
	cin >> DiemTrungBinh;
}

void CHocSinh::Xuat()
{
	CNguoi::Xuat();

	cout << "Truong: " << Truong << endl;
	cout << "Lop: " << KhoiLop << endl;
	cout << "Nhap diem trung binh: " << DiemTrungBinh << endl;
}