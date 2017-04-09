#pragma once
#include "TuGiac.h"
#include "DoanThang.h"
class HinhThang : public CTuGiac
{
protected:
	bool isHopLe();

public:
	HinhThang();
	HinhThang(Diem DiemA, Diem DiemB, Diem DiemC, Diem DiemD);
	~HinhThang();

	void Nhap();
	void HienThiTinhChat();
	double TinhDienTich();
};