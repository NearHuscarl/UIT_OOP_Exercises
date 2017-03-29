#include "BenhNhan.h"
#include <iostream>
#include <string>
using namespace std;

BenhNhan::BenhNhan()
{
}

BenhNhan::~BenhNhan()
{
}

void BenhNhan::Nhap()
{
	fflush(stdin);
	cout << "Nhap ho va ten benh nhan: ";
	getline(cin, HoTen);

	do {
		cout << "Nhap gioi tinh (1- Nam; 2- Nu; 3- Khac): ";
		cin >> GioiTinh;
	} while (GioiTinh < 1 || GioiTinh > 3);

	fflush(stdin);
	cout << "Nhap dia chi: ";
	getchar();
	getline(cin, DiaChi);

	fflush(stdin);
	cout << "Nhap tien su benh: ";
	getline(cin, TienSuBenh);
}

void BenhNhan::Xuat()
{
	string GT;
	switch (GioiTinh)
	{
		case 1: GT = "Nam"; break;
		case 2: GT = "Nu"; break;
		case 3: GT = "Khac"; break;
	}
	cout << "Ten benh nhan: " << HoTen << endl;
	cout << "Gioi tinh: " << GT << endl;
	cout << "Dia chi: " << DiaChi << endl;
	cout << "Tien su benh: " << TienSuBenh << endl;
}
