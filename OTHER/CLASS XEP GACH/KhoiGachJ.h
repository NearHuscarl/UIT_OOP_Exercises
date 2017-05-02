#pragma once
#include "KhoiGach.h"
class CKhoiGachJ : public CKhoiGach
{
public:
	CKhoiGachJ();
	~CKhoiGachJ();

	int getMauSac();
	void setMauSac(int GiaTri);

	void SangPhai();
	void SangTrai();
	void XuongDuoi();
	void Xoay();
	void CoDinh();
	void HienThiThongTin();
};