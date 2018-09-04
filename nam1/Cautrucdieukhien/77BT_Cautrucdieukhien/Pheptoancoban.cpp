#include <iostream>
using namespace std;
int main()
{
	double a, b, tong, hieu, tich, thuong;

	cout << "Nhap vao 2 phan so a,b: \n";
	cin >> a;
	cin >> b;

	tong = a + b;
	hieu = a - b;
	tich = a*b;
	thuong = a / b;

	cout << "Tong cua 2 so la " << tong;
	cout << "Hieu cua 2 so la " << hieu;
	cout << "Tich cua 2 so la " << tich;
	cout << "Thuong cua 2 so la " << thuong;

	return 0;
}