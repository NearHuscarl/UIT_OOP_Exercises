#include "Meo.h"
#include <iostream>
using namespace std;

CMeo::CMeo()
{
}

CMeo::CMeo(string loaiMeo)
{
	LoaiMeo = loaiMeo;
}

CMeo::~CMeo()
{
}

void CMeo::Nhap()
{
	CThuCung::Nhap();
	cout << "+ Nhap ten loai meo: ";
	getchar();
	getline(cin, LoaiMeo);
}

void CMeo::Xuat()
{
	CThuCung::Xuat();
	cout << "+ Ten loai meo: " << LoaiMeo << endl;
	cout << "+ Tien thuc an: " << TinhTienAn() << endl;
}

float CMeo::TinhTienAn()
{
	return (CanNang - 1) * 0.04;
}