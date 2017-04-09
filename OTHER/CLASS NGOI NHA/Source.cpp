#include "NgoiNha.h"
#include <iostream>
using namespace std;

int main()
{
	CNgoiNha a;
	a.Nhap();
	a.Xuat();
	cout << "+ Tong tien an cua dan thu cung: " << a.TongTienAn() << endl;
	cout << "--------------------------------" << endl;
	system("pause");
	return 0;
}