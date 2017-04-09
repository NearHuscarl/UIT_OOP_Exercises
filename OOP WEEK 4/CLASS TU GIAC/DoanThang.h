#pragma once
#include "Diem.h"
#include <iostream>
using namespace std;

class DoanThang
{
private:
	Diem A;
	Diem B;

public:
	DoanThang();
	DoanThang(Diem DiemA, Diem DiemB);
	~DoanThang();

	void Nhap();
	float DoDai();
	bool IsSongSongOx();
	bool IsSongSongOy();
};