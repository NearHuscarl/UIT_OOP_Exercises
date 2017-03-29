#include "KhuVuc.h"
#include <string>
#include <iostream>
using namespace std;

KhuVuc::KhuVuc()
{
}

KhuVuc::KhuVuc(string MaKV, int LoaiHinh)
{
	MaKhuVuc = MaKV;
	Loai = LoaiHinh;
}

KhuVuc::~KhuVuc()
{
}

string KhuVuc::getMaKhuVuc()
{
	return MaKhuVuc;
}

int KhuVuc::getLoai()
{
	return Loai;
}

void KhuVuc::setMaKhuVuc(string MaKV)
{
	MaKhuVuc = MaKV;
}

void KhuVuc::setLoai(int LoaiMoi)
{
	Loai = LoaiMoi;
}

void KhuVuc::Nhap()
{
	do {
		cout << "+ Nhap ma khu vuc (A0, B0, C0, D0, E0): ";
		getline(cin, MaKhuVuc);
	} while (MaKhuVuc != "A0" && MaKhuVuc != "B0" && MaKhuVuc != "C0" && MaKhuVuc != "D0" && MaKhuVuc != "E0");
	
	do {
		cout << "+ Nhap loai hinh ho gia dinh (1 hoac 2): ";
		cin >> Loai;
	} while (Loai < 1 || Loai > 2);
}

void KhuVuc::Xuat()
{
	cout << "+ Ma khu vuc: " << MaKhuVuc << endl;
	cout << "+ Don gia: " << DonGia() << " dong/kWh" << endl;
}

int KhuVuc::DonGia()
{
	int DonGiaA0[2] = { 500,450 };
	int DonGiaB0[2] = { 460,440 };
	int DonGiaC0[2] = { 450,430 };
	int DonGiaD0[2] = { 420,410 };
	int DonGiaE0[2] = { 410,400 };
	if (MaKhuVuc == "A0")
		return DonGiaA0[Loai - 1];
	else if (MaKhuVuc == "B0")
		return DonGiaB0[Loai - 1];
	else if (MaKhuVuc == "C0")
		return DonGiaC0[Loai - 1];
	else if (MaKhuVuc == "D0")
		return DonGiaD0[Loai - 1];
	else
		return DonGiaE0[Loai - 1];
	return 0;
}
