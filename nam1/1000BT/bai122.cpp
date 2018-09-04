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
void xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i];
	}
}
void GTLN(int a[], int n)
{
	int max = a[0];
	for (int i = 0; i < n; i++)
	{
		if (a[i] > max) max = a[i];
	}
	
	cout << "GTLN trong mang la: " << max;
}
int main()
{
	int a[50],n;
	cout << "Kich thuoc: "; cin >> n;
	nhap(a, n);
	xuat(a, n);
	GTLN(a, n);
	return 0;
}