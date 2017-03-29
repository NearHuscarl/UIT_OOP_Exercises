#include "PhieuKhamBenh.h"
#include <iostream>
#include <string>
using namespace std;

PhieuKhamBenh::PhieuKhamBenh()
{
}

PhieuKhamBenh::~PhieuKhamBenh()
{
}

void PhieuKhamBenh::Nhap()
{
	cout << "NHAP THONG TIN PHIEU KHAM BENH" << endl;
	cout << "-------------------------------------------" << endl;

	fflush(stdin);
	cout << "Nhap ma phieu: ";
	getline(cin, MaPhieu);

	ThongTinBenhNhan.Nhap();

	ThongTinBacSi.Nhap();

	CacTrieuChung.Nhap();

	fflush(stdin);
	cout << "Nhap ket luan: ";
	getline(cin, KetLuan);
}

void PhieuKhamBenh::Xuat()
{
	system("cls");
	cout << "PHIEU KHAM BENH" << endl;
	cout << "-------------------------------------------" << endl;
	cout << "Ma phieu: " << MaPhieu << endl;
	ThongTinBenhNhan.Xuat();
	cout << "-------------------------------------------" << endl;
	ThongTinBacSi.Xuat();
	cout << "-------------------------------------------" << endl;
	cout << "Ma trieu chung \t | Ten trieu chung" << endl;
	cout << "-------------------------------------------" << endl;
	CacTrieuChung.Xuat();
	cout << "-------------------------------------------" << endl;
	cout << "Ket luan: " << KetLuan << endl;
	cout << "-------------------------------------------" << endl;
}
