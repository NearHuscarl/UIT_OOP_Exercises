#include "QuanLyGiaSuc.h"
#include <iostream>
using namespace std;

QuanLyGiaSuc::QuanLyGiaSuc()
{
}

QuanLyGiaSuc::~QuanLyGiaSuc()
{
}

void QuanLyGiaSuc::Nhap()
{
	cout << "NHAP SO LUONG GIA SUC MOI LOAI" << endl;
	cout << "------------------------------------" << endl;
	cout << "Nhap so luong bo: ";
	cin >> SoLuongBo;
	cout << "Nhap so luong cuu: ";
	cin >> SoLuongCuu;
	cout << "Nhap so luong de: ";
	cin >> SoLuongDe;

	MangBo = new Bo[SoLuongBo];
	MangCuu = new Cuu[SoLuongCuu];
	MangDe = new De[SoLuongDe];
}

void QuanLyGiaSuc::KeuDoi()
{
	for (int i = 0; i < SoLuongBo; i++)
	{
		MangBo[i].Keu();
	}

	for (int i = 0; i < SoLuongCuu; i++)
	{
		MangCuu[i].Keu();
	}

	for (int i = 0; i < SoLuongDe; i++)
	{
		MangDe[i].Keu();
	}
}

int QuanLyGiaSuc::TongSoCon()
{
	int Tong = 0;
	for (int i = 0; i < SoLuongBo; i++)
	{
		Tong += MangBo[i].SinhCon();
	}

	for (int i = 0; i < SoLuongCuu; i++)
	{
		Tong += MangCuu[i].SinhCon();
	}

	for (int i = 0; i < SoLuongDe; i++)
	{
		Tong += MangDe[i].SinhCon();
	}

	return Tong;
}

int QuanLyGiaSuc::TongLuongSua()
{
	int Tong = 0;
	for (int i = 0; i < SoLuongBo; i++)
	{
		Tong += MangBo[i].ChoSua();
	}

	for (int i = 0; i < SoLuongCuu; i++)
	{
		Tong += MangCuu[i].ChoSua();
	}

	for (int i = 0; i < SoLuongDe; i++)
	{
		Tong += MangDe[i].ChoSua();
	}

	return Tong;
}