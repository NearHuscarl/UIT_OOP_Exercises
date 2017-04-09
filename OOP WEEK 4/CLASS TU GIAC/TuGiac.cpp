#include "TuGiac.h"
#include <iostream>
using namespace std;

CTuGiac::CTuGiac()
{
}

CTuGiac::CTuGiac(Diem DiemA, Diem DiemB, Diem DiemC, Diem DiemD)
{
	A = DiemA;
	B = DiemB;
	C = DiemC;
	D = DiemD;
}

CTuGiac::~CTuGiac()
{
}

void CTuGiac::Nhap()
{
	cout << "NHAP TOA DO 4 DIEM A, B, C, D" << endl;
	cout << "--------------------------------" << endl;
	cout << "* NHAP TOA DO DIEM A:" << endl;
	A.Nhap();

	cout << "\n* NHAP TOA DO DIEM B:" << endl;
	B.Nhap();

	cout << "\n* NHAP TOA DO DIEM C:" << endl;
	C.Nhap();

	cout << "\n* NHAP TOA DO DIEM D:" << endl;
	D.Nhap();
	cout << "--------------------------------" << endl;
}

void CTuGiac::HienThiTinhChat()
{
}

double CTuGiac::TinhDienTich()
{
	return 0;
}