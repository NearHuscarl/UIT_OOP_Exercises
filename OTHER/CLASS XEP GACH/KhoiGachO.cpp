#include "KhoiGachO.h"
#include <iostream>
using namespace std;

CKhoiGachO::CKhoiGachO()
{
	MauSac = 0;
}

CKhoiGachO::~CKhoiGachO()
{
}

int CKhoiGachO::getMauSac()
{
	return MauSac;
}

void CKhoiGachO::setMauSac(int GiaTri)
{
	MauSac = GiaTri;
}

void CKhoiGachO::SangPhai()
{
	cout << "+ Di chuyen khoi gach chu O sang phai" << endl;
}

void CKhoiGachO::SangTrai()
{
	cout << "+ Di chuyen khoi gach chu O sang trai" << endl;
}

void CKhoiGachO::XuongDuoi()
{
	cout << "+ Di chuyen khoi gach chu O xuong duoi" << endl;
}

void CKhoiGachO::Xoay()
{
	cout << "+ Xoay khoi gach chu O" << endl;
}

void CKhoiGachO::CoDinh()
{
	cout << "+ Khoi gach chu O da duoc co dinh" << endl;
}

void CKhoiGachO::HienThiThongTin()
{
	cout << "+ Ten khoi gach: KHOI GACH CHU O" << endl;
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