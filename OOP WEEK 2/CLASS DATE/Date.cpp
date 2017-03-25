#include "Date.h"
#include <iostream>
#include <cmath>
using namespace std;

CDate::CDate(void)
{
}

CDate::CDate(int n, int t, int N)
{
	Ngay = n;
	Thang = t;
	Nam = N;
}

CDate::~CDate(void)
{
}

void CDate::setNgay(int n)
{
	Ngay = n;
}

int CDate::getNgay()
{
	return Ngay;
}

void CDate::setThang(int t)
{
	Thang = t;
}

int CDate::getThang()
{
	return Thang;
}

void CDate::setNam(int N)
{
	Nam = N;
}

int CDate::getNam()
{
	return Nam;
}

bool CDate::LaNamNhuan()
{
	if (((Nam % 4 == 0) && (Nam % 100 != 0)) || (Nam % 400 == 0))
		return true;
	else
		return false;
}

int CDate::SoNgayTrongThang(int t)
{
	int SoNgayTrongThang[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	if (t == 2 && LaNamNhuan() == true)
		SoNgayTrongThang[t - 1] == 28;
	return SoNgayTrongThang[t - 1];
}

int CDate::SoNgayTrongNam(int N)
{
	if (LaNamNhuan() == true)
		return 366;
	else
		return 365;
}

bool CDate::HopLe()
{
	if ((Ngay > 0 && Ngay <= SoNgayTrongThang(Thang)) && (Thang > 0 && Thang <= 12) && Nam > 0)
		return true;
	else
		return false;
}

void CDate::Nhap()
{
	do
	{
		cout << "Nhap gia tri ngay/ thang/ nam" << endl;
		cout << "Nhap ngay: ";
		cin >> Ngay;

		cout << "Nhap thang: ";
		cin >> Thang;

		cout << "Nhap nam: ";
		cin >> Nam;
		cout << "______________________________\n" << endl;
	} while (HopLe() == false);
}

void CDate::Xuat()
{
	cout << "=> " << Ngay << "/" << Thang << "/" << Nam << endl;
}

CDate CDate::NgayKe()
{
	CDate NgayMoi(this->Ngay, this->Thang, this->Nam);
	NgayMoi.setNgay(this->Ngay + 1);
	if (NgayMoi.HopLe() == true)
		return NgayMoi;
	else
	{
		NgayMoi.Ngay = 1;
		NgayMoi.Thang += 1;
		if (NgayMoi.HopLe() == true)
		{
			return NgayMoi;
		}
		else
		{
			NgayMoi.Ngay = NgayMoi.Thang = 1;
			NgayMoi.Nam += 1;
			return NgayMoi;
		}
	}
}

CDate CDate::NgayTruoc()
{
	CDate NgayCu(this->Ngay, this->Thang, this->Nam);
	NgayCu.setNgay(this->Ngay - 1);
	if (NgayCu.HopLe() == true)
		return NgayCu;
	else
	{
		NgayCu.Ngay = SoNgayTrongThang(this->Thang - 1);
		NgayCu.Thang -= 1;
		if (NgayCu.HopLe() == true)
		{
			return NgayCu;
		}
		else
		{
			NgayCu.Ngay = SoNgayTrongThang(12);
			NgayCu.Thang = 12;
			NgayCu.Nam -= 1;
			return NgayCu;
		}
	}
}

CDate CDate::nNgayKe(int n)
{
	CDate NgayMoi(this->Ngay, this->Thang, this->Nam);
	for (int i = 0; i < n; i++)
	{
		NgayMoi = NgayMoi.NgayKe();
	}
	return NgayMoi;
}

CDate CDate::nNgayTruoc(int n)
{
	CDate NgayCu(this->Ngay, this->Thang, this->Nam);
	for (int i = 0; i < n; i++)
	{
		NgayCu = NgayCu.NgayTruoc();
	}
	return NgayCu;
}

int CDate::STTNgay(CDate a)
{
	int STT = 0;
	for (int i = 1; i <= a.Thang - 1; i++)
	{
		STT = STT + SoNgayTrongThang(i);
	}
	return STT + a.Ngay;
}

int CDate::KhoangCach2Ngay(CDate b)
{
	int SoNgay = 0;
	if (this->Nam != b.Nam)
	{
		if (this->Nam < b.Nam)
		{
			for (int i = this->Nam; i < b.Nam; i++)
				SoNgay = SoNgay + SoNgayTrongNam(i);
		}

		else
		{
			for (int i = b.Nam; i < this->Nam; i++)
				SoNgay = SoNgay + SoNgayTrongNam(i);
		}
		return SoNgay + abs(STTNgay(*this) - STTNgay(b));
	}
	else
		return abs(STTNgay(*this) - STTNgay(b));
}