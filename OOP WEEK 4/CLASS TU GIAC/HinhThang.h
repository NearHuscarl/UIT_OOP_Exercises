#pragma once
#include "TuGiac.h"
#include "DoanThang.h"
class CHinhThang: public CTuGiac
{
private:
	bool IsHopLe();

public:
	CHinhThang();
	~CHinhThang();

	void Nhap();
	void HienThiTinhChat();
	double TinhDienTich();
};

