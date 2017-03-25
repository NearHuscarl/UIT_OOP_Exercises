#pragma once
class CKhoangThoiGian
{
private:
	int Gio;
	int Phut;
	int Giay;

	void KiemTraGiaTri();
	static bool GiaTriAm;

public:
	CKhoangThoiGian(void);
	CKhoangThoiGian(int g, int p, int gy);
	~CKhoangThoiGian(void);

	void setGio(int g);
	int getGio();
	void setPhut(int p);
	int getPhut();
	void setGiay(int gy);
	int getGiay();

	int getTongGiay();
	float getTongPhut();
	float getTongGio();

	void Nhap();
	void ChuanHoa();
	void Xuat();

	bool LonHon(CKhoangThoiGian b);
	bool NhoHon(CKhoangThoiGian b);
	bool Bang(CKhoangThoiGian b);
	bool KhongBang(CKhoangThoiGian b);
	bool LonHonHoacBang(CKhoangThoiGian b);
	bool NhoHonHoacBang(CKhoangThoiGian b);

	CKhoangThoiGian Cong(CKhoangThoiGian b);
	CKhoangThoiGian Tru(CKhoangThoiGian b);
};