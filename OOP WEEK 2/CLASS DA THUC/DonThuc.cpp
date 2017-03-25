#include "DonThuc.h"
#include <iostream>
using namespace std;

CDonThuc::CDonThuc(void)
{
	HeSo = 0;
	SoMu = 0;
}

CDonThuc::CDonThuc(float hs, int sm)
{
	HeSo = hs;
	SoMu = sm;
}

CDonThuc::~CDonThuc(void)
{
}

void CDonThuc::setHeSo(float hs)
{
	HeSo = hs;
}

float CDonThuc::getHeSo()
{
	return HeSo;
}

void CDonThuc::setSoMu(int sm)
{
	SoMu = sm;
}

int CDonThuc::getSoMu()
{
	return SoMu;
}

void CDonThuc::setDonThuc(int hs, int sm)
{
	HeSo = hs;
	SoMu = sm;
}

void CDonThuc::NhapHeSo()
{
	cout << "Nhap he so: ";
	cin >> HeSo;
}

void CDonThuc::NhapSoMu()
{
	cout << "Nhap so mu: ";
	cin >> SoMu;
}

void CDonThuc::NhapDonThuc()
{
	NhapHeSo();
	NhapSoMu();
}

void CDonThuc::Xuat()
{
	if (HeSo < 0)
		cout << "(" << HeSo << ")X^" << SoMu;
	else
		cout << HeSo << "X^" << SoMu;
}

CDonThuc CDonThuc::Cong(CDonThuc b)
{
	CDonThuc Tong;
	Tong.HeSo = this->HeSo + b.HeSo;
	Tong.SoMu = this->SoMu;
	return Tong;
}

CDonThuc CDonThuc::Tru(CDonThuc b)
{
	CDonThuc Hieu;
	Hieu.HeSo = this->HeSo - b.HeSo;
	Hieu.SoMu = this->SoMu;
	return Hieu;
}

CDonThuc CDonThuc::Nhan(CDonThuc b)
{
	CDonThuc Tich;
	Tich.HeSo = this->HeSo * b.HeSo;
	Tich.SoMu = this->SoMu + b.SoMu;
	return Tich;
}