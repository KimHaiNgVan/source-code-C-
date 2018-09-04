#include <iostream>
using namespace std;
int main()
{
	int a, b, c, d,M,m,Max, Min;

	cout << "Nhap vao 4 so a,b,c,d: ";
	cin >> a >> b >> c >> d;

	M = (a < b ? b: a);
	m = (c < d ? d: c);
	Max = (M < m ? m : M);
	cout << "so lon nhat la: " << Max;

	M = (a < b ? a : b);
	m = (c < d ? c : d);
	Min = (M < m ? M : m);
	cout << "So nho nhat la: " << Min;
	return 0;
}