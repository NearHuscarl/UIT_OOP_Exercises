#include "Hamster.h"
#include <iostream>
using namespace std;

CHamster::CHamster()
{
	MauLong = 0;
}

CHamster::CHamster(int maulong)
{
	MauLong = maulong;
}

CHamster::~CHamster()
{
}

void CHamster::Nhap()
{
	CThuCung::Nhap();
	do {
		cout << "+ Nhap mau long (0- Xam tro; 1- Trang soc den; 2- Tra sua; 3- Khac): ";
		cin >> MauLong;
	} while (MauLong < 0 || MauLong>3);
}

void CHamster::Xuat()
{
	CThuCung::Xuat();
	cout << "+ Mau long: ";
	switch (MauLong)
	{
	case 0: cout << "Xam tro"; break;
	case 1:	cout << "Trang soc den"; break;
	case 2: cout << "Tra sua"; break;
	case 3: cout << "Mau khac"; break;
	}
	cout << "\n+ Tien thuc an: " << TinhTienAn() << endl;
}

float CHamster::TinhTienAn()
{
	return CanNang * 0.025;
}