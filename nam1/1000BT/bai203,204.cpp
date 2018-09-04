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

bool hangchuc5(int n)
{
	int tam = n / 10;
	if (tam % 10 == 5)
	{
		return true;
	}
	return false;
}
void tinhTong(int a[], int n)
{
	int tong = 0;
	for (int i = 0; i < n; i++)
	{
		if(hangchuc5(a[i]))
		{ 
			tong += a[i];
		}
	}
	cout << "Tong cac so co hang chuc la 5 la: " << tong << endl;
}
void tinhTonglonhon(int a[], int n)
{
	int tong = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] > a[i + 1])
		{
			tong += a[i];
		}
	}
	cout << "tong la " << tong << endl;
}
int main()
{
	int a[50];
	int  n;
	cout << "Nhap vao kich thuoc : "; cin >> n;
	nhap(a, n);
	tinhTong(a, n);
	tinhTonglonhon(a, n);
	return 0;
}