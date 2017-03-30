#pragma once
#include "GiaSuc.h"
#include "Bo.h"
#include "Cuu.h"
#include "De.h"

class QuanLyGiaSuc
{
private:
	int SoLuongBo;
	int SoLuongCuu;
	int SoLuongDe;

	Bo *MangBo;
	Cuu *MangCuu;
	De *MangDe;

public:
	QuanLyGiaSuc();
	~QuanLyGiaSuc();

	void Nhap();
	void KeuDoi();
	int TongSoCon();
	int TongLuongSua();
};