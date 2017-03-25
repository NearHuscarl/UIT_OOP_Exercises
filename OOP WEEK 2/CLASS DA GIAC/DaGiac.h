#pragma once
#include "Diem.h"

class CDaGiac
{
private:
	int SoDinh;
	CDiem *ToaDoDinh;

public:
	CDaGiac(void);
	CDaGiac(int);
	CDaGiac(const CDaGiac &a);
	~CDaGiac(void);

	void Nhap();
	void TinhTien(float, float);
	void Quay(float);
	void ThuPhong(float);
	void Xuat();
};