#pragma once
#include "HinhThang.h"
class HinhBinhHanh : public HinhThang
{
protected:
	bool isHopLe();

public:
	HinhBinhHanh();
	HinhBinhHanh(Diem DiemA, Diem DiemB, Diem DiemC, Diem DiemD);
	~HinhBinhHanh();

	void Nhap();
	void HienThiTinhChat();
	double TinhDienTich();
};