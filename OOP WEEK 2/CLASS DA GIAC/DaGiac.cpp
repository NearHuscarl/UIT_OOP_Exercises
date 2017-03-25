#include "DaGiac.h"
#include "Diem.h"
#include <iostream>
#include <cmath>
using namespace std;

CDaGiac::CDaGiac(void)
{
}

CDaGiac::CDaGiac(int n)
{
	SoDinh = n;
	ToaDoDinh = new CDiem[SoDinh];

	for (int i = 0; i < SoDinh; i++)
	{
		cout << "\nTOA DO DINH THU " << i + 1 << endl;
		ToaDoDinh[i].Nhap();
		cout << "_______________________" << endl;
	}
}

CDaGiac::CDaGiac(const CDaGiac &a)
{
	SoDinh = a.SoDinh;
	ToaDoDinh = new CDiem[SoDinh];

	for (int i = 0; i < SoDinh; i++)
	{
		this->ToaDoDinh[i].setXY(a.ToaDoDinh[i].getX(), a.ToaDoDinh[i].getY());
	}
}

CDaGiac::~CDaGiac(void)
{
	delete[] ToaDoDinh;
}

void CDaGiac::Nhap()
{
	cout << "Nhap so dinh cua da giac: ";
	cin >> SoDinh;

	ToaDoDinh = new CDiem[SoDinh];

	for (int i = 0; i < SoDinh; i++)
	{
		cout << "\nTOA DO DINH THU " << i + 1 << endl;
		ToaDoDinh[i].Nhap();
		cout << "_______________________" << endl;
	}
}

void CDaGiac::TinhTien(float dx, float dy)
{
	for (int i = 0; i < SoDinh; i++)
	{
		ToaDoDinh[i].TinhTien(dx, dy);
	}
}

void CDaGiac::Quay(float rad)
{
	for (int i = 0; i < SoDinh; i++)
	{
		float X, Y;

		X = ToaDoDinh[i].getX() * cos(rad) - ToaDoDinh[i].getY() * sin(rad);
		Y = ToaDoDinh[i].getX() * sin(rad) + ToaDoDinh[i].getY() * cos(rad);

		ToaDoDinh[i].setXY(X, Y);
	}
}

void CDaGiac::ThuPhong(float k)
{
	for (int i = 0; i < SoDinh; i++)
	{
		float X, Y;

		X = ToaDoDinh[i].getX() * k;
		Y = ToaDoDinh[i].getY() * k;

		ToaDoDinh[i].setXY(X, Y);
	}
}

void CDaGiac::Xuat()
{
	cout << "\nDa giac duoc tao thanh boi " << SoDinh << " diem: " << endl;
	for (int i = 0; i < SoDinh; i++)
	{
		ToaDoDinh[i].Xuat();
	}
}