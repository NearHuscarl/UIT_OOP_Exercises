#include "TestCandidate.h"
#include <iostream>
using namespace std;

int main()
{
	int n;
	TestCandidate a;

	cout << "Nhap so luong thi sinh: ";
	cin >> n;

	a.set_So_Luong(n);
	a.Nhap();

	cout << "\n\nDANH SACH CAC THI SINH CO TONG DIEM TREN 15 LA" << endl;
	a.Xuat_Day_Du();
	cout << endl;

	system("pause");
	return 0;
}