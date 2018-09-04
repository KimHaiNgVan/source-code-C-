#include<iostream>
using namespace std;
void nhap(int a[], int n)
{
	for (int i=0; i < n; i++)
	{
		cout << "a[" << i << "]="; cin >> a[i];
	}
}
void sapxepTang(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i+1; j < n; j++)
		{
			if (a[i] > a[j])swap(a[i], a[j]);
		}
	}
}
void xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i]<<"  ";
	}
	cout << endl;
}
void sapxepGiam(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] < a[j])swap(a[i], a[j]);
		}
	}
}
void sapxepLetangdan(int a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] % 2 != 0 && a[j] % 2 != 0 && a[i] > a[j])
				swap(a[i], a[j]);
		}
	}
}
int main()
{
	int a[50], n;
	cout << "Kich thuoc: "; cin >> n;
	nhap(a, n);
	sapxepTang(a, n);
	cout << "Tang dan: ";
	xuat(a, n);
	cout << "Giam dan: ";
	sapxepGiam(a, n);
	xuat(a, n);
	sapxepLetangdan(a, n);
	xuat(a, n);
	return 0;
}