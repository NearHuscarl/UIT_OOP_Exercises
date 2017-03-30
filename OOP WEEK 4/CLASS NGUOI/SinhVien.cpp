#include "SinhVien.h"



CSinhVien::CSinhVien()
{
}


CSinhVien::~CSinhVien()
{
}

void CSinhVien::Nhap()
{
	CNguoi::Nhap();
	
	fflush(stdin);
	cout << "Nhap ma so: ";
	getchar();
	getline(cin, MaSo);

	fflush(stdin);
	cout << "Nhap ten chuyen nganh: ";
	getline(cin, ChuyenNganh);

	cout << "Nhap diem ren luyen: ";
	cin >> DiemRenLuyen;
	
	cout << "Nhap diem trung binh: ";
	cin >> DiemTrungBinh;
}

void CSinhVien::Xuat()
{
	CNguoi::Xuat();

	cout << "Ma so: " << MaSo << endl;
	cout << "Chuyen nganh: " << ChuyenNganh << endl;
	cout << "Diem ren luyen: " << DiemRenLuyen << endl;
	cout << "Diem trung binh: " << DiemTrungBinh << endl;
}