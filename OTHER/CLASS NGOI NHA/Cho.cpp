#include "Cho.h"
#include <iostream>
using namespace std;

CCho::CCho()
{
	ChieuCao = ChieuDai = 0;
}

CCho::CCho(float cCao, float cDai)
{
	ChieuCao = cCao;
	ChieuDai = cDai;
}

CCho::~CCho()
{
}

void CCho::Nhap()
{
	CThuCung::Nhap();
	cout << "+ Nhap chieu cao: ";
	cin >> ChieuCao;
	cout << "+ Nhap chieu dai: ";
	cin >> ChieuDai;
}

void CCho::Xuat()
{
	CThuCung::Xuat();
	cout << "+ Chieu cao: " << ChieuCao << endl;
	cout << "+ Chieu dai: " << ChieuDai << endl;
	cout << "+ Tien thuc an: " << TinhTienAn() << endl;
}

float CCho::TinhTienAn()
{
	return CanNang * 0.05;
}