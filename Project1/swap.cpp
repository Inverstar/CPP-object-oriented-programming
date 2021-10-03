#include <iostream>
using namespace std;
void swap(int& a, int& b)
{
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
}
int S()
{
	int n1 = 1, n2 = 2;
	swap(n1, n2);
	cout << n1 << endl;
	cout << n2 << endl;
	return 0;
}