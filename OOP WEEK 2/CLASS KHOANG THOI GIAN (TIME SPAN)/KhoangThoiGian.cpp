#include "KhoangThoiGian.h"
#include <iostream>
#include <cmath>
using namespace std;

CKhoangThoiGian::CKhoangThoiGian(void)
{
	Gio = Phut = Giay = 0;
}

CKhoangThoiGian::CKhoangThoiGian(int g, int p, int gy)
{
	setGio(g);
	setPhut(p);
	setGiay(gy);
}

CKhoangThoiGian::~CKhoangThoiGian(void)
{
}

void CKhoangThoiGian::KiemTraGiaTri()
{
	if (this->Gio < 0 || this->Phut < 0 || this->Giay < 0)
		GiaTriAm = true;
	else
		GiaTriAm = false;
}

bool CKhoangThoiGian::GiaTriAm = false;

void CKhoangThoiGian::setGio(int g)
{
	Gio = g;
}

int CKhoangThoiGian::getGio()
{
	return Gio;
}

void CKhoangThoiGian::setPhut(int p)
{
	Phut = p;
}

int CKhoangThoiGian::getPhut()
{
	return Phut;
}

void CKhoangThoiGian::setGiay(int gy)
{
	Giay = gy;
}

int CKhoangThoiGian::getGiay()
{
	return Giay;
}

int CKhoangThoiGian::getTongGiay()
{
	return this->Giay + this->Phut * 60 + this->Gio * 3600;
}

float CKhoangThoiGian::getTongPhut()
{
	return getTongGiay() / 60;
}

float CKhoangThoiGian::getTongGio()
{
	return getTongGiay() / 3600;
}

void CKhoangThoiGian::Nhap()
{
	cout << "Nhap gia tri gio/ phut/ giay" << endl;
	cout << "Nhap gio: ";
	cin >> Gio;

	cout << "Nhap phut: ";
	cin >> Phut;

	cout << "Nhap giay: ";
	cin >> Giay;
	cout << "______________________________\n" << endl;

	KiemTraGiaTri();
}

void CKhoangThoiGian::ChuanHoa()
{
	int TongGiay = abs(this->Giay + this->Phut * 60 + this->Gio * 3600);

	this->Gio = TongGiay / 3600;
	this->Phut = (TongGiay - this->Gio * 3600) / 60;
	this->Giay = (TongGiay - this->Gio * 3600 - this->Phut * 60);
}

void CKhoangThoiGian::Xuat()
{
	this->ChuanHoa();
	cout << "=> ";
	if (GiaTriAm == false)
	{
		cout << (this->Gio < 10 ? "0" : "") << this->Gio << ":"
			<< (this->Phut < 10 ? "0" : "") << this->Phut << ":"
			<< (this->Giay < 10 ? "0" : "") << this->Giay;
	}
	else
	{
		cout << (this->Gio < 10 ? "-0" : "-") << this->Gio << ":"
			<< (this->Phut < 10 ? "-0" : "-") << this->Phut << ":"
			<< (this->Giay < 10 ? "-0" : "-") << this->Giay;
	}
	cout << endl;
}

bool CKhoangThoiGian::LonHon(CKhoangThoiGian b)
{
	if (this->getTongGiay() > b.getTongGiay())
		return true;
	else
		return false;
}

bool CKhoangThoiGian::NhoHon(CKhoangThoiGian b)
{
	if (this->LonHon(b) == false)
		return true;
	else
		return false;
}

bool CKhoangThoiGian::Bang(CKhoangThoiGian b)
{
	if (this->getTongGiay() == b.getTongGiay())
		return true;
	else
		return false;
}

bool CKhoangThoiGian::KhongBang(CKhoangThoiGian b)
{
	if (this->Bang(b) == false)
		return true;
	else
		return false;
}

bool CKhoangThoiGian::LonHonHoacBang(CKhoangThoiGian b)
{
	if (this->getTongGiay() >= b.getTongGiay())
		return true;
	else
		return false;
}

bool CKhoangThoiGian::NhoHonHoacBang(CKhoangThoiGian b)
{
	if (this->getTongGiay() <= b.getTongGiay())
		return true;
	else
		return false;
}

CKhoangThoiGian CKhoangThoiGian::Cong(CKhoangThoiGian b)
{
	CKhoangThoiGian Tong;
	int TongGiay1 = this->Giay + this->Phut * 60 + this->Gio * 3600;
	int TongGiay2 = b.Giay + b.Phut * 60 + b.Gio * 3600;
	int TongCacGiay = TongGiay1 + TongGiay2;

	Tong.Gio = TongCacGiay / 3600;
	Tong.Phut = (TongCacGiay - Tong.Gio * 3600) / 60;
	Tong.Giay = (TongCacGiay - Tong.Gio * 3600 - Tong.Phut * 60);

	return Tong;
}

CKhoangThoiGian CKhoangThoiGian::Tru(CKhoangThoiGian b)
{
	CKhoangThoiGian Hieu;
	int TongGiay1 = this->Giay + this->Phut * 60 + this->Gio * 3600;
	int TongGiay2 = b.Giay + b.Phut * 60 + b.Gio * 3600;
	int TongCacGiay = TongGiay1 - TongGiay2;

	if (TongCacGiay < 0)
		GiaTriAm = true;

	Hieu.Gio = TongCacGiay / 3600;
	Hieu.Phut = (TongCacGiay - Hieu.Gio * 3600) / 60;
	Hieu.Giay = (TongCacGiay - Hieu.Gio * 3600 - Hieu.Phut * 60);

	return Hieu;
}