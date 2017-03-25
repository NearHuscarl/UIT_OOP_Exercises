#pragma once
class CDate
{
private:
	int Ngay;
	int Thang;
	int Nam;

	bool LaNamNhuan();
	int SoNgayTrongThang(int);
	int SoNgayTrongNam(int);
	bool HopLe();
	int STTNgay(CDate);

public:
	CDate(void);
	CDate(int, int, int);
	~CDate(void);
	void setNgay(int);
	int getNgay();
	void setThang(int);
	int getThang();
	void setNam(int);
	int getNam();

	void Nhap();
	void Xuat();

	CDate NgayKe();
	CDate NgayTruoc();
	CDate nNgayKe(int);
	CDate nNgayTruoc(int);
	int KhoangCach2Ngay(CDate);
};