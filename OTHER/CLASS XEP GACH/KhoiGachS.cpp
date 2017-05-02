#include "KhoiGachS.h"
#include <iostream>
using namespace std;

CKhoiGachS::CKhoiGachS()
{
	MauSac = 0;
}

CKhoiGachS::~CKhoiGachS()
{
}

int CKhoiGachS::getMauSac()
{
	return MauSac;
}

void CKhoiGachS::setMauSac(int GiaTri)
{
	MauSac = GiaTri;
}

void CKhoiGachS::SangPhai()
{
	cout << "+ Di chuyen khoi gach chu S sang phai" << endl;
}

void CKhoiGachS::SangTrai()
{
	cout << "+ Di chuyen khoi gach chu S sang trai" << endl;
}

void CKhoiGachS::XuongDuoi()
{
	cout << "+ Di chuyen khoi gach chu S xuong duoi" << endl;
}

void CKhoiGachS::Xoay()
{
	cout << "+ Xoay khoi gach chu S" << endl;
}

void CKhoiGachS::CoDinh()
{
	cout << "+ Khoi gach chu S da duoc co dinh" << endl;
}

void CKhoiGachS::HienThiThongTin()
{
	cout << "+ Ten khoi gach: KHOI GACH CHU S" << endl;
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