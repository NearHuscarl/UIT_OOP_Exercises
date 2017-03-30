#pragma once
#include <iostream>
#include "Nguoi.h"
#include <string>
using namespace std;

class CSinhVien : public CNguoi
{
private:	
	string MaSo;
	string ChuyenNganh;
	float DiemRenLuyen;
	float DiemTrungBinh;

public:
	CSinhVien();
	~CSinhVien();

	void Nhap();
	void Xuat();
};