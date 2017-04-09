#pragma once
#include "ThuCung.h"
#include <iostream>
#include <string>
using namespace std;

class CMeo :public CThuCung
{
private:
	string LoaiMeo;

public:
	CMeo();
	CMeo(string loaiMeo);
	~CMeo();

	void Nhap();
	void Xuat();
	float TinhTienAn();
};