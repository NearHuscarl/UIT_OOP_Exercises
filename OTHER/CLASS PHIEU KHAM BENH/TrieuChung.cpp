#include "TrieuChung.h"
#include <iostream>
#include <string>
using namespace std;

TrieuChung::TrieuChung()
{
}

TrieuChung::~TrieuChung()
{
}

void TrieuChung::Nhap()
{
	//Can fix loi trong ham nay
	fflush(stdin);
	cout << "Nhap ma trieu chung: ";
	getchar();
	getline(cin, MaTrieuChung);

	fflush(stdin);
	cout << "Nhap ten trieu chung: ";
	getline(cin, TenTrieuChung);
}

void TrieuChung::Xuat()
{
	cout << MaTrieuChung << "\t\t | " << TenTrieuChung << endl;
}