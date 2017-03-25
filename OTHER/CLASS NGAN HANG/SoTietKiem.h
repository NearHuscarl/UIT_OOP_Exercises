#pragma once
#include "Ngay.h"
#include <iostream>
#include <string>
using namespace std;

class CSoTietKiem
{
protected:
	string CMND, HoTen;
	int SoTienGui;
	double LaiSuat;
	CNgay NgayLapSo;

public:
	CSoTietKiem();
	~CSoTietKiem();
	void Nhap();
	void Xuat();
};