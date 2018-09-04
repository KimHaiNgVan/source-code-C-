#include <iostream>
using namespace std;
int main()
{
	int n, i,x;
	double tong = 0.0;

	cout << "Nhap vao so nguyen n: "; cin >> n;
	cout << "Nhap vao x: "; cin >> x;

	for (int i = 0; i <= n; i++)
	{
		tong += pow(x, 2 * n + 1);
	}

	cout << "Tong la "<<tong<<endl;
	return 0;
}