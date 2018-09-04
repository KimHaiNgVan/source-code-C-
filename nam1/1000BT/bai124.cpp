#include<iostream>
using namespace std;
void nhap(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]=";
		cin >> a[i];
	}
}
bool kiemtra(int a[], int n,int m)
{
	for (int i = 0; i < n; i+=2)
	{
		if(a[i]<m)
		{
			return true;
		}
	}
	return false;
}
void main()
{
	int a[50], n,m;
	cout << "Kich thuoc: ";
	cin >> n;
	nhap(a, n);
	cout << "So nguyen M: ";
	cin >> m;
	cout << boolalpha << kiemtra(a, n, m)<<endl;
}