#pragma once
#include "KhoiGach.h"
class CKhoiGachO : public CKhoiGach
{
public:
	CKhoiGachO();
	~CKhoiGachO();

	int getMauSac();
	void setMauSac(int GiaTri);

	void SangPhai();
	void SangTrai();
	void XuongDuoi();
	void Xoay();
	void CoDinh();
	void HienThiThongTin();
};