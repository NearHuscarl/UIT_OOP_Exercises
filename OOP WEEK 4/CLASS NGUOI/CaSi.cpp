#include "CaSi.h"
#include <iostream>
#include <string>
using namespace std;

CCaSi::CCaSi()
{
}

CCaSi::~CCaSi()
{
}

string CCaSi::getTheLoai()
{
	return TheLoai;
}

void CCaSi::setTheLoai(string TenTheLoai)
{
	TheLoai = TenTheLoai;
}

string CCaSi::getAlbumDauTay()
{
	return AlbumDauTay;
}

void CCaSi::setAlbumDauTay(string TenAlbum)
{
	AlbumDauTay = TenAlbum;
}

void CCaSi::Nhap()
{
	CNgheSi::Nhap();

	fflush(stdin);
	cout << "Nhap the loai nhac: ";
	getchar();
	getline(cin, TheLoai);

	fflush(stdin);
	cout << "Nhap ten album dau tay: ";
	getline(cin, AlbumDauTay);
}

void CCaSi::Xuat()
{
	CNgheSi::Xuat();

	cout << "The loai nhac: " << TheLoai << endl;
	cout << "Ten album dau tay: " << AlbumDauTay << endl;
}