#pragma once
#include <string>
#include <iostream>
using namespace std;

class TrieuChung
{
private:
	string MaTrieuChung;
	string TenTrieuChung;

public:
	TrieuChung();
	~TrieuChung();

	void Nhap();
	void Xuat();
};