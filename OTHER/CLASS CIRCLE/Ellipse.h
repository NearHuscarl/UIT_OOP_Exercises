#pragma once
#include "Diem.h"
class CEllipse
{
private:
	bool isHopLe();

protected:
	CDiem Tam;
	float BanTrucLon;
	float BanTrucNho;

public:
	CEllipse();
	CEllipse(CDiem tdTam, float bTrucLon, float bTrucNho);
	~CEllipse();

	void Nhap();
	void HienThiTinhChat();
};