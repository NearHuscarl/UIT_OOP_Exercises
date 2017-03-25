#include "NganHang.h"
#include "SoCoKiHan.h"
#include "SoKhongKiHan.h"
#include <iostream>
using namespace std;

CNganHang::CNganHang()
{
}


CNganHang::~CNganHang()
{
}

void CNganHang::Nhap()
{
	system("cls");
	cout << "NHAP SO LUONG SO CAC LOAI" << endl;
	cout << "--------------------------------------" << endl;
	cout << "Nhap so luong so co ki han: ";
	cin >> slSoCoKiHan;
	cout << "Nhap so luong so khong ki han: ";
	cin >> slSoKhongKiHan;

	//Cấp phát động cho các mảng
	MangCoKiHan = new CSoCoKiHan[slSoCoKiHan];
	MangKhongKiHan = new CSoKhongKiHan[slSoKhongKiHan];

	//Nhập danh sách sổ có kì hạn
	system("cls");
	cout << "NHAP DANH SACH SO CO KI HAN" << endl;
	cout << "--------------------------------------" << endl;
	for (int i = 0; i < slSoCoKiHan; i++)
	{
		cout << "SO THU " << i + 1 << endl;
		MangCoKiHan[i].Nhap();
	}

	//Nhập danh sách sổ không kì hạn
	system("cls");
	cout << "NHAP DANH SACH SO KHONG KI HAN" << endl;
	cout << "--------------------------------------" << endl;
	for (int i = 0; i < slSoKhongKiHan; i++)
	{
		cout << "SO THU " << i + 1 << endl;
		MangKhongKiHan[i].Nhap();
	}
}

void CNganHang::Xuat()
{
	//Xuất danh sách sổ có kì hạn
	system("cls");
	cout << "DANH SACH SO CO KI HAN" << endl;
	cout << "--------------------------------------" << endl;
	for (int i = 0; i < slSoCoKiHan; i++)
	{
		cout << "SO THU " << i + 1 << endl;
		MangCoKiHan[i].Xuat();
	}

	//Xuất danh sách sổ không kì hạn
	cout << "\nDANH SACH SO KHONG KI HAN" << endl;
	cout << "--------------------------------------" << endl;
	for (int i = 0; i < slSoKhongKiHan; i++)
	{
		cout << "SO THU " << i + 1 << endl;
		MangKhongKiHan[i].Xuat();
	}
}
