#include <iostream>
#include "SinhVien.h"
#include "HocSinh.h"
#include "CongNhan.h"
#include "NgheSi.h"
#include "CaSi.h"
using namespace std;

int main()
{
	CSinhVien SV;
	CHocSinh HS;
	CCongNhan CN;
	CNgheSi NS;
	CCaSi CS;

	int LuaChon;
	do
	{
		system("cls");
		cout << "CHON LOAI DOI TUONG" << endl;
		cout << "--------------------------------" << endl;
		cout << "1- Sinh vien" << endl;
		cout << "2- Hoc sinh" << endl;
		cout << "3- Cong nhan" << endl;
		cout << "4- Nghe si" << endl;
		cout << "5- Ca si" << endl;
		cout << "--------------------------------" << endl;
		cout << "Lua chon: ";
		cin >> LuaChon;
	} while (LuaChon <= 0 || LuaChon > 5);

	switch (LuaChon)
	{
	case 1:
	{
		system("cls");
		cout << "NHAP THONG TIN SINH VIEN" << endl;
		cout << "--------------------------------" << endl;
		SV.Nhap();
		cout << "--------------------------------" << endl;

		system("cls");
		cout << "THONG TIN SINH VIEN VUA NHAP" << endl;
		cout << "--------------------------------" << endl;
		SV.Xuat();
		break;
	}
	case 2:
	{
		system("cls");
		cout << "NHAP THONG TIN HOC SINH" << endl;
		cout << "--------------------------------" << endl;
		HS.Nhap();
		cout << "--------------------------------" << endl;

		system("cls");
		cout << "THONG TIN HOC SINH VUA NHAP" << endl;
		cout << "--------------------------------" << endl;
		HS.Xuat();
		break;
	}
	case 3:
	{
		system("cls");
		cout << "NHAP THONG TIN CONG NHAN" << endl;
		cout << "--------------------------------" << endl;
		CN.Nhap();
		cout << "--------------------------------" << endl;

		system("cls");
		cout << "THONG TIN CONG NHAN VUA NHAP" << endl;
		cout << "--------------------------------" << endl;
		CN.Xuat();
		break;
	}

	case 4:
	{
		system("cls");
		cout << "NHAP THONG TIN NGHE SI" << endl;
		cout << "--------------------------------" << endl;
		NS.Nhap();
		cout << "--------------------------------" << endl;

		system("cls");
		cout << "THONG TIN NGHE SI VUA NHAP" << endl;
		cout << "--------------------------------" << endl;

		NS.Xuat();
		break;
	}
	case 5:
	{
		system("cls");
		cout << "NHAP THONG TIN CA SI" << endl;
		cout << "--------------------------------" << endl;
		CS.Nhap();
		cout << "--------------------------------" << endl;

		system("cls");
		cout << "THONG TIN CA SI VUA NHAP" << endl;
		cout << "--------------------------------" << endl;
		CS.Xuat();
		break;
	}
	}
	cout << "--------------------------------" << endl;

	system("pause");
	return 0;
}