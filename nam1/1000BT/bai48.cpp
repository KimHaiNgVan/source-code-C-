#include<iostream>
using namespace std;
int main()
{
	int n,i, tich = 1;
	

	do
	{
		cout << "Nhap vao so nguyen n : "; cin >> n;
		if (n < 0) 
			cout << "Sai roi nhap lai ";
	} while (n < 0);
	while (n > 0)
	{
		int a = n % 10;
		if (a % 2 == 1)
		{
			tich *= a;
		}
		n /= 10;
	}

	cout << "Tich cac so le cua n  la "  <<tich<<endl;
	return 0;
}