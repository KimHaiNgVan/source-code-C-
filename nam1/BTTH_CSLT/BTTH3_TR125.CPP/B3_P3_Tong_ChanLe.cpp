#include<iostream>
using namespace std;
int main()
{
	int i, n, le=0,chan=0, tong=0;

	cout << "Nhap vao so nguyen n: ";
	cin >> n;

	for (i = 1; i <= n; i++)
	{
		if (i % 2 == 1)
		{
			le += i;
		}
		else if (i % 2 == 0)
		{
			chan += i;
		}
	}

	cout << "Tong cac so le tu 1 den " << n << " la " << le << endl;
	cout << "Tong cac so chan tu 1 den " << n << " la "<<chan<<endl;
}