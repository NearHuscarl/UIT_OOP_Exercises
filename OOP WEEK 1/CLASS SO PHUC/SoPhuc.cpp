#include "SoPhuc.h"
#include <iostream> 
#include <cmath>
using namespace std;

SoPhuc::SoPhuc(void)
{
}

SoPhuc::~SoPhuc(void)
{
}

void SoPhuc::Nhap()
{
	cout << "Nhap phan thuc cua so phuc: ";
	cin >> PhanThuc;

	cout << "Nhap phan ao cua so phuc: ";
	cin >> PhanAo;
}

void SoPhuc::Xuat()
{
	cout << PhanThuc << "+" << PhanAo << "i" << endl;
}

float SoPhuc::DinhGiaTri()
{
	return sqrt(pow(PhanThuc, 2) * pow(PhanAo, 2));
}

SoPhuc SoPhuc::Cong2SoPhuc(SoPhuc b)
{
	SoPhuc tong;
	tong.PhanThuc = this -> PhanThuc + b.PhanThuc;
	tong.PhanAo = this -> PhanAo + b.PhanAo;
	return tong;
}

SoPhuc SoPhuc::Tru2SoPhuc(SoPhuc b)
{
	SoPhuc hieu;
	hieu.PhanThuc = this -> PhanThuc + b.PhanThuc;
	hieu.PhanAo = this -> PhanAo + b.PhanAo;
	return hieu;
}

SoPhuc SoPhuc::Nhan2SoPhuc(SoPhuc b)
{
	SoPhuc tich;
	tich.PhanThuc = this -> PhanThuc * b.PhanThuc - this -> PhanAo * b.PhanAo;
	tich.PhanAo = this -> PhanThuc * b.PhanAo + this -> PhanAo * b.PhanThuc;
	return tich;
}

SoPhuc SoPhuc::Chia2SoPhuc(SoPhuc b)
{
	SoPhuc thuong;
	float MSC = pow(b.PhanThuc, 2) + pow(b.PhanAo, 2);
	thuong.PhanThuc = (this -> PhanThuc * b.PhanThuc + this -> PhanAo * b.PhanAo) / MSC;
	thuong.PhanAo = (this -> PhanAo * b.PhanThuc - this -> PhanThuc * b.PhanAo) / MSC;
	return thuong;
}