#include "DoanThang.h"
#include "Diem.h"
#include <iostream>
using namespace std;

DoanThang::DoanThang()
{
}

DoanThang::DoanThang(Diem DiemA, Diem DiemB)
{
	A = DiemA;
	B = DiemB;
}

DoanThang::~DoanThang()
{
}

void DoanThang::Nhap()
{
	cout << "Nhap toa do diem A" << endl;
	A.Nhap();
	cout << "=> A";
	A.Xuat();
	cout << "Nhap toa do diem B" << endl;
	B.Nhap();
	cout << "=> B";
	B.Xuat();
}

float DoanThang::DoDai()
{
	return sqrt(pow(B.getX() - A.getX(), 2) + pow(B.getY() - A.getY(), 2));
}

bool DoanThang::IsSongSongOx()
{
	float d1 = A.getY();
	float d2 = B.getY();
	if (A.getX() != B.getX() && A.getY() == B.getY())
		return true;
	else
		return false;
}

bool DoanThang::IsSongSongOy()
{
	float d1 = A.getY();
	float d2 = B.getY();
	if (A.getY() != B.getY() && A.getX() == B.getX())
		return true;
	else
		return false;
}

bool IsTrungNhau(Diem X, Diem Y)
{
	if (X.getX() == Y.getX() && X.getY() == Y.getY())
		return true;
	else
		return false;
}