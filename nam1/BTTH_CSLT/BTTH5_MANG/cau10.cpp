#include<iostream>
using namespace std;
void nhap(int a[], int &n)
{
	cout << "Kich thuoc mang: ";
	cin >> n;
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
	cout << endl;
}
void huy(int a[], int &n, int m)
{
	for (int i = m; i < n; i++)
	{
		a[i] = a[i + 1];
	}
	n--;
}
void kiemtra(int a[], int &n)
{
	for (int i = 0; i < n; i++)
	{
		int dem = 1;
		for (int j = i+1 ; j < n; j++)
		{
			if (a[i] == a[j])
			{
				dem++;
				huy(a, n, j);
				j--;
			}
		}
		cout << a[i] << " : " << dem << " lan. " << endl;
	}
}

int main()
{
	int a[50], n=0;
	nhap(a, n);
	xuat(a, n);
	kiemtra(a, n);
	return 0;
}