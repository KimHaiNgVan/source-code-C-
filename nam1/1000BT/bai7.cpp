#include<iostream>
using namespace std;
int main()
{
	int i, n;
	double tong=0.0;
	cout << "Nhap vao so nguyen n: "; cin >> n;


	for (int i = 1; i <= n; i++)
	{
		tong += n*1.0 / (n + 1);
	}

	cout << "Tong cua phuong trinh la: "<<tong<<endl;
	return 0;
}