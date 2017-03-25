#include "DaGiac.h"
#include <iostream>
using namespace std;

int main()
{
    float x, y, rad, k;
    CDaGiac a;

    a.Nhap();
    a.Xuat();
    cout << "___________________________" << endl;

    cout << "\nTinh tien theo vector v(x,y): " << endl;
    cout << "x = ";
    cin >> x;
    cout << "y = ";
    cin >> y;
    a.TinhTien(x, y);
    a.Xuat();
    cout << "___________________________" << endl;

    cout << "\nNhap so do goc quay, rad = ";
    cin >> rad;
    a.Quay(rad);
    a.Xuat();
    cout << "___________________________" << endl;

    cout << "\nNhap he so thu phong, k = ";
    cin >> k;
    a.ThuPhong(k);
    a.Xuat();

    system("pause");
    return 0;
}