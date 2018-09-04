#include <iostream>
using namespace std;
int main()
{
	int x,n, i=1;
	double tong = 0.0;

	cout << "Nhap vao so nguyen n: "; cin >> n;
	cout << "Nhap vao X:"; cin >> x;

	for (int i=1; i <= n; i++)
	{
		tong += pow(x, 2*i);
	}

	cout << "Tong cua phuong trinh la: "<<tong<<endl;
	return 0;
}