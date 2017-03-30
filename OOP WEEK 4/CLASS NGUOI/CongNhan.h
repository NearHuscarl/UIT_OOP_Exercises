#pragma once
#include <iostream>
#include "Nguoi.h"
#include <string>
using namespace std;

class CCongNhan : public CNguoi
{
private:
	string MaSo;
	double LuongThang;

public:
	CCongNhan();
	~CCongNhan();

	string getMaSo();
	void setMaSo(string MaSoMoi);

	double getLuongThang();
	void setLuongThang(double MucLuong);

	void Nhap();
	void Xuat();
};