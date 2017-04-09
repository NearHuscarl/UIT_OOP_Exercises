#pragma once
#include "ThuCung.h"
#include <iostream>
using namespace std;

class CHamster :public CThuCung
{
private:
	int MauLong;

public:
	CHamster();
	CHamster(int maulong);
	~CHamster();

	void Nhap();
	void Xuat();
	float TinhTienAn();
};