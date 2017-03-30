#include "TuGiac.h"

CTuGiac::CTuGiac()
{
}

CTuGiac::CTuGiac(CDiem DiemA, CDiem DiemB, CDiem DiemC, CDiem DiemD)
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
	cout << "NHAP TOA DO DIEM A:" << endl;
	A.Nhap();

	cout << "NHAP TOA DO DIEM B:" << endl;
	B.Nhap();

	cout << "NHAP TOA DO DIEM C:" << endl;
	C.Nhap();

	cout << "NHAP TOA DO DIEM D:" << endl;
	D.Nhap();
}

void CTuGiac::HienThiTinhChat()
{
}

double CTuGiac::TinhDienTich()
{
	return 0;
}