#include "KhoiGachT.h"
#include <iostream>
using namespace std;

CKhoiGachT::CKhoiGachT()
{
	MauSac = 0;
}

CKhoiGachT::~CKhoiGachT()
{
}

int CKhoiGachT::getMauSac()
{
	return MauSac;
}

void CKhoiGachT::setMauSac(int GiaTri)
{
	MauSac = GiaTri;
}

void CKhoiGachT::SangPhai()
{
	cout << "+ Di chuyen khoi gach chu T sang phai" << endl;
}

void CKhoiGachT::SangTrai()
{
	cout << "+ Di chuyen khoi gach chu T sang trai" << endl;
}

void CKhoiGachT::XuongDuoi()
{
	cout << "+ Di chuyen khoi gach chu T xuong duoi" << endl;
}

void CKhoiGachT::Xoay()
{
	cout << "+ Xoay khoi gach chu T" << endl;
}

void CKhoiGachT::CoDinh()
{
	cout << "+ Khoi gach chu T da duoc co dinh" << endl;
}

void CKhoiGachT::HienThiThongTin()
{
	cout << "+ Ten khoi gach: KHOI GACH CHU T" << endl;
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