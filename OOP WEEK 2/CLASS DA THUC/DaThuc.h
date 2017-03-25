#pragma once
#include "DonThuc.h"

class CDaThuc
{
private:
	int SoBac;
	CDonThuc *MangDonThuc;

public:
	CDaThuc(void);
	CDaThuc(const CDaThuc &a);
	CDaThuc(int);
	~CDaThuc(void);

	void Nhap();
	void Xuat();

	CDaThuc DaThucDoi();
	CDaThuc Cong(CDaThuc b);
	CDaThuc Tru(CDaThuc b);
	CDaThuc Nhan(CDaThuc b);
};