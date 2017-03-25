#pragma once
#include "Candidate.h"

class TestCandidate
{
private:
	int So_Luong;
	Candidate Thi_Sinh[100];

public:
	TestCandidate(void);
	~TestCandidate(void);
	
	void set_So_Luong(int);
	int get_So_Luong();

	void Nhap();
	void Xuat();
	bool Diem_Tren_15();
	void Xuat_Day_Du();
};

