#pragma once
class CNgay
{
private:
	int Ngay;
	int Thang;
	int Nam;
public:
	CNgay();
	CNgay(int n, int t, int N);
	~CNgay();

	int getNgay();
	int getThang();
	int getNam();


	void setNgay(int n);
	void setThang(int t);
	void setNam(int N);

	void Nhap();
	void Xuat();
};

