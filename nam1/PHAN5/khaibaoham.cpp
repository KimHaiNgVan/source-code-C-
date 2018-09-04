#include <iostream>
using namespace std;
int cong(int a, int b);
int nhan(int a, int b);

void main()
{
	int x, y, z,t;
	cout << "X la: ";
	cin >> x;
	cout << "Y la: ";
	cin >> y;
	z = cong(x, y);
	cout << "Tong cua x va y: " << z;
	t = nhan( x,  y);
	cout << "Tich cua x va y: " << t;
}
int cong(int a, int b)
{
	return a + b;
}

int nhan(int a, int b)
{
	return a * b;
}
