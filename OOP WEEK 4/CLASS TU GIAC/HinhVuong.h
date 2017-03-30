#pragma once
#include "TuGiac.h"
class CHinhVuong :
	public CTuGiac
{
private:

	bool IsHopLe();

public:
	CHinhVuong();
	~CHinhVuong();

	void Nhap();
	void HienThiTinhChat();
	double TinhDienTich();
};