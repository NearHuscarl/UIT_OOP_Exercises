#pragma once
#include <iostream>
#include "Nguoi.h"
#include <string>
using namespace std;

class CNgheSi :public CNguoi
{
protected:
	string TenSanKhau;
	double CatXe;

public:
	CNgheSi();
	~CNgheSi();

	string getTenSanKhau();
	void setTenSanKhau(string SanKhau);

	void Nhap();
	void Xuat();
};