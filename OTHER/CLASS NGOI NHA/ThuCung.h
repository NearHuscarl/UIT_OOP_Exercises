#pragma once
#include <iostream>
#include <string>
using namespace std;

class CThuCung
{
private:
	int LoaiThuCung; //1- Cho; 2- Meo; 3- Hamster

protected:
	string Ten;
	int Tuoi;
	float CanNang;

public:
	CThuCung();
	CThuCung(string ten, int tuoi, float cannang);
	~CThuCung();

	int getLoaiThuCung();
	void setLoaiThuCung(int Loai);
	virtual void Nhap();
	virtual void Xuat();
	virtual float TinhTienAn();
};