#include "SoKhongKiHan.h"
#include "SoTietKiem.h"



CSoKhongKiHan::CSoKhongKiHan()
{
}


CSoKhongKiHan::~CSoKhongKiHan()
{
}

void CSoKhongKiHan::Nhap()
{
	CSoTietKiem::Nhap();
	cout << "   + Nhap so thang gui:";
	cin >> SoThangGui;
}

void CSoKhongKiHan::Xuat()
{
	CSoTietKiem::Xuat();
	cout << "   + So thang gui:" << SoThangGui << endl;
}

double CSoKhongKiHan::TienLai()
{
	return SoTienGui * LaiSuat * SoThangGui;
}
