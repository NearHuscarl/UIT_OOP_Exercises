#pragma once
#include <iostream>
#include "NgheSi.h"
using namespace std;

class CCaSi : public CNgheSi
{
private:
	string TheLoai;
	string AlbumDauTay;

public:
	CCaSi();
	~CCaSi();

	string getTheLoai();
	void setTheLoai(string TenTheLoai);

	string getAlbumDauTay();
	void setAlbumDauTay(string TenAlbum);

	void Nhap();
	void Xuat();
};