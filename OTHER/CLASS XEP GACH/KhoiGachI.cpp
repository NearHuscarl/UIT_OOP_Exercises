#include "KhoiGachI.h"
#include <iostream>
using namespace std;

CKhoiGachI::CKhoiGachI()
{
	MauSac = 0;
}

CKhoiGachI::~CKhoiGachI()
{
}

int CKhoiGachI::getMauSac()
{
	return MauSac;
}

void CKhoiGachI::setMauSac(int GiaTri)
{
	MauSac = GiaTri;
}

void CKhoiGachI::SangPhai()
{
	cout << "+ Di chuyen khoi gach chu I sang phai" << endl;
}

void CKhoiGachI::SangTrai()
{
	cout << "+ Di chuyen khoi gach chu I sang trai" << endl;
}

void CKhoiGachI::XuongDuoi()
{
	cout << "+ Di chuyen khoi gach chu I xuong duoi" << endl;
}

void CKhoiGachI::Xoay()
{
	cout << "+ Xoay khoi gach chu I" << endl;
}

void CKhoiGachI::CoDinh()
{
	cout << "+ Khoi gach chu I da duoc co dinh" << endl;
}

void CKhoiGachI::HienThiThongTin()
{
	cout << "+ Ten khoi gach: KHOI GACH CHU I" << endl;
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