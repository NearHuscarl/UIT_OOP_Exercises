#include "DateOfBirth.h"
#include < iostream >
using namespace std;

DateOfBirth::DateOfBirth(void)
{
}

DateOfBirth::~DateOfBirth(void)
{
}

bool DateOfBirth::LaNamNhuan()
{
	if (((Nam % 4 == 0) && (Nam % 100 != 0)) || (Nam % 400 == 0))
		return true;
	else
		return false;
}

int DateOfBirth::SoNgayToiDa()
{
	switch (Thang)
	{
		case 1: return 31; break;
		case 2:
		{
			if (LaNamNhuan() == true)
				return 29;
			else
				return 28;
			break;
		}
	case 3: return 31; break;
	case 4: return 30; break;
	case 5: return 31; break;
	case 6: return 30; break;
	case 7: return 31; break;
	case 8: return 31; break;
	case 9: return 30; break;
	case 10: return 31; break;
	case 11: return 30; break;
	case 12: return 31; break;
  }
}

bool DateOfBirth::HopLe()
{
	if ((Ngay > 0 && Ngay <= SoNgayToiDa()) && (Thang > 0 && Thang <= 12) && Nam > 0)
		return true;
	else
		return false;
}

void DateOfBirth::Nhap()
{
	do {
		cout << "Nhap ngay sinh: ";
		cin >> Ngay;

		cout << "Nhap thang sinh: ";
		cin >> Thang;

		cout << "Nhap nam sinh: ";
		cin >> Nam;
	} while (HopLe() == false);
}

void DateOfBirth::Xuat()
{
	cout << Ngay << "/" << Thang << "/" << Nam << endl;
}