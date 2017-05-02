#pragma once
#include "KhoiGach.h"
class CKhoiGachZ : public CKhoiGach
{
public:
	CKhoiGachZ();
	~CKhoiGachZ();

	int getMauSac();
	void setMauSac(int GiaTri);

	void SangPhai();
	void SangTrai();
	void XuongDuoi();
	void Xoay();
	void CoDinh();
	void HienThiThongTin();
};