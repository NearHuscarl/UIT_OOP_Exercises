#pragma once
#include "Diem.h"
#include <iostream>
using namespace std;

class CTuGiac
{
protected:
	CDiem A;
	CDiem B;
	CDiem C;
	CDiem D;

public:
	CTuGiac();
	CTuGiac(CDiem DiemA, CDiem DiemB, CDiem DiemC, CDiem DiemD);
	~CTuGiac();

	void Nhap();
	void HienThiTinhChat();
	double TinhDienTich();
};