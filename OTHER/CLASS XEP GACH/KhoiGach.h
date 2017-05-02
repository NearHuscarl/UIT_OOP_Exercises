#pragma once
#include <iostream>
#include <string>
using namespace std;

class CKhoiGach
{
protected:
	int MauSac;

public:
	CKhoiGach();
	~CKhoiGach();

	virtual int getMauSac();
	virtual void setMauSac(int GiaTri);

	virtual void SangPhai();
	virtual void SangTrai();
	virtual void XuongDuoi();
	virtual void Xoay();
	virtual void CoDinh();
	virtual void HienThiThongTin();
};