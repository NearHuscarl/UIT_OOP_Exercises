#pragma once
#include "HinhBinhHanh.h"
class HinhChuNhat : public HinhBinhHanh
{
protected:
	bool isHopLe();

public:
	HinhChuNhat();
	HinhChuNhat(Diem DiemA, Diem DiemB, Diem DiemC, Diem DiemD);
	~HinhChuNhat();

	void Nhap();
	void HienThiTinhChat();
	double TinhDienTich();
};