#include "HinhThang.h"
#include <iostream>
using namespace std;


bool CHinhThang::IsHopLe()
{
	CDoanThang AB(A, B);
	CDoanThang BC(B, C);
	CDoanThang CD(C, D);
	CDoanThang DA(D, A);

	if (((AB.IsSongSongOx() == true && CD.IsSongSongOx() == true)) || (BC.IsSongSongOx() == true && DA.IsSongSongOx() == true))
		return true;
	else
		return false;
}

CHinhThang::CHinhThang()
{
}


CHinhThang::~CHinhThang()
{
}

void CHinhThang::Nhap()
{
	do {
		CTuGiac::Nhap();
	} while (IsHopLe() == false);
}

void CHinhThang::HienThiTinhChat()
{
	CDoanThang AB(A, B);
	CDoanThang BC(B, C);
	CDoanThang CD(C, D);
	CDoanThang DA(D, A);

	if (AB.IsSongSongOx() == true && CD.IsSongSongOx() == true)
	{
		cout << "+ Hai canh day AB va CD song song voi nhau" << endl;
		if (AB.DoDai() > CD.DoDai())
		{
			cout << "+ Do dai day lon: AB = " << AB.DoDai() << endl;
			cout << "+ Do dai day be: CD = " << CD.DoDai() << endl;
		}
		else
		{
			cout << "+ Do dai day lon: CD = " << CD.DoDai() << endl;
			cout << "+ Do dai day be: AB = " << AB.DoDai() << endl;
		}
	}

	else if (BC.IsSongSongOx() == true && DA.IsSongSongOx() == true)
	{
		cout << "Hai canh day BC va DA song song voi nhau" << endl;
		if (BC.DoDai() > DA.DoDai())
		{
			cout << "+ Do dai day lon: BC = " << BC.DoDai() << endl;
			cout << "+ Do dai day be: DA = " << DA.DoDai() << endl;
		}
		else
		{
			cout << "+ Do dai day lon: DA = " << DA.DoDai() << endl;
			cout << "+ Do dai day be: BC = " << BC.DoDai() << endl;
		}
	}
}
