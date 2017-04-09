#pragma once
#include "Ellipse.h"
class CCircle : public CEllipse
{
private:
	bool HopLe();

public:
	CCircle();
	CCircle(float BanKinh);
	~CCircle();

	void Nhap();
	void HienThiTinhChat();
};