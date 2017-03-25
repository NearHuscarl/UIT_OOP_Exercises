#include "Candidate.h"
#include <iostream>
#include <string>
using namespace std;

Candidate::Candidate(void)
{
}

Candidate::~Candidate(void)
{
}

void Candidate::Nhap()
{
	fflush(stdin);
	cout << "Nhap ma so thi sinh: ";
	getline(cin, Ma_So);

	fflush(stdin);
	cout << "Nhap ho va ten thi sinh: ";
	getline(cin, Ho_Ten);

	fflush(stdin);
	cout << "Nhap ngay/ thang/ nam sinh: " << endl;
	Ngay_Sinh.Nhap();

	cout << "Nhap diem Toan: ";
	cin >> Diem_Toan;

	cout << "Nhap diem Van: ";
	cin >> Diem_Van;

	cout << "Nhap diem Anh: ";
	cin >> Diem_Anh;
}

void Candidate::Xuat()
{
	cout << "Ma so thi sinh: " << Ma_So << endl;
	cout << "Ho va ten thi sinh: " << Ho_Ten << endl;
	cout << "Ngay/ thang/ nam sinh: ";
	Ngay_Sinh.Xuat();
	cout << "Diem Toan: " << Diem_Toan << endl;
	cout << "Diem Van: " << Diem_Van << endl;
	cout << "Nhap diem Anh: " << Diem_Anh << endl;
}

bool Candidate::Diem_Tren_15()
{
	float Tong_Diem = Diem_Toan + Diem_Van + Diem_Anh;
	if (Tong_Diem > 15)
		return true;
	else
		return false;
}