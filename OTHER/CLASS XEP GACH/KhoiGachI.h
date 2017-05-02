#pragma once
#include "KhoiGach.h"
class CKhoiGachI : public CKhoiGach
{
public:
	CKhoiGachI();
	~CKhoiGachI();

	int getMauSac();
	void setMauSac(int GiaTri);

	void SangPhai();
	void SangTrai();
	void XuongDuoi();
	void Xoay();
	void CoDinh();
	void HienThiThongTin();
};