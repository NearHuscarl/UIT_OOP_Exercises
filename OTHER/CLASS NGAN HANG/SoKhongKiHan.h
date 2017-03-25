#pragma once
#include "SoTietKiem.h"
class CSoKhongKiHan: public CSoTietKiem
{
private:
	int SoThangGui;

public:
	CSoKhongKiHan();
	~CSoKhongKiHan();

	void Nhap();
	void Xuat();
	double TienLai();
};

