#pragma once
#include "Diem.h"
#include <iostream>
using namespace std;

class CTuGiac
{
protected:
	Diem A;
	Diem B;
	Diem C;
	Diem D;

public:
	CTuGiac();
	CTuGiac(Diem DiemA, Diem DiemB, Diem DiemC, Diem DiemD);
	~CTuGiac();

	void Nhap();
	void HienThiTinhChat();
	double TinhDienTich();
};