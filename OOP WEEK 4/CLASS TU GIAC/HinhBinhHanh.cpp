#include "HinhBinhHanh.h"
#include "DoanThang.h"
#include <iostream>
using namespace std;


bool CHinhBinhHanh::IsHopLe()
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

CHinhBinhHanh::CHinhBinhHanh()
{
}


CHinhBinhHanh::~CHinhBinhHanh()
{
}
