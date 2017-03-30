#include "GioiTinh.h"
#include <iostream>
using namespace std;

CGioiTinh::CGioiTinh()
{
}

CGioiTinh::~CGioiTinh()
{
}

int CGioiTinh::getGioiTinh()
{
	return GioiTinh;
}

void CGioiTinh::setGioiTinh(int GioiTinhMoi)
{
	GioiTinh = GioiTinhMoi;
}

void CGioiTinh::Nhap()
{
	do {
		cout << "Nhap gioi tinh (1-Nam; 2-Nu; 3-Khac): ";
		cin >> GioiTinh;
	} while (GioiTinh <= 0 || GioiTinh > 3);
}

void CGioiTinh::Xuat()
{
	switch (GioiTinh)
	{
	case 1:
	{
		cout << "Nam";
		break;
	}

	case 2:
	{
		cout << "Nu";
		break;
	}

	case 3:
	{
		cout << "Khac";
		break;
	}
	}
}