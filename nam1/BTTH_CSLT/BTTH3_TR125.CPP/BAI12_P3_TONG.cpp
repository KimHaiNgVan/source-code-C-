#include<iostream>
using namespace std;
int main()
{
	int n;

	cout << "Nhap vao so nguyen duong n: ";
	cin >> n;

	if (n < 0)
	{
		cout << "Sai roi. Nhap lai !";
		return 1;
	}

	if (n > 0)
	{
		double tong = 0.0;
		for (int i = 1; i <= n; i++)
		{
			tong += 1.0 / i;
		}
		cout << "Tong cua A la: "<<tong<<endl;
	
		double tong2 = 0.0;
		for (int i = 1; i <= n; i++)
		{
			tong2 += 1.0 / 2 * i;
		}
		cout << "Tong cua B la: "<<tong2<<endl;


		double tong3 = 0.0;
		for (int i = 1; i <= n; i++)
		{
			tong3 += 1.0 / (2 * n - 1);
		}
		cout << "tong cua C la: " <<tong3<< endl;
	}
	return 0;
}