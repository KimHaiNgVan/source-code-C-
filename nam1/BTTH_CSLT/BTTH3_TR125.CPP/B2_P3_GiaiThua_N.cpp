#include<iostream>
using namespace std;
int main()
{
	int i, n, giaithua=1;

	cout << "Nhap vao so nguyen n : ";
	cin >> n;
	

	if (n < 0)
	{
		cout << "Yeu cau so nguyen khong am !!!";
		return 1;
	}

	if (n > 1)
	{
		for (i = 1; i <= n; i++)
		{
			giaithua *= i;
		}
	}

	if (n == 0 || n == 1)
	{
		giaithua = 1;
	}

	cout << "Giai thua cua n la: " << giaithua << endl;
	return 0;
}