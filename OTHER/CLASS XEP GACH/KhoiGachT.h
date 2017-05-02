#pragma once
#include "KhoiGach.h"
class CKhoiGachT : public CKhoiGach
{
public:
	CKhoiGachT();
	~CKhoiGachT();

	int getMauSac();
	void setMauSac(int GiaTri);

	void SangPhai();
	void SangTrai();
	void XuongDuoi();
	void Xoay();
	void CoDinh();
	void HienThiThongTin();
};