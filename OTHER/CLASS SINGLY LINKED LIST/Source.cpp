#include "List.h"
#include <iostream>
using namespace std;

int main()
{
	int n;
	List a;

	cout << "NHAP DU LIEU CHO DANH SACH LIEN KET DON" << endl;
	cout << "-------------------------------------------" << endl;
	cout << "* SO LUONG NODE: ";
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		int x;
		cout << "+ Nhap data cua Node " << i << ": ";
		cin >> x;

		Node *p = a.CreateNode(x);
		a.AddTail(p);
	}
	cout << "-------------------------------------------" << endl;

	system("cls");
	cout << "DU LIEU CUA DANH SACH LIEN KET DON VUA NHAP" << endl;
	cout << "-------------------------------------------" << endl;
	cout << "+ So luong Node: " << a.Count() << endl;
	cout << "+ Danh sach lien ket don vua nhap: ";
	a.Display();
	cout << "+ Danh sach lien ket don sau khi duoc sap xep (Tang dan): ";
	a.Sort();
	a.Display();
	cout << "+ Gia tri lon nhat trong danh sach: " << a.MaxValue() << endl;
	cout << "+ Gia tri nho nhat trong danh sach: " << a.MinValue() << endl;
	cout << "+ Danh sach lien ket don sau khi xoa phan tu dau tien: ";
	a.RemoveHead();
	a.Display();
	cout << "+ Danh sach lien ket don sau khi xoa phan tu cuoi cung: ";
	a.RemoveTail();
	a.Display();
	cout << "-------------------------------------------" << endl;
	system("pause");
	return 0;
}