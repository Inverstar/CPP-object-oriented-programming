#include <iostream>
using namespace std;
inline double Max(double f1, double f2)
{
	if (f1 > f2)
		return f1;
	else return f2;
}
inline int Max(int f1, int f2)
{
	if (f1 > f2)
		return f1;
	else return f2;
}
inline int Max(double f1, double f2, double f3)
{
	if (f1 > f2&&f1>f3)
		return f1;
	else return f2>f3;
}
void 重载()
{
	//
	cout<<Max(22.1, 2.4);
}