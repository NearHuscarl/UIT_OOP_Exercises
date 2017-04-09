#pragma once
#include "HinhChuNhat.h"
class HinhVuong : public HinhChuNhat
{
private:
	bool isHopLe();

public:
	HinhVuong();
	HinhVuong(Diem DiemA, Diem DiemB, Diem DiemC, Diem DiemD);
	~HinhVuong();

	void Nhap();
	void HienThiTinhChat();
	double TinhDienTich();
};