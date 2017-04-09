#include "CongNhan.h"
#include <iostream>
#include <string>
using namespace std;

CCongNhan::CCongNhan()
{
}

CCongNhan::~CCongNhan()
{
}

string CCongNhan::getMaSo()
{
	return MaSo;
}

void CCongNhan::setMaSo(string MaSoMoi)
{
	MaSo = MaSoMoi;
}

double CCongNhan::getLuongThang()
{
	return LuongThang;
}

void CCongNhan::setLuongThang(double MucLuong)
{
	LuongThang = MucLuong;
}

void CCongNhan::Nhap()
{
	CNguoi::Nhap();

	fflush(stdin);
	cout << "+ Nhap ma so: ";
	getchar();
	getline(cin, MaSo);

	cout << "+ Nhap muc luong hang thang: ";
	cin >> LuongThang;
}

void CCongNhan::Xuat()
{
	CNguoi::Xuat();
	cout << "+ Ma so: " << MaSo << endl;
	cout << "+ Muc luong hang thang: " << LuongThang << endl;
}