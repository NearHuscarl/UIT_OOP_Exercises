#pragma once
#include "TrieuChung.h"

class DSTrieuChung
{
private:
	int SoLuong;
	TrieuChung *DanhSach;

public:
	DSTrieuChung();
	~DSTrieuChung();

	int getSoLuong();
	void Nhap();
	void Xuat();
};