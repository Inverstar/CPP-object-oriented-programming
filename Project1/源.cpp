#include	<iostream>
#include "类.cpp"
using namespace std;
int main()
{
	CRectangle r1, r2;
	CRectangle* p1 = &r1;
	CRectangle& p2 = r2;
	p2.h = 0;
	p1->w = 3;
	r1.w = 5;
	r2.Init(5, 4);
	//int Cr();
	Cr();
	return 0;

	void 重载();
	重载();
	return 0;

	void N();
	N();
	return 0;

	int n = 4;
	int n1 = 5;
	//int& r = n;	//r引用了n, r的类型是int &

	//int a = 1, b = 2;
	//int& r = a;
	//r = b;
	//r = 7;
	//cout << a << endl;
	const int* p1 = &n;
	int* const p2 = &n;
	int const* p3 = &n;
	const int* const p4 = &n;

	//p4 = &n1;
	//*p4 = 5;
//	*p3 = 3;
	p3 = &n1;
//	*p1 = 3;
	*p2 = 3;
	p1 = &n1;
//	p2 = &n1;
	n = 6;
	cout << *p1 << " " << *p2 << " " << *p3 << " " << *p4<< endl;
	return 0;

	int S1();
	S1();
	return 0;

	int S();
	S();
	return 0;
}