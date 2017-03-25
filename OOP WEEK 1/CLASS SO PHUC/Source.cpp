#include "SoPhuc.h"
#include <iostream>
using namespace std;

int main()
{
	SoPhuc a, b;
	SoPhuc tong, hieu, tich, thuong;
	cout << "Nhap so phuc a";
	cout << "\n________________" << endl;
	a.Nhap();

	cout << "So phuc a vua nhap la: ";
	a.Xuat();
	cout << "Module cua so phuc a vua nhap la: " << a.DinhGiaTri() << endl;

	cout << "\nNhap so phuc b";
	cout << "\n________________" << endl;
	b.Nhap();

	cout << "So phuc b vua nhap la: ";
	a.Xuat();
	cout << "Module cua so phuc b vua nhap la: " << a.DinhGiaTri() << endl;

	cout << "\n________________" << endl;
	tong = a.Cong2SoPhuc(b);
	cout << "\nTong cua a va b la: ";
	tong.Xuat();

	hieu = a.Tru2SoPhuc(b);
	cout << "Hieu cua a va b la: ";
	hieu.Xuat();

	tich = a.Nhan2SoPhuc(b);
	cout << "Tich cua a va b la: ";
	tich.Xuat();

	thuong = a.Chia2SoPhuc(b);
	cout << "Thuong cua a va b la: ";
	thuong.Xuat();

	system("Pause");
	return 0;
}