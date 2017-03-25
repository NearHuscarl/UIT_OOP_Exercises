#include "Date.h"
#include <iostream>
using namespace std;

int main()
{
	int n;
	CDate a, b, c;
	a.Nhap();

	cout << "Ngay ke tiep ngay vua nhap la: " << endl;
	c = a.NgayKe();
	c.Xuat();

	cout << "\nNgay phia truoc ngay vua nhap la: " << endl;
	c = a.NgayTruoc();
	c.Xuat();

	cout << "______________________________\n" << endl;
	cout << "Nhap vao mot so luong ngay: ";
	cin >> n;

	cout << "\n" << n << " ngay ke tiep ngay vua nhap la: " << endl;
	c = a.nNgayKe(n);
	c.Xuat();

	cout << "\n" << n << " ngay truoc ngay vua nhap la: " << endl;
	c = a.nNgayTruoc(n);
	c.Xuat();

	cout << "______________________________\n" << endl;
	b.Nhap();
	cout << "Khoang cach giua ngay thu nhat va ngay thu hai la: " << b.KhoangCach2Ngay(a) << " ngay" << endl;

	system("pause");
	return 0;
}