#include "NgheSi.h"
#include <iostream>
#include <string>
using namespace std;

CNgheSi::CNgheSi()
{
}

CNgheSi::~CNgheSi()
{
}

string CNgheSi::getTenSanKhau()
{
	return TenSanKhau;
}

void CNgheSi::setTenSanKhau(string SanKhau)
{
	TenSanKhau = SanKhau;
}

void CNgheSi::Nhap()
{
	CNguoi::Nhap();

	fflush(stdin);
	cout << "Nhap ten san khau: ";
	getchar();
	getline(cin, TenSanKhau);

	cout << "Nhap muc catxe: ";
	cin >> CatXe;
}

void CNgheSi::Xuat()
{
	CNguoi::Xuat();

	cout << "Ten an khau: " << TenSanKhau << endl;
	cout << "Muc catxe: " << CatXe << endl;
}