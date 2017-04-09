#include "DoanThang.h"
#include "HinhChuNhat.h"
#include "HinhVuong.h"
#include <iostream>
using namespace std;

bool HinhVuong::isHopLe()
{
	DoanThang AB(A, B), BC(B, C), CD(C, D), DA(D, A);

	if (HinhChuNhat::isHopLe() == true && DA.DoDai() == BC.DoDai() == AB.DoDai() && AB.DoDai() == CD.DoDai() == DA.DoDai())
		return true;
	else
		return false;
}

HinhVuong::HinhVuong()
{
}

HinhVuong::HinhVuong(Diem DiemA, Diem DiemB, Diem DiemC, Diem DiemD)
{
	A = DiemA;
	B = DiemB;
	C = DiemC;
	D = DiemD;
}

HinhVuong::~HinhVuong()
{
}

void HinhVuong::Nhap()
{
	do {
		system("cls");
		CTuGiac::Nhap();
	} while (isHopLe() == false);
}

void HinhVuong::HienThiTinhChat()
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
	cout << "* MOI QUAN HE GIUA CAC CANH, CAC GOC" << endl;
	cout << "+ Hinh vuong ABCD co 4 goc A, B, C, D bang 90 do" << endl;
	if (AB.IsSongSongOx() == true && CD.IsSongSongOx() == true)
	{
		cout << "+ Hai cap canh doi AB va CD, AD va BC song song voi nhau" << endl;
		cout << "+ Hai cap canh doi AB va CD, AD va BC co do dai bang nhau: AB = CD = AD = BC = " << AB.DoDai() << endl;
	}

	else if (BC.IsSongSongOx() == true && DA.IsSongSongOx() == true)
	{
		cout << "+ Hai cap canh doi AD va BC, AB va CD song song voi nhau" << endl;
		cout << "+ Hai cap canh doi AD va BC, AB va CD co do dai bang nhau: AD = BC = AB = CD = " << DA.DoDai() << endl;
	}
	cout << "---------------------------------------" << endl;
	cout << "* DIEN TICH: " << TinhDienTich() << endl;
	cout << "---------------------------------------" << endl;
}

double HinhVuong::TinhDienTich()
{
	DoanThang AB(A, B);
	return AB.DoDai() * AB.DoDai();
}