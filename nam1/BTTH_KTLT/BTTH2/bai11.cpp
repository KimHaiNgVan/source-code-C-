#include<iostream>
using namespace std;
void nhapmang(int a[10], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]: "; cin>>a[i];
	}
}
void xuatmang(int a[10], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << "\t";

	}
}
int tinhtong(int a[20], int n) // 1 2 3 4 5 
{
	if (n == 1) return a[0];
	else return a[n-1] + tinhtong(a,n-1);
}
int main()
{
	int n,a[20];
	cout << "N: "; cin >> n;
	nhapmang(a, n);
	xuatmang(a, n);
	cout << "Tong cua mang la: " << tinhtong(a, n) << endl;
	return 0;
}