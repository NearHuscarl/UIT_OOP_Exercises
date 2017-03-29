#include "DSTrieuChung.h"
#include <iostream>
#include <string>

DSTrieuChung::DSTrieuChung()
{
}

DSTrieuChung::~DSTrieuChung()
{
}

int DSTrieuChung::getSoLuong()
{
	return SoLuong;
}

void DSTrieuChung::Nhap()
{
	cout << "+ Nhap so luong trieu chung: ";
	cin >> SoLuong;

	DanhSach = new TrieuChung[SoLuong];

	cout << "+ Nhap danh sach cac trieu chung" << endl;
	for (int i = 0; i < SoLuong; i++)
	{
		cout << "   * TRIEU CHUNG THU " << i + 1 << endl;
		DanhSach[i].Nhap();
	}
}

void DSTrieuChung::Xuat()
{
	for (int i = 0; i < SoLuong; i++)
	{
		DanhSach[i].Xuat();
	}
}
