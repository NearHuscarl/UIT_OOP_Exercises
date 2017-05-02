#include "KhoiGachJ.h"
#include <iostream>
using namespace std;

CKhoiGachJ::CKhoiGachJ()
{
	MauSac = 0;
}

CKhoiGachJ::~CKhoiGachJ()
{
}

int CKhoiGachJ::getMauSac()
{
	return MauSac;
}

void CKhoiGachJ::setMauSac(int GiaTri)
{
	MauSac = GiaTri;
}

void CKhoiGachJ::SangPhai()
{
	cout << "+ Di chuyen khoi gach chu J sang phai" << endl;
}

void CKhoiGachJ::SangTrai()
{
	cout << "+ Di chuyen khoi gach chu J sang trai" << endl;
}

void CKhoiGachJ::XuongDuoi()
{
	cout << "+ Di chuyen khoi gach chu J xuong duoi" << endl;
}

void CKhoiGachJ::Xoay()
{
	cout << "+ Xoay khoi gach chu J" << endl;
}

void CKhoiGachJ::CoDinh()
{
	cout << "+ Khoi gach chu J da duoc co dinh" << endl;
}

void CKhoiGachJ::HienThiThongTin()
{
	cout << "+ Ten khoi gach: KHOI GACH CHU J" << endl;
	cout << "+ Mau sac: ";
	switch (MauSac)
	{
	case 1:
		cout << "Mau do" << endl;
		break;
	case 2:
		cout << "Mau hong" << endl;
		break;
	case 3:
		cout << "Mau cam" << endl;
		break;
	case 4:
		cout << "Mau vang" << endl;
		break;
	case 5:
		cout << "Mau trang" << endl;
		break;
	case 6:
		cout << "Mau xanh la cay" << endl;
		break;
	case 7:
		cout << "Mau xanh da troi" << endl;
		break;
	case 8:
		cout << "Mau tim" << endl;
		break;
	case 9:
		cout << "Mau nau" << endl;
		break;
	case 10:
		cout << "Mau xam" << endl;
		break;
	}
}