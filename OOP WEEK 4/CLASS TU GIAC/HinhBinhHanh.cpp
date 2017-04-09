#include "DoanThang.h"
#include "HinhBinhHanh.h"
#include <iostream>
#include <cmath>
using namespace std;

bool HinhBinhHanh::isHopLe()
{
	DoanThang AB(A, B), BC(B, C), CD(C, D), DA(D, A);

	if (HinhThang::isHopLe() == true && (AB.DoDai() == CD.DoDai() || DA.DoDai() == BC.DoDai()))
		return true;
	else
		return false;
}

HinhBinhHanh::HinhBinhHanh()
{
}

HinhBinhHanh::HinhBinhHanh(Diem DiemA, Diem DiemB, Diem DiemC, Diem DiemD)
{
	A = DiemA;
	B = DiemB;
	C = DiemC;
	D = DiemD;
}

HinhBinhHanh::~HinhBinhHanh()
{
}

void HinhBinhHanh::Nhap()
{
	do {
		system("cls");
		CTuGiac::Nhap();
	} while (isHopLe() == false);
}

void HinhBinhHanh::HienThiTinhChat()
{
	DoanThang AB(A, B), BC(B, C), CD(C, D), DA(D, A);

	system("cls");
	cout << "HINH BINH HANH ABCD" << endl;
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
		cout << "+ Hai canh doi AB va CD song song voi nhau" << endl;
		cout << "+ Hai canh doi AB va CD bang nhau: AB = CD = " << AB.DoDai() << endl;
	}

	else if (BC.IsSongSongOx() == true && DA.IsSongSongOx() == true)
	{
		cout << "+ Hai canh doi AD va BC song song voi nhau" << endl;
		cout << "+ Hai canh doi AD va BC bang nhau: AD = BC = " << BC.DoDai() << endl;
	}
	cout << "---------------------------------------" << endl;
	cout << "* DIEN TICH: " << TinhDienTich() << endl;
	cout << "---------------------------------------" << endl;
}

double HinhBinhHanh::TinhDienTich()
{
	DoanThang AB(A, B), BC(B, C), CD(C, D), DA(D, A);
	double CanhDay = 0, ChieuCao = 0, DienTich = 0;

	if (AB.DoDai() == CD.DoDai())
	{
		CanhDay = CD.DoDai();
		ChieuCao = abs(A.getY() - C.getY());
	}
	else if (DA.DoDai() == BC.DoDai())
	{
		CanhDay = BC.DoDai();
		ChieuCao = abs(A.getY() - B.getY());
	}
	DienTich = CanhDay*ChieuCao;
	return DienTich;
}