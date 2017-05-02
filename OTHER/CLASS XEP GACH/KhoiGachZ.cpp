#include "KhoiGachZ.h"
#include <iostream>
using namespace std;

CKhoiGachZ::CKhoiGachZ()
{
	MauSac = 0;
}

CKhoiGachZ::~CKhoiGachZ()
{
}

int CKhoiGachZ::getMauSac()
{
	return MauSac;
}

void CKhoiGachZ::setMauSac(int GiaTri)
{
	MauSac = GiaTri;
}

void CKhoiGachZ::SangPhai()
{
	cout << "+ Di chuyen khoi gach chu Z sang phai" << endl;
}

void CKhoiGachZ::SangTrai()
{
	cout << "+ Di chuyen khoi gach chu Z sang trai" << endl;
}

void CKhoiGachZ::XuongDuoi()
{
	cout << "+ Di chuyen khoi gach chu Z xuong duoi" << endl;
}

void CKhoiGachZ::Xoay()
{
	cout << "+ Xoay khoi gach chu X" << endl;
}

void CKhoiGachZ::CoDinh()
{
	cout << "+ Khoi gach chu Z da duoc co dinh" << endl;
}

void CKhoiGachZ::HienThiThongTin()
{
	cout << "+ Ten khoi gach: KHOI GACH CHU Z" << endl;
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