#include<iostream>
using namespace std;
void nhapmang(int a[], int &n)
{
	cout << "Nhap kich thuoc mang: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]=";
		cin >> a[i];
	}
}
void xuatmang(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "	" << a[i];
	}
}
void huy(int a[], int &n, int b)
{
	for (int i = b; i < n; i++)
	{
		a[i] = a[i + 1];
	}
	n--;
}
void xoatrung(int a[], int &n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] == a[j])
			{
				huy(a, n, j);
				j--;
			}
		}
	}
}
void main()
{

	int a[20], n;
	nhapmang(a, n);
	xuatmang(a, n);
	xoatrung(a, n);
	xuatmang(a, n);
	
}