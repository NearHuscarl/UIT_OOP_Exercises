#pragma once
#include "KhoiGach.h"
class CKhoiGachL : public CKhoiGach
{
public:
	CKhoiGachL();
	~CKhoiGachL();

	int getMauSac();
	void setMauSac(int GiaTri);

	void SangPhai();
	void SangTrai();
	void XuongDuoi();
	void Xoay();
	void CoDinh();
	void HienThiThongTin();
};