#pragma once
class CNgay
{
private:
	int Ngay;
	int Thang;
	int Nam;

	bool LaNamNhuan();
	int SoNgayToiDa();
	bool HopLe();

public:
	CNgay(void);
	~CNgay(void);

	int getNgay();
	int getThang();
	int getNam();

	void setNgay(int n);
	void setThang(int t);
	void setNam(int N);
	
	void Nhap();
	void Xuat();
};