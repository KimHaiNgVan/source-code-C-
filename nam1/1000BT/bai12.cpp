#include <iostream>
using namespace std;
int main()
{
	int n, i=1,x;
	double tong = 0.0;

	cout << "Nhap vao so nguyen n: "; cin >> n;
	cout << "Nhap vao so x: "; cin >> x;
	while (i <= n)
	{
		tong += pow(x, i);
		i++;
	}

	cout << "Tong la: " << tong << endl;
	return 0;
}