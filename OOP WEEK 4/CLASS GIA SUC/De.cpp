#include "De.h"
#include <iostream>
#include <ctime>
using namespace std;

De::De()
{
}

De::~De()
{
}

void De::Keu()
{
	cout << "De" << endl;
}

int De::SinhCon()
{
	srand((unsigned)time(0));
	int SoCon = 1 + (rand() % (int)(10 - 1 + 1));
	return SoCon;
}

int De::ChoSua()
{
	srand((unsigned)time(0));
	int LuongSua = 0 + (rand() % (int)(10 - 0 + 1));
	return LuongSua;
}