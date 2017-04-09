#pragma once
#include "Cho.h"
#include "Meo.h"
#include "Hamster.h"
#include <iostream>
using namespace std;

class CNgoiNha
{
private:
	int SoLuong;
	static int SoLuongCho;
	static int SoLuongMeo;
	static int SoLuongHamster;

	CThuCung **MangThuCung;

public:
	CNgoiNha();
	CNgoiNha(const CNgoiNha &a);
	~CNgoiNha();

	int getSoLuongCho();
	int getSoLuongMeo();
	int getSoLuongHamster();
	float TongTienAn();
	void Nhap();
	void Xuat();
};