#include <iostream>
#include "String.h"
using namespace std;

int main()
{
	String strA("Hello "), strB("world!"), strC("Hello ");
	cout << "VALUES OF STRINGS (A, B, C)" << endl;
	cout << "   + String A: ";
	strA.output();
	cout << "   + String B: ";
	strB.output();
	cout << "   + String C: ";
	strC.output();

	cout << "---------------------------------------" << endl;

	cout << "\nCOMPARE STRING A WITH STRING C" << endl;
	switch (strA.compareTo(strC))
	{
		case -1: cout << "   + Result: String A is smaller than String C!" << endl; break;
		case 0: cout << "   + Result: String A and String C are the same!" << endl; break;
		case 1: cout << "   + Result: String A is greater than String C!" << endl; break;
	}
	cout << "---------------------------------------" << endl;
	cout << "\nAPPEND STRING A WITH STRING B";
	strA.appendWith(strB);
	cout << "\n   + ";
	strA.output();

	cout << "---------------------------------------" << endl;
	cout << "\nREVERSE STRING A";
	strA.reverse();
	cout << "\n   + Result: ";
	strA.output();

	cout << "---------------------------------------" << endl;
	cout << "\nTHE LENGTH OF STRING A" << "\n   + Result: " << strA.getLength() << endl;
	cout << "---------------------------------------" << endl;

	system("pause");
	return 0;
}