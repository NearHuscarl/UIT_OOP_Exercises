#include "Bo.h"
#include <iostream>
#include <ctime>
using namespace std;


Bo::Bo()
{
}


Bo::~Bo()
{
}

void Bo::Keu()
{
	cout << "Bo" << endl;
}

int Bo::SinhCon()
{
	srand((unsigned)time(0));
	int SoCon = 1 + (rand() % (int)(10 - 1 + 1));
	return SoCon;
}

int Bo::ChoSua()
{
	srand((unsigned)time(0));
	int LuongSua = 0 + (rand() % (int)(20 - 0 + 1));
	return LuongSua;
}