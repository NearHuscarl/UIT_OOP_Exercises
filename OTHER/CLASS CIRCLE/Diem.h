#pragma once
class CDiem
{
private:
	float x, y;

public:
	CDiem(void);
	CDiem(float, float);
	~CDiem(void);

	void setX(float);
	float getX();
	void setY(float);
	float getY();
	void setXY(float, float);

	void Nhap();
	void TinhTien(float, float);
	void Xuat();
};