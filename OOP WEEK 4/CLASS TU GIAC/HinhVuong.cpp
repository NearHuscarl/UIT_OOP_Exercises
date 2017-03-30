#include "HinhVuong.h"
#include "Diem.h"
#include "DoanThang.h"
#include <iostream>
using namespace std;

CHinhVuong::CHinhVuong()
{
}

CHinhVuong::~CHinhVuong()
{
}

void CHinhVuong::Nhap()
{
}

void CHinhVuong::HienThiTinhChat()
{
	CDoanThang AB(A, B), BC(B, C), CD(C, D), DA(D, A);
	
	system("cls");
	cout << "HINH VUONG ABCD" << endl;
	cout << "--------------------------------" << endl;
	cout << "+ Toa do 4 dinh" << endl;
	cout << "Dinh A: ";
	A.Xuat();
	cout << "Dinh B: ";
	B.Xuat();
	cout << "Dinh C: ";
	C.Xuat();
	cout << "Dinh D: ";
	D.Xuat();
	cout << "--------------------------------" << endl;
	cout << "* DO DAI CAC CANH" << endl;
	cout << "Canh AB: " << AB.DoDai() << endl;
	cout << "Canh BC: " << BC.DoDai() << endl;
	cout << "Canh CD: " << CD.DoDai() << endl;
	cout << "Canh DA: " << DA.DoDai() << endl;
	cout << "Hinh vuong ABCD co 4 canh bang nhau va bang" << AB.DoDai() << endl;
	cout << "--------------------------------" << endl;
	cout << "* SU SONG SONG CUA CAC CANH" << endl;
	cout << "";
	cout << "--------------------------------" << endl;
	cout << "Dien tich: " << TinhDienTich() << endl;
}

double CHinhVuong::TinhDienTich()
{
	CDoanThang temp(A, B);
	return temp.DoDai() * temp.DoDai();
}
