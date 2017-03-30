#pragma once
#include <iostream>
#include "Ngay.h"
#include "GioiTinh.h"
#include <string>
using namespace std;

class CNguoi
{
protected:
	string HoTen;
	int Tuoi;
	CGioiTinh GioiTinh;
	CNgay NgaySinh;
	string NoiSinh;

public:
	CNguoi();
	~CNguoi();

	string getTen();
	void setTen(string TenMoi);

	int getTuoi();
	void setTuoi(int TuoiMoi);

	string getNoiSinh();
	void setNoiSinh(int NoiSinhMoi);

	void Nhap();
	void Xuat();
};