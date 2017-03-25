#pragma once
#include "SoCoKiHan.h"
#include "SoKhongKiHan.h"

class CNganHang
{
private:
	int slSoCoKiHan;
	int slSoKhongKiHan;
	CSoCoKiHan *MangCoKiHan;
	CSoKhongKiHan *MangKhongKiHan;

public:
	CNganHang();
	~CNganHang();

	void Nhap();
	void Xuat();
};

