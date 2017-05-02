#pragma once
#include "KhoiGach.h"
class CKhoiGachS : public CKhoiGach
{
public:
	CKhoiGachS();
	~CKhoiGachS();

	int getMauSac();
	void setMauSac(int GiaTri);

	void SangPhai();
	void SangTrai();
	void XuongDuoi();
	void Xoay();
	void CoDinh();
	void HienThiThongTin();
};