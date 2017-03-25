#pragma once
class CDonThuc
{
private:
	float HeSo;
	int SoMu;

public:
	CDonThuc(void);
	CDonThuc(float, int);
	~CDonThuc(void);

	void setHeSo(float);
	float getHeSo();
	void setSoMu(int);
	int getSoMu();
	void setDonThuc(int hs, int sm);

	void NhapHeSo();
	void NhapSoMu();
	void NhapDonThuc();
	void Xuat();

	CDonThuc Cong(CDonThuc);
	CDonThuc Tru(CDonThuc);
	CDonThuc Nhan(CDonThuc);
};