#pragma once
#include "KhoiGach.h"
class CXepGach
{
private:
	static int SoKhoiGachDaTao;
	CKhoiGach *MangKhoiGach[7];

	int TaoSoNgauNhien(int GiaTriMin, int GiaTriMax);
	void DieuKhien(int LoaiKhoiGach);
	void TaoKhoiGach();

public:
	CXepGach();
	~CXepGach();

	void HienThi();
};