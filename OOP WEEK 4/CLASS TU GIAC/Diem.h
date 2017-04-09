#pragma once
class Diem
{
private:
	float x, y;

public:
	Diem(void);
	Diem(float, float);
	~Diem(void);

	void setX(float);
	float getX();
	void setY(float);
	float getY();
	void setXY(float, float);

	void Nhap();
	void TinhTien(float, float);
	void Xuat();
};