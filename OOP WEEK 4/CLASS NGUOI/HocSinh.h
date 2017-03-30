#pragma once
#include <iostream>
#include "Nguoi.h"
#include <string>
class CHocSinh:public CNguoi
{
private:
	string Truong;
	int KhoiLop;
	float DiemTrungBinh;

public:
	CHocSinh();
	~CHocSinh();

	string getTruong();
	void setTruong(string TenTruong);

	int getKhoiLop();
	void setKhoiLop(int Khoi);

	float getDiemTrungBinh();
	void setDiemTrungBinh(float DTB);

	void Nhap();
	void Xuat();
};