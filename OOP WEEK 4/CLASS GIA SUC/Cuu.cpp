#include "Cuu.h"
#include <iostream>
#include <ctime>
using namespace std;


Cuu::Cuu()
{
}


Cuu::~Cuu()
{
}

void Cuu::Keu()
{
	cout << "Cuu" << endl;
}

int Cuu::SinhCon()
{
	srand((unsigned)time(0));
	int SoCon = 1 + (rand() % (int)(10 - 1 + 1));
	return SoCon;
}

int Cuu::ChoSua()
{
	srand((unsigned)time(0));
	int LuongSua = 0 + (rand() % (int)(5 - 0 + 1));
	return LuongSua;
}