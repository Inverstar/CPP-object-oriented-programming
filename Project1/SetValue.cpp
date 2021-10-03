#include <iostream>
using namespace std;
int n = 4;
int & SetValue()
{
	return n;
}
int S1()
{
	SetValue() = 40;
	cout << n;
	return 0;
}