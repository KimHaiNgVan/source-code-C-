#include <iostream>
using namespace std;
int main()
{
	int n, i;
	double tong = 0.0;

	cout << "Nhap vao so nguyen n: "; cin >> n;
	for (int i = 0; i <= n; i++)
	{
		tong += 1.0*(2 * i + 1) / (2 * i + 2);
	}

	cout << "Tong cua phuong trinh la: " << tong << endl;
	return 0;
}