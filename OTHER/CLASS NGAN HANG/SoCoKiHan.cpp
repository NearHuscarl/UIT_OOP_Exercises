#include "SoCoKiHan.h"
#include "SoTietKiem.h"

CSoCoKiHan::CSoCoKiHan()
{
}

CSoCoKiHan::~CSoCoKiHan()
{
}

void CSoCoKiHan::Nhap()
{
	CSoTietKiem::Nhap();
	cout << "   + Nhap ki han:";
	cin >> KiHan;

	cout << "   + Nhap so thang gui:";
	cin >> SoThangGui;
}

void CSoCoKiHan::Xuat()
{
	CSoTietKiem::Xuat();
	cout << "   + Ki han: " << KiHan << endl;
	cout << "   + So thang gui: " << SoThangGui << endl;
}

double CSoCoKiHan::getLaiSuat()
{
	if (SoThangGui > KiHan)
	{
		return SoTienGui * LaiSuat * SoThangGui;
	}
	else
		return 0;
}
