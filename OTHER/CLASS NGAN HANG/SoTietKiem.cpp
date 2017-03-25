#include "SoTietKiem.h"



CSoTietKiem::CSoTietKiem()
{
}


CSoTietKiem::~CSoTietKiem()
{
}

void CSoTietKiem::Nhap()
{
	fflush(stdin);
	cout << "   + Nhap so CMND: ";
	getchar();
	getline(cin, CMND);

	fflush(stdin);
	cout << "   + Nhap ho va ten: ";
	getline(cin, HoTen);

	cout << "   + Nhap so tien gui: ";
	cin >> SoTienGui;

	cout << "   + Nhap lai suat: ";
	cin >> LaiSuat;

	cout << "   + Nhap ngay lap so: " << endl;
	NgayLapSo.Nhap();
}

void CSoTietKiem::Xuat()
{
	cout << "   + So CMND: " << CMND << endl;
	cout << "   + Ho ten: " << HoTen << endl;
	cout << "   + So tien gui: " << SoTienGui << endl;
	cout << "   + Lai suat: " << SoTienGui << endl;
	cout << "   + Lai suat: " << LaiSuat << endl;
	cout << "   + Ngay lap so: ";
	NgayLapSo.Xuat();
	cout << endl;
}
