#include <iostream>
#include "Matrix.h"
#include "Vector.h"
using namespace std;

int main()
{
	Matrix Ma, Mb, Mc;

	//PART 1: INPUTTING THE VALUES OF THE TWO MATRICES
	system("cls");
	cout << "* MATRIX_A *" << endl;
	cout << "---------------------------------------" << endl;
	Ma.input();

	system("cls");
	cout << "* MATRIX_B *" << endl;
	cout << "---------------------------------------" << endl;
	Mb.input();

	//PART 2: OPERATIONS WITH THE TWO MATRICES
	//PART 2.1: DISPLAYING THE VALUES OF THE TWO MATRICES
	system("cls");
	cout << "* MATRIX OPERATIONS *" << endl;
	cout << "---------------------------------------" << endl;
	cout << "* VALUES OF THE TWO MATRICES" << endl;
	cout << "+ MATRIX_A:" << endl;
	Ma.output();
	cout << "\n+ MATRIX_B:" << endl;
	Mb.output();

	//PART 2.2: MATRIX_A + MATRIX_B
	cout << "\n---------------------------------------" << endl;
	cout << "* SUM OF MATRIX_A & MATRIX_B" << endl;
	if (Ma.getM() == Mb.getM() && Ma.getN() == Mb.getN())
	{
		cout << "+ Result: " << endl;
		Mc = Ma.add(Mb);
		Mc.output();
	}
	else
		cout << "ERROR: The two matrices do not have the same size!" << endl;

	//PART 2.3: MATRIX_A - MATRIX_B
	cout << "\n---------------------------------------" << endl;
	cout << "* DIFFERENCE OF MATRIX_A & MATRIX_B" << endl;
	if (Ma.getM() == Mb.getM() && Ma.getN() == Mb.getN())
	{
		cout << "+ Result: " << endl;
		Mc = Ma.substract(Mb);
		Mc.output();
	}
	else
		cout << "ERROR: The two matrices do not have the same size!" << endl;

	//PART 2.4: MATRIX_A * k
	cout << "\n---------------------------------------" << endl;
	int n;
	cout << "* MATRIX_A MULTIPLIED BY A NUMBER" << endl;
	cout << "+ Type a number: ";
	cin >> n;
	cout << "+ Result: " << endl;
	Mc = Ma.multiplyWithNumber(n);
	Mc.output();

	//PART 2.5: MATRIX_A * MATRIX_B
	cout << "\n---------------------------------------" << endl;
	cout << "* MATRIX_A MULTIPLIED BY MATRIX_B" << endl;
	if (Ma.getN() == Mb.getM())
	{
		cout << "+ Result: " << endl;
		Mc = Ma.multiplyWithMatrix(Mb);
		Mc.output();
	}
	else
		cout << "ERROR: There is something wrong with the size of the two matrices!" << endl;

	//PART 2.6: MATRIX_A * VECTOR_X
	cout << "\n---------------------------------------" << endl;
	cout << "* MATRIX_A MULTIPLIED BY VECTOR_X" << endl;
	cout << "+ VECTOR_X:" << endl;
	Vector Va;
	Va.input();
	cout << "=> X";
	Va.output();
	if (Ma.getM() == Va.getN())
	{
		cout << "+ Result: " << endl;
		Mc = Multiply(Ma, Va);
		Mc.output();
		cout << endl;
	}
	else
		cout << "ERROR: There is something wrong with the size of the matrix/ vector!\n" << endl;
	cout << "---------------------------------------" << endl;

	system("pause");
	return 0;
}