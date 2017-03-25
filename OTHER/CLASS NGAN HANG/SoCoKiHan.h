#pragma once
#include "SoTietKiem.h"

class CSoCoKiHan: public CSoTietKiem
{
private:
	int KiHan;
	int SoThangGui;

public:
	CSoCoKiHan();
	~CSoCoKiHan();
	void Nhap();
	void Xuat();
	double getLaiSuat();
};

