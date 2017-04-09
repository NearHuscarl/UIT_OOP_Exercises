#include "NgoiNha.h"
#include <iostream>
using namespace std;

int CNgoiNha::SoLuongCho = 0;
int CNgoiNha::SoLuongMeo = 0;
int CNgoiNha::SoLuongHamster = 0;

CNgoiNha::CNgoiNha()
{
}

CNgoiNha::CNgoiNha(const CNgoiNha & a)
{
	SoLuong = a.SoLuong;
	SoLuongCho = a.SoLuongCho;
	SoLuongMeo = a.SoLuongMeo;
	SoLuongHamster = a.SoLuongHamster;

	MangThuCung = new CThuCung*[SoLuong];
	for (int i = 0; i < SoLuong; i++)
	{
		MangThuCung[i] = a.MangThuCung[i];
	}
}

CNgoiNha::~CNgoiNha()
{
	for (int i = 0; i < SoLuong; i++)
		delete[] MangThuCung[i];
	delete[] MangThuCung;
}

int CNgoiNha::getSoLuongCho()
{
	return SoLuongCho;
}

int CNgoiNha::getSoLuongMeo()
{
	return SoLuongMeo;
}

int CNgoiNha::getSoLuongHamster()
{
	return SoLuongHamster;
}

float CNgoiNha::TongTienAn()
{
	float Tong = 0;
	for (int i = 0; i < SoLuong; i++)
	{
		Tong += MangThuCung[i]->TinhTienAn();
	}
	return Tong;
}

void CNgoiNha::Nhap()
{
	cout << "NHAP THONG TIN DAN THU CUNG" << endl;
	cout << "--------------------------------" << endl;
	cout << "+ Nhap so luong thu cung: ";
	cin >> SoLuong;
	MangThuCung = new CThuCung*[SoLuong];

	int LuaChon;
	for (int i = 0; i < SoLuong; i++)
	{
		system("cls");
		cout << "NHAP THONG TIN DAN THU CUNG" << endl;
		cout << "--------------------------------" << endl;
		cout << "Chon 1 loai thu cung:" << endl;
		cout << "1- Cho" << endl;
		cout << "2- Meo" << endl;
		cout << "3- Hamster" << endl;
		cout << "--------------------------------" << endl;
		cout << "Lua chon: ";
		cin >> LuaChon;
		switch (LuaChon)
		{
		case 1:
		{
			MangThuCung[i] = new CCho;
			MangThuCung[i]->Nhap();
			MangThuCung[i]->setLoaiThuCung(1);
			SoLuongCho++;
			break;
		}
		case 2:
		{
			MangThuCung[i] = new CMeo;
			MangThuCung[i]->Nhap();
			MangThuCung[i]->setLoaiThuCung(2);
			SoLuongMeo++;
			break;
		}
		case 3:
		{
			MangThuCung[i] = new CHamster;
			MangThuCung[i]->Nhap();
			MangThuCung[i]->setLoaiThuCung(3);
			SoLuongHamster++;
			break;
		}
		}
	}
}

void CNgoiNha::Xuat()
{
	system("cls");
	cout << "DANH SACH DAN THU CUNG" << endl;
	cout << "--------------------------------" << endl;
	cout << "* Tong so thu cung: " << SoLuong << " con" << endl;
	cout << "+ So luong cho: " << SoLuongCho << " con" << endl;
	cout << "+ So luong meo: " << SoLuongMeo << " con" << endl;
	cout << "+ So luong hamster: " << SoLuongHamster << " con" << endl;
	cout << "--------------------------------" << endl;

	if (SoLuongCho > 0)
	{
		cout << "DANH SACH DAN CHO (" << SoLuongCho << " CON)" << endl;
		for (int i = 0; i < SoLuong; i++)
		{
			if (MangThuCung[i]->getLoaiThuCung() == 1)
			{
				cout << "--------------------------------" << endl;
				MangThuCung[i]->Xuat();
				cout << "--------------------------------" << endl;
			}
		}
	}

	if (SoLuongMeo > 0)
	{
		cout << "DANH SACH DAN MEO (" << SoLuongMeo << " CON)" << endl;
		for (int i = 0; i < SoLuong; i++)
		{
			if (MangThuCung[i]->getLoaiThuCung() == 2)
			{
				cout << "--------------------------------" << endl;
				MangThuCung[i]->Xuat();
				cout << "--------------------------------" << endl;

			}
		}
	}

	if (SoLuongHamster > 0)
	{
		cout << "DANH SACH DAN HAMSTER (" << SoLuongHamster << " CON)" << endl;
		for (int i = 0; i < SoLuong; i++)
		{
			if (MangThuCung[i]->getLoaiThuCung() == 3)
			{
				cout << "--------------------------------" << endl;
				MangThuCung[i]->Xuat();
				cout << "--------------------------------" << endl;
			}
		}
	}
}