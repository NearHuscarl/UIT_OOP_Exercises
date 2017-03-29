#include "KhachHang.h"
#include "KhuVuc.h"
#include <iostream>
#include <string>
using namespace std;

KhachHang::KhachHang()
{
}

KhachHang::KhachHang(string maKhachHang, KhuVuc khuVuc, int chiSoCu, int chiSoMoi)
{
	MaKhachHang = maKhachHang;
	KV = khuVuc;
	ChiSoCu = chiSoCu;
	ChiSoMoi = chiSoMoi;
}

KhachHang::~KhachHang()
{
}

string KhachHang::getMaKhachHang()
{
	return MaKhachHang;
}

void KhachHang::setMaKhachHang(string MaSo)
{
	MaKhachHang = MaSo;
}

int KhachHang::getChiSoCu()
{
	return ChiSoCu;
}

int KhachHang::getChiSoMoi()
{
	return ChiSoMoi;
}

void KhachHang::setChiSoCu(int ChiSo)
{
	ChiSoCu = ChiSo;
}

void KhachHang::setChiSoMoi(int ChiSo)
{
	ChiSoMoi = ChiSo;
}

void KhachHang::Nhap()
{
	cout << "+ Nhap ma khach hang: ";
	getchar();
	getline(cin, MaKhachHang);

	KV.Nhap();

	cout << "+ Nhap chi so cu: ";
	cin >> ChiSoCu;

	cout << "+ Nhap chi so moi: ";
	cin >> ChiSoMoi;
}

void KhachHang::Xuat()
{
	cout << "+ Ma khach hang: " << MaKhachHang << endl;
	KV.Xuat();
	cout << "+ Chi so cu: " << ChiSoCu << " kWh" << endl;
	cout << "+ Chi so moi: " << ChiSoMoi << " kWh" << endl;
	cout << "+ Dien nang tieu thu: " << ChiSoMoi - ChiSoCu << " kWh" << endl;
	cout << "+ So tien can thanh toan: " << TienCanThanhToan() << " dong" << endl;
}

float KhachHang::TienCanThanhToan()
{
	int SokW = ChiSoMoi - ChiSoCu;
	return SokW * KV.DonGia();
}
