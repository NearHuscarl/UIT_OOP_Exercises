#include "HinhThang.h"
#include <iostream>
using namespace std;

int main()
{
	//CDoanThang a;
	//CDoanThang b;
	//a.Nhap();
	//b.Nhap();
	//cout << "Ox: " << a.IsSongSongOx() << endl;
	//cout << "Oy: " << a.IsSongSongOy() << endl;
	//if (a.IsTrung(b) == true)
	//{
	//	cout << "Doan thang thu nhat trung doan thang thu hai!" << endl;
	//}
	//else
	//	cout << "Doan thang thu nhat khong trung doan thang thu hai!" << endl;

	//if (a.IsVuongGoc(b) == true)
	//{
	//	cout << "Doan thang thu nhat vuong goc voi doan thang thu hai!" << endl;
	//}
	//else
	//	cout << "Doan thang thu nhat khong vuong goc voi doan thang thu hai!" << endl;
	CHinhThang a;
	a.Nhap();
	a.HienThiTinhChat();
	system("pause");
	return 0;
}