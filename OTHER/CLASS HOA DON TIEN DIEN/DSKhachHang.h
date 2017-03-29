#pragma once
#include "KhachHang.h"
#include <iostream>
using namespace std;

class DSKhachHang
{
private:
	int SoLuong;
	KhachHang *DanhSach;

public:
	DSKhachHang();
	//DSKhachHang(DSKhachHang *&a);
	~DSKhachHang();

	void Nhap();
	void SapXepTheoKV();
	void Xuat();
};

