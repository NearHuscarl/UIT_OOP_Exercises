#pragma once
#include "DateOfBirth.h"
#include <string>
using namespace std;

class Candidate
{
private:
	string Ma_So;
	string Ho_Ten;
	DateOfBirth Ngay_Sinh;
	float Diem_Toan;
	float Diem_Van;
	float Diem_Anh;

public:
	Candidate(void);
	~Candidate(void);

	void Nhap();
	void Xuat();
	bool Diem_Tren_15();
};