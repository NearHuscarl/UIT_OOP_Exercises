#pragma once
#include "ThuCung.h"
#include <iostream>
using namespace std;

class CCho :public CThuCung {
private:
	float ChieuCao;
	float ChieuDai;

public:
	CCho();
	CCho(float cCao, float cDai);
	~CCho();

	void Nhap();
	void Xuat();
	float TinhTienAn();
};