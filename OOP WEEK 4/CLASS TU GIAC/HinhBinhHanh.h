#pragma once
#include "HinhThang.h"
class CHinhBinhHanh: public CHinhThang
{
private:
	bool IsHopLe();

public:
	CHinhBinhHanh();
	~CHinhBinhHanh();

	void Nhap();
	void HienThiTinhChat();
	double TinhDienTich();
};

