#include<iostream>
using namespace std;
int main()
{
	int i = 0, n;
	double tong = 0.0;

	cout << "Nhap vao so nguyen N: ";
	cin >> n;

	while (i <= n)
	{
		tong += 1.0 / (2 * i + 1);
		i++;
	}

	cout << "Tong cua chuong trinh la "<<tong<<endl;
	return 0;
}