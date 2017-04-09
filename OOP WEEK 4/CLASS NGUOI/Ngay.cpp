#include "Ngay.h"
#include < iostream >
using namespace std;

CNgay::CNgay(void)
{
}

int CNgay::getNgay()
{
	return Ngay;
}

int CNgay::getThang()
{
	return Thang;
}

int CNgay::getNam()
{
	return Nam;
}

void CNgay::setNgay(int n)
{
	Ngay = n;
}

void CNgay::setThang(int t)
{
	Thang = t;
}

void CNgay::setNam(int N)
{
	Nam = N;
}

CNgay::~CNgay(void)
{
}

bool CNgay::LaNamNhuan()
{
	if (((Nam % 4 == 0) && (Nam % 100 != 0)) || (Nam % 400 == 0))
		return true;
	else
		return false;
}

int CNgay::SoNgayToiDa()
{
	int SoNgayTrongThang[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	if (LaNamNhuan() == true)
	{
		SoNgayTrongThang[1] = 29;
	}
	return SoNgayTrongThang[Thang - 1];
}

bool CNgay::HopLe()
{
	if ((Ngay > 0 && Ngay <= SoNgayToiDa()) && (Thang > 0 && Thang <= 12) && Nam > 0)
		return true;
	else
		return false;
}

void CNgay::Nhap()
{
	do {
		cout << "Nhap ngay/ thang/ nam sinh" << endl;
		cout << "   + Nhap ngay sinh: ";
		cin >> Ngay;

		cout << "   + Nhap thang sinh: ";
		cin >> Thang;

		cout << "   + Nhap nam sinh: ";
		cin >> Nam;
	} while (HopLe() == false);
}

void CNgay::Xuat()
{
	cout << Ngay << "/" << Thang << "/" << Nam << endl;
}