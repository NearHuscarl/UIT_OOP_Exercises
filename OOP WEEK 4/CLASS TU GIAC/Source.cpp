#include "HinhThang.h"
#include "HinhBinhHanh.h"
#include "HinhChuNhat.h"
#include "HinhVuong.h"
#include "Diem.h"
#include <iostream>
using namespace std;

int main()
{
	HinhThang hinhThang;
	HinhBinhHanh hinhBinhHanh;
	HinhChuNhat hinhChuNhat;
	HinhVuong hinhVuong;

	int LuaChon;
	do
	{
		system("cls");
		cout << "CHON MOT LOAI HINH VE" << endl;
		cout << "--------------------------------" << endl;
		cout << "1- Hinh thang" << endl;
		cout << "2- Hinh binh hanh" << endl;
		cout << "3- Hinh chu nhat" << endl;
		cout << "4- Hinh vuong" << endl;
		cout << "--------------------------------" << endl;
		cout << "Lua chon: ";
		cin >> LuaChon;
	} while (LuaChon <= 0 || LuaChon > 4);

	switch (LuaChon)
	{
	case 1:
	{
		hinhThang.Nhap();
		hinhThang.HienThiTinhChat();
		break;
	}

	case 2:
	{
		hinhBinhHanh.Nhap();
		hinhBinhHanh.HienThiTinhChat();
		break;
	}

	case 3:
	{
		hinhChuNhat.Nhap();
		hinhChuNhat.HienThiTinhChat();
		break;
	}

	case 4:
	{
		hinhVuong.Nhap();
		hinhVuong.HienThiTinhChat();
		break;
	}
	}

	system("pause");
	return 0;
}