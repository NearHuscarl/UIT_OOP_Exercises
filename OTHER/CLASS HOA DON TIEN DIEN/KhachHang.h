#pragma once
#include "KhuVuc.h"
#include <iostream>
#include <string>
using namespace std;

class KhachHang
{
private:
	string MaKhachHang;
	int ChiSoCu;
	int ChiSoMoi;

public:
	KhuVuc KV;
	KhachHang();
	KhachHang(string maSo, KhuVuc khuVuc, int chiSoCu, int chiSoMoi);
	~KhachHang();

	string getMaKhachHang();
	void setMaKhachHang(string MaSo);
	int getChiSoCu();
	int getChiSoMoi();
	void setChiSoCu(int ChiSo);
	void setChiSoMoi(int ChiSo);
	float TienCanThanhToan();
	void Nhap();
	void Xuat();

};

