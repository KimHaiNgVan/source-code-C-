#include<iostream>
using namespace std;
int main()
{
	int i=1, n;
	double tong = 0.0;

	cout << "Nhap vao so nguyen n: "; cin >> n;

	while (i <= n)
	{
		tong += 1.0 / (n*(n + 1));
		i++;
	}

	cout << "Tong cua phuong trinh la: "<<tong<<endl;
	return 0;
}