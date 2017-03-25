#include "DaThuc.h"
#include <iostream>
using namespace std;

CDaThuc::CDaThuc(void)
{
}

CDaThuc::CDaThuc(const CDaThuc &a)
{
	this->SoBac = a.SoBac;
	this->MangDonThuc = new CDonThuc[a.SoBac];

	for (int i = 0; i < a.SoBac; i++)
	{
		this->MangDonThuc[i].setDonThuc(a.MangDonThuc[i].getHeSo(), i);
	}
}

CDaThuc::CDaThuc(int bac)
{
	this->SoBac = bac;
	this->MangDonThuc = new CDonThuc[bac];
}

CDaThuc::~CDaThuc(void)
{
}

void CDaThuc::Nhap()
{
	cout << "Nhap so bac cua da thuc: ";
	cin >> SoBac;

	this->MangDonThuc = new CDonThuc[SoBac];

	for (int i = 0; i < SoBac; i++)
	{
		this->MangDonThuc[i].NhapHeSo();
		this->MangDonThuc[i].setSoMu(i);
	}
}

void CDaThuc::Xuat()
{
	cout << "=> ";
	for (int i = 0; i < SoBac; i++)
	{
		if (i != 0)
			cout << " + ";
		this->MangDonThuc[i].Xuat();
	}
	cout << endl;
}

CDaThuc CDaThuc::DaThucDoi()
{
	CDaThuc DoiNghich(*this);

	for (int i = 0; i < SoBac; i++)
	{
		float hs = this->MangDonThuc[i].getHeSo() * (-1);
		DoiNghich.MangDonThuc[i].setDonThuc(hs, i);
	}
	return DoiNghich;
}

CDaThuc CDaThuc::Cong(CDaThuc b)
{
	CDaThuc Tong;
	int BacLon, BacNho;

	//Set gia tri cho BacLon va BacNho
	if (this->SoBac >= b.SoBac)
	{
		BacLon = this->SoBac;
		BacNho = b.SoBac;
	}
	else
	{
		BacLon = b.SoBac;
		BacNho = this->SoBac;
	}

	//Set so bac va cap phat dong cho da thuc Tong
	Tong.SoBac = BacLon;
	Tong.MangDonThuc = new CDonThuc[Tong.SoBac];

	//Cong tung don thuc cua da thuc this cho da thuc b
	for (int i = 0; i < BacNho; i++)
	{
		CDonThuc Tong2DonThucCon;
		Tong2DonThucCon = MangDonThuc[i].Cong(b.MangDonThuc[i]);

		Tong.MangDonThuc[i].setDonThuc(Tong2DonThucCon.getHeSo(), i);
	}

	for (int i = BacNho; i < BacLon; i++)
	{
		if (this->SoBac >= b.SoBac)
			Tong.MangDonThuc[i].setDonThuc(this->MangDonThuc[i].getHeSo(), i);
		else
			Tong.MangDonThuc[i].setDonThuc(b.MangDonThuc[i].getHeSo(), i);
	}

	return Tong;
}

CDaThuc CDaThuc::Tru(CDaThuc b)
{
	CDaThuc Hieu;
	Hieu = this->Cong(b.DaThucDoi());
	return Hieu;
}

CDaThuc CDaThuc::Nhan(CDaThuc b)
{
	CDaThuc Tich(this->SoBac * b.SoBac);

	int count = 0;
	for (int i = 0; i < this->SoBac; i++)
	{
		for (int j = 0; j < b.SoBac; j++)
		{
			float hs = this->MangDonThuc[i].getHeSo() * b.MangDonThuc[j].getHeSo();
			int sm = this->MangDonThuc[i].getSoMu() + b.MangDonThuc[j].getSoMu();
			Tich.MangDonThuc[count].setDonThuc(hs, sm);
			count++;
		}
	}

	return Tich;
}