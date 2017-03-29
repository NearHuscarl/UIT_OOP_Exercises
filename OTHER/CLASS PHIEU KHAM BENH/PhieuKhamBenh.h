#pragma once
#include "BenhNhan.h"
#include "BacSi.h"
#include "DSTrieuChung.h"
#include <iostream>
#include <string>
using namespace std;
class PhieuKhamBenh
{
private:
	string MaPhieu;
	BenhNhan ThongTinBenhNhan;
	BacSi ThongTinBacSi;
	DSTrieuChung CacTrieuChung;
	string KetLuan;

public:
	PhieuKhamBenh();
	~PhieuKhamBenh();

	void Nhap();
	void Xuat();
};

