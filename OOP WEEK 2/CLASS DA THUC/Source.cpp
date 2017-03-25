#include <iostream>
#include "DaThuc.h"
using namespace std;

int main()
{
	CDaThuc a, b, c;

	cout << "NHAP DA THUC A" << endl;
	a.Nhap();
	cout << "\nNHAP DA THUC B" << endl;
	b.Nhap();
	cout << "___________________________" << endl;

	cout << "\nDA THUC A ";
	a.Xuat();
	cout << "DA THUC B ";
	b.Xuat();
	cout << "___________________________" << endl;

	cout << "\nTONG CUA HAI DA THUC A VA B LA: \n" << endl;
	c = a.Cong(b);
	c.Xuat();
	cout << "___________________________" << endl;

	cout << "\nHIEU CUA HAI DA THUC A VA B LA: \n" << endl;
	c = a.Tru(b);
	c.Xuat();
	cout << "___________________________" << endl;

	cout << "\nTICH CUA HAI DA THUC A VA B LA: \n" << endl;
	c = a.Nhan(b);
	c.Xuat();
	cout << endl;

	system("pause");
	return 0;
}