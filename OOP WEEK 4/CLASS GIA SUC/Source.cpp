#include <iostream>
#include "QuanLyGiaSuc.h"
using namespace std;

int main()
{
	QuanLyGiaSuc a;
	a.Nhap();
	system("cls");
	cout << "THONG TIN DAN GIA SUC" << endl;
	cout << "------------------------------------" << endl;
	cout << "KEU DOI" << endl;
	a.KeuDoi();
	cout << "------------------------------------" << endl;
	cout << "+ Tong so con cua dan gia suc: " << a.TongSoCon() << endl;
	cout << "+ Tong luong sua cua dan gia suc: " << a.TongLuongSua() << " lit" << endl;
	cout << "------------------------------------" << endl;

	system("pause");
	return 0;
}