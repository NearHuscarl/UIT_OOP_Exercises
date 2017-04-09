#include "DoanThang.h"
#include "HinhChuNhat.h"
#include "HinhBinhHanh.h"
#include <iostream>
#include <cmath>
using namespace std;

bool HinhChuNhat::isHopLe()
{
	DoanThang AB(A, B), BC(B, C), CD(C, D), DA(D, A);

	if (HinhBinhHanh::isHopLe() == true && (DA.IsSongSongOy() == true && BC.IsSongSongOy() == true) ||
		(AB.IsSongSongOy() == true && CD.IsSongSongOy() == true))
		return true;
	else
		return false;
}

HinhChuNhat::HinhChuNhat()
{
}

HinhChuNhat::HinhChuNhat(Diem DiemA, Diem DiemB, Diem DiemC, Diem DiemD)
{
	A = DiemA;
	B = DiemB;
	C = DiemC;
	D = DiemD;
}

HinhChuNhat::~HinhChuNhat()
{
}

void HinhChuNhat::Nhap()
{
	do {
		system("cls");
		CTuGiac::Nhap();
	} while (isHopLe() == false);
}

void HinhChuNhat::HienThiTinhChat()
{
	DoanThang AB(A, B), BC(B, C), CD(C, D), DA(D, A);

	system("cls");
	cout << "HINH CHU NHAT ABCD" << endl;
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
	cout << "* MOI QUAN HE GIUA CAC CANH, CAC GOC" << endl;
	cout << "+ Hinh chu nhat ABCD co 4 goc A, B, C, D bang 90 do" << endl;
	if (AB.IsSongSongOx() == true && CD.IsSongSongOx() == true)
	{
		cout << "+ Hai canh doi AB va CD song song voi nhau" << endl;
		cout << "+ Hai canh doi AB va CD bang nhau: AB = CD = " << AB.DoDai() << endl;
		cout << "+ Hai canh doi AD va BC song song voi nhau" << endl;
		cout << "+ Hai canh doi AD va BC bang nhau: AD = BC = " << DA.DoDai() << endl;
	}

	else if (BC.IsSongSongOx() == true && DA.IsSongSongOx() == true)
	{
		cout << "+ Hai canh doi AD va BC song song voi nhau" << endl;
		cout << "+ Hai canh doi AD va BC bang nhau: AD = BC = " << BC.DoDai() << endl;
		cout << "+ Hai canh doi AB va CD song song voi nhau" << endl;
		cout << "+ Hai canh doi AB va CD bang nhau: AB = CD = " << AB.DoDai() << endl;
	}
	cout << "---------------------------------------" << endl;
	cout << "+ DIEN TICH: " << TinhDienTich() << endl;
	cout << "------------------------------------------" << endl;
}

double HinhChuNhat::TinhDienTich()
{
	DoanThang AB(A, B), BC(B, C), CD(C, D), DA(D, A);
	double DienTich = 0;

	if (DA.IsSongSongOy() == true && BC.IsSongSongOy() == true)
		DienTich = (AB.DoDai() + BC.DoDai()) * 2;
	else if (AB.IsSongSongOy() == true && CD.IsSongSongOy() == true)
		DienTich = (DA.DoDai() + CD.DoDai()) * 2;
	return DienTich;
}