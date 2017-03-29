#pragma once
#include <string>
#include <iostream>
using namespace std;

class BenhNhan
{
private:
	string HoTen;
	int GioiTinh;
	string DiaChi;
	string TienSuBenh;

public:
	BenhNhan();
	~BenhNhan();

	void Nhap();
	void Xuat();
};

