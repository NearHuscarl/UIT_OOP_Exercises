#include "KhoiGachL.h"
#include <iostream>
using namespace std;

CKhoiGachL::CKhoiGachL()
{
	MauSac = 0;
}

CKhoiGachL::~CKhoiGachL()
{
}

int CKhoiGachL::getMauSac()
{
	return MauSac;
}

void CKhoiGachL::setMauSac(int GiaTri)
{
	MauSac = GiaTri;
}

void CKhoiGachL::SangPhai()
{
	cout << "+ Di chuyen khoi gach chu L sang phai" << endl;
}

void CKhoiGachL::SangTrai()
{
	cout << "+ Di chuyen khoi gach chu L sang trai" << endl;
}

void CKhoiGachL::XuongDuoi()
{
	cout << "+ Di chuyen khoi gach chu L xuong duoi" << endl;
}

void CKhoiGachL::Xoay()
{
	cout << "+ Xoay khoi gach chu L" << endl;
}

void CKhoiGachL::CoDinh()
{
	cout << "+ Khoi gach chu L da duoc co dinh" << endl;
}

void CKhoiGachL::HienThiThongTin()
{
	cout << "+ Ten khoi gach: KHOI GACH CHU L" << endl;
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