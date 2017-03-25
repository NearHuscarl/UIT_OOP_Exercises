#include "KhoangThoiGian.h"
#include <iostream>
using namespace std;

int main()
{
	CKhoangThoiGian a, b, c;
	cout << "NHAP KHOANG THOI GIAN THU NHAT" << endl;
	a.Nhap();
	cout << "NHAP KHOANG THOI GIAN THU HAI" << endl;
	b.Nhap();

	cout << "KHOANG THOI GIAN THU NHAT" << endl
		<< "(Da duoc chuan hoa)" << endl;
	a.Xuat();

	cout << "\nKHOANG THOI GIAN THU HAI" << endl
		<< "(Da duoc chuan hoa)" << endl;
	b.Xuat();
	cout << "______________________________\n" << endl;

	cout << "TONG CUA KHOANG THOI GIAN THU NHAT VA KHOANG THOI GIAN THU HAI LA:" << endl;
	c = a.Cong(b);
	c.Xuat();
	cout << "______________________________\n" << endl;

	cout << "HIEU CUA KHOANG THOI GIAN THU NHAT VA KHOANG THOI GIAN THU HAI LA:" << endl;
	c = a.Tru(b);
	c.Xuat();
	cout << "______________________________\n" << endl;

	system("pause");
	return 0;
}