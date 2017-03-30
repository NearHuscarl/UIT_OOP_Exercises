#include "DoanThang.h"
#include "Diem.h"
#include "Vector.h"
#include <iostream>
using namespace std;

CDoanThang::CDoanThang()
{
}

CDoanThang::CDoanThang(CDiem DiemA, CDiem DiemB)
{
	A = DiemA;
	B = DiemB;
}

CDoanThang::~CDoanThang()
{
}

void CDoanThang::Nhap()
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

float CDoanThang::DoDai()
{
	return sqrt(pow(B.getX() - A.getX(), 2) + pow(B.getY() - A.getY(), 2));
}

bool CDoanThang::IsSongSongOx()
{
	float d1 = A.getY();
	float d2 = B.getY();
	if (A.getX() != B.getX() && A.getY() == B.getY())
		return true;
	else
		return false;
}

bool CDoanThang::IsSongSongOy()
{
	float d1 = A.getY();
	float d2 = B.getY();
	if (A.getY() != B.getY() && A.getX() == B.getX())
		return true;
	else
		return false;
}

//bool CDoanThang::IsTrung(CDoanThang x)
//{
//	if (A.getY() == B.getY())
//	{
//		if (A.getY() == x.A.getY() == x.B.getY())
//			return true;
//	}
//	else if (A.getX() == B.getX())
//	{
//		if (A.getX() == x.A.getX() == x.B.getX())
//			return true;
//	}
//	else
//		return false;
//}

//int CDoanThang::IsVuongGoc(CDoanThang x)
//{
//	CVector VectorA(this->A.getX() - this->B.getX(), this->A.getY() - this->B.getY());
//	CVector VectorB(x.A.getX() - x.B.getX(), x.A.getY() - x.B.getY());
//	if (VectorA.TichVoHuong(VectorB) == 0)
//		return true;
//	else
//		return false;
//}
