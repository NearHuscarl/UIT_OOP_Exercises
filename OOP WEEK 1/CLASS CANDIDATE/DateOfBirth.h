#pragma once
class DateOfBirth
{
private:
	int Ngay;
	int Thang;
	int Nam;

	bool LaNamNhuan();
	int SoNgayToiDa();
	bool HopLe();

public:
	DateOfBirth(void);
	~DateOfBirth(void);

	void Nhap();
	void Xuat();
};