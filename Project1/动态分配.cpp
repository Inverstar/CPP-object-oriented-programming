#include <iostream>
using namespace std;
void N()
{
	int n = 5;
	int * P = new int;
	cout << P << endl;
	delete P;

	P = new int[n];
	cout << P << endl;
	delete[] P;

	if (&P == NULL)
		cout << "P为空, P已经释放" << endl;
	else
		cout << P << endl;
}