#pragma once
#include <string>
using namespace std;

class KhuVuc
{
private:
	string MaKhuVuc;
	int Loai;

public:
	KhuVuc();
	KhuVuc(string MaKV, int LoaiHinh = 1);
	~KhuVuc();

	string getMaKhuVuc();
	int getLoai();
	void setMaKhuVuc(string MaKV);
	void setLoai(int LoaiMoi);
	void Nhap();
	void Xuat();
	int DonGia();
};