#include <iostream>
using namespace std;
class CRectangle
{
	public:
		int w, h;
		int Area()
		{
			return w * h;
		}
		int Perimeter()
		{
			return 2 * (w + h);
		}
		void Init(int wi, int hi)
		{
			w = wi; h = hi;
		}
};
int Cr()
{
	int w, h;
	CRectangle r;
	cin >> w >> h;
	r.Init(w, h);
	cout << r.Area() << endl << r.Perimeter();
	return 0;
}