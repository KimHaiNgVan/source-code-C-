#include<iostream>
using namespace std;
void nhap(int a[], int &n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]="; cin >> a[i];
	}
}

void xuat(int a[], int &n)
{
	for (int i = 0; i < n; i++)
	{

		cout << a[i] << "  ";
	}
}
void xoa1Phantu(int a[], int &n, int vitrixoa)
{
	for (int i = vitrixoa; i < n; i++)
	{
		a[i] = a[i + 1];
	}
	n--;
}
void xoaX(int a[], int &n)
{
	int x;
	cout << "Nhap vao gia tri muon xoa: ";
	cin >> x;
	for (int i = 0; i < n; i++)
	{
		if (a[i] == x) xoa1Phantu(a, n, i);
	}
}
void xoaAm(int a[], int &n)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] < 0)
		{
			xoa1Phantu(a, n, i);
			i--;
		}
		}
}
void xoaChan(int a[], int &n)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0)
		{
			xoa1Phantu(a, n, i);
			i--;
		}
	}
}
int main()
{
	int a[50], n;
	cout << "Kich thuoc: "; cin >> n;
	nhap(a, n);
	xoaX(a, n);
	cout << "Mang sau khi xoa X: " << endl;
	xuat(a, n);
	cout << "Mang sau khi xoa Am: " << endl;
	xoaAm(a, n);
	xuat(a, n);
	cout << "Mang sau khi xoa so chan la: " << endl;
	xoaChan(a, n);
	xuat(a, n);
	return 0;
}