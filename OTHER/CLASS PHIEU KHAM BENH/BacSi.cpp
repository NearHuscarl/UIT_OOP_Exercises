#include "BacSi.h"
#include <iostream>
#include <string>
using namespace std;

BacSi::BacSi()
{
}

BacSi::~BacSi()
{
}

void BacSi::Nhap()
{
	fflush(stdin);
	cout << "+ Nhap ho va ten bac si kham: ";
	getline(cin, HoTen);

	fflush(stdin);
	cout << "+ Nhap don vi: ";
	getline(cin, DonVi);
}

void BacSi::Xuat()
{
	cout << "Bac sy kham: " << HoTen << endl;
	cout << "Don vi: " << DonVi << endl;
}
