#include "XepGach.h"
#include "KhoiGachI.h"
#include "KhoiGachJ.h"
#include "KhoiGachL.h"
#include "KhoiGachO.h"
#include "KhoiGachS.h"
#include "KhoiGachT.h"
#include "KhoiGachZ.h"

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int CXepGach::SoKhoiGachDaTao = 0;

int CXepGach::TaoSoNgauNhien(int GiaTriMin, int GiaTriMax)
{
	srand(time(NULL));
	return rand() % GiaTriMax + GiaTriMin;
}

CXepGach::CXepGach()
{
	MangKhoiGach[0] = new CKhoiGachI;
	MangKhoiGach[1] = new CKhoiGachJ;
	MangKhoiGach[2] = new CKhoiGachL;
	MangKhoiGach[3] = new CKhoiGachO;
	MangKhoiGach[4] = new CKhoiGachS;
	MangKhoiGach[5] = new CKhoiGachT;
	MangKhoiGach[6] = new CKhoiGachZ;
}

CXepGach::~CXepGach()
{
}

void CXepGach::HienThi()
{
	int LuaChon;

	system("cls");
	do {
		cout << "CHUONG TRINH MO PHONG TRO CHOI XEP GACH (TETRIS)" << endl;
		cout << "--------------------------------------------------" << endl;
		cout << "Nhap mot lua chon: " << endl;
		cout << "1. Tao mot khoi gach ngau nhien" << endl;
		cout << "2. Thoat" << endl;
		cout << "--------------------------------------------------" << endl;
		cout << "> Lua chon: ";
		cin >> LuaChon;
	} while (LuaChon < 1 || LuaChon > 2);

	switch (LuaChon)
	{
	case 1:
		TaoKhoiGach();
	case 2:
		return;
	}
}

void CXepGach::DieuKhien(int LoaiKhoiGach)
{
	int LuaChon;
	cout << "DIEU KHIEN KHOI GACH" << endl;
	cout << "------------------------" << endl;
	cout << "1. Dich sang trai" << endl;
	cout << "2. Dich sang phai" << endl;
	cout << "3. Dich xuong duoi" << endl;
	cout << "4. Xoay khoi gach" << endl;
	cout << "5. Co dinh khoi gach" << endl;
	cout << "------------------------" << endl;

	do {
		cout << "> Lua chon: ";
		cin >> LuaChon;

		switch (LuaChon)
		{
		case 1:
			MangKhoiGach[LoaiKhoiGach]->SangTrai();
			break;
		case 2:
			MangKhoiGach[LoaiKhoiGach]->SangPhai();
			break;
		case 3:
			MangKhoiGach[LoaiKhoiGach]->XuongDuoi();
			break;
		case 4:
			MangKhoiGach[LoaiKhoiGach]->Xoay();
			break;
		case 5:
			MangKhoiGach[LoaiKhoiGach]->CoDinh();
			system("pause");
			HienThi();
			break;
		}
	} while (LuaChon < 1 || LuaChon > 5 || LuaChon != 5);
}

void CXepGach::TaoKhoiGach()
{
	int KhoiGachNgauNhien = TaoSoNgauNhien(0, 6);
	int MauSacNgauNhien = TaoSoNgauNhien(1, 10);

	system("cls");
	cout << "THONG TIN KHOI GACH" << endl;
	cout << "------------------------" << endl;
	SoKhoiGachDaTao++;
	cout << "+ STT khoi gach: " << SoKhoiGachDaTao << endl;
	MangKhoiGach[KhoiGachNgauNhien]->setMauSac(MauSacNgauNhien);
	MangKhoiGach[KhoiGachNgauNhien]->HienThiThongTin();
	cout << "------------------------" << endl;
	DieuKhien(KhoiGachNgauNhien);
}