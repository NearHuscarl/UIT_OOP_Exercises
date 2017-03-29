#include "DSKhachHang.h"



DSKhachHang::DSKhachHang()
{
}


DSKhachHang::~DSKhachHang()
{
}

void DSKhachHang::Nhap()
{
	cout << "NHAP DANH SACH KHACH HANG" << endl;
	cout << "-----------------------------------------" << endl;
	cout << "+ Nhap so luong khach hang: ";
	cin >> SoLuong;

	DanhSach = new KhachHang[SoLuong];

	for (int i = 0; i < SoLuong; i++)
	{
		cout << "-----------------------------------------" << endl;
		cout << "KHACH HANG THU " << i + 1 << endl;
		DanhSach[i].Nhap();
	}
}

void DSKhachHang::SapXepTheoKV()
{
	for (int i = 0; i < SoLuong - 1; i++)
	{
		for (int j = 0; j < SoLuong; j++)
		{
			if (DanhSach[j].KV.getMaKhuVuc() < DanhSach[i].KV.getMaKhuVuc())
			{
				swap(DanhSach[j], DanhSach[i]);
			}
		}
	}
}

void DSKhachHang::Xuat()
{
	system("cls");
	cout << "DANH SACH KHACH HANG THEO KHU VUC" << endl;

	for (int i = 0; i < SoLuong; i++)
	{
		cout << "-----------------------------------------" << endl;
		cout << "KHACH HANG THU " << i + 1 << endl;
		DanhSach[i].Xuat();
	}
	cout << "-----------------------------------------" << endl;
}
