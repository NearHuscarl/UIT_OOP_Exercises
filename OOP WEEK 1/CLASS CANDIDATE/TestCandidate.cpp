#include "TestCandidate.h"
#include <iostream>
using namespace std;

TestCandidate::TestCandidate(void)
{
}
TestCandidate::~TestCandidate(void)
{
}

void TestCandidate::set_So_Luong(int n)
{
	So_Luong = n;
}

int TestCandidate::get_So_Luong()
{
	return So_Luong;
}

void TestCandidate::Nhap()
{
	for (int i = 0; i < get_So_Luong(); i++)
	{
		cout << "\n\nNHAP THI SINH THU " << i + 1 << endl;
		Thi_Sinh[i].Nhap();
		cout << "__________________";
	}
}

void TestCandidate::Xuat_Day_Du()
{
	int count = 0;
	for (int i = 0; i < get_So_Luong(); i++)
	{
		if (Thi_Sinh[i].Diem_Tren_15() == true)
		count++;
		cout << "\n\nTHI SINH THU " << count << endl;
		Thi_Sinh[i].Xuat();
		cout << "__________________";
	}
}