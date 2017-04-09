#include "DoanThang.h"
#include "HinhThang.h"
#include <iostream>
#include <cmath>
using namespace std;

bool HinhThang::isHopLe()
{
	DoanThang AB(A, B), BC(B, C), CD(C, D), DA(D, A);

	if (((AB.IsSongSongOx() == true && CD.IsSongSongOx() == true)) || (BC.IsSongSongOx() == true && DA.IsSongSongOx() == true))
		return true;
	else
		return false;
}

HinhThang::HinhThang()
{
}

HinhThang::HinhThang(Diem DiemA, Diem DiemB, Diem DiemC, Diem DiemD)
{
	A = DiemA;
	B = DiemB;
	C = DiemC;
	D = DiemD;
}

HinhThang::~HinhThang()
{
}

void HinhThang::Nhap()
{
	do {
		system("cls");
		CTuGiac::Nhap();
	} while (isHopLe() == false);
}

void HinhThang::HienThiTinhChat()
{
	DoanThang AB(A, B), BC(B, C), CD(C, D), DA(D, A);

	system("cls");
	cout << "HINH THANG ABCD" << endl;
	cout << "---------------------------------------" << endl;
	cout << "* TOA DO 4 DINH (A, B, C, D)" << endl;
	cout << "+ Dinh A: ";
	A.Xuat();
	cout << "+ Dinh B: ";
	B.Xuat();
	cout << "+ Dinh C: ";
	C.Xuat();
	cout << "+ Dinh D: ";
	D.Xuat();
	cout << "---------------------------------------" << endl;
	cout << "* DO DAI CAC CANH" << endl;
	cout << "+ Canh AB: " << AB.DoDai() << endl;
	cout << "+ Canh BC: " << BC.DoDai() << endl;
	cout << "+ Canh CD: " << CD.DoDai() << endl;
	cout << "+ Canh AD: " << DA.DoDai() << endl;
	cout << "---------------------------------------" << endl;
	cout << "* MOI QUAN HE GIUA CAC CANH" << endl;
	if (AB.IsSongSongOx() == true && CD.IsSongSongOx() == true)
	{
		cout << "+ Hai canh day AB va CD song song voi nhau" << endl;
		if (AB.DoDai() > CD.DoDai())
		{
			cout << "+ Do dai day lon: AB = " << AB.DoDai() << endl;
			cout << "+ Do dai day be: CD = " << CD.DoDai() << endl;
		}
		else
		{
			cout << "+ Do dai day lon: CD = " << CD.DoDai() << endl;
			cout << "+ Do dai day be: AB = " << AB.DoDai() << endl;
		}
	}

	else if (BC.IsSongSongOx() == true && DA.IsSongSongOx() == true)
	{
		cout << "+ Hai canh day BC va AD song song voi nhau" << endl;
		if (BC.DoDai() > DA.DoDai())
		{
			cout << "+ Do dai day lon: BC = " << BC.DoDai() << endl;
			cout << "+ Do dai day be: AD = " << DA.DoDai() << endl;
		}
		else
		{
			cout << "+ Do dai day lon: AD = " << DA.DoDai() << endl;
			cout << "+ Do dai day be: BC = " << BC.DoDai() << endl;
		}
	}
	cout << "--------------------------------" << endl;
	cout << "* DIEN TICH: " << TinhDienTich() << endl;
	cout << "--------------------------------" << endl;
}

double HinhThang::TinhDienTich()
{
	DoanThang AB(A, B), BC(B, C), CD(C, D), DA(D, A);
	double ChieuCao = 0, DienTich = 0;

	if (AB.IsSongSongOx() == true && CD.IsSongSongOx() == true)
	{
		ChieuCao = abs(A.getY() - C.getY());
		DienTich = ((AB.DoDai() + CD.DoDai()) / 2)*ChieuCao;
	}
	else if (BC.IsSongSongOx() == true && DA.IsSongSongOx() == true)
	{
		ChieuCao = abs(B.getY() - D.getY());
		DienTich = ((BC.DoDai() + DA.DoDai()) / 2)*ChieuCao;
	}
	return DienTich;
}