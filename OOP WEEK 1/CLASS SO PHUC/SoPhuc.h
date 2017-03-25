#pragma once
class SoPhuc
{
private:
	float PhanThuc;
	float PhanAo;

public:
	SoPhuc(void);
	~SoPhuc(void);

	void Nhap();
	void Xuat();

	float DinhGiaTri();
	
	SoPhuc Cong2SoPhuc(SoPhuc b);
	SoPhuc Tru2SoPhuc(SoPhuc b);
	SoPhuc Nhan2SoPhuc(SoPhuc b);
	SoPhuc Chia2SoPhuc(SoPhuc b);
};