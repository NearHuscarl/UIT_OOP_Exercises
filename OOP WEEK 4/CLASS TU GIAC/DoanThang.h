#pragma once
#include "Diem.h"
#include <iostream>
using namespace std;

class CDoanThang
{
private:
	CDiem A;
	CDiem B;

public:
	CDoanThang();
	CDoanThang(CDiem DiemA, CDiem DiemB);
	~CDoanThang();

	void Nhap();
	float DoDai();
	bool IsSongSongOx();
	bool IsSongSongOy();
	bool IsTrung(CDoanThang x);
	int IsVuongGoc(CDoanThang x);
};

