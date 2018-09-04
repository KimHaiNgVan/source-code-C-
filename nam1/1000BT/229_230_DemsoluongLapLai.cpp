#include<iostream>
using namespace std;
void nhap(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]="; cin >> a[i];
	}
}
void demSoluongphanbiet(int a[], int n)
{
	int dem = n;
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] == a[j]) dem--;
		}
	}
	cout << "So luong co gia tri phan biet la: " << dem << endl;
}
void xoaPhantutaiX(int a[], int &n, int x)
{
	for (int i = x; i < n; i++)
	{
		a[i] = a[i + 1];
	}
	n--;
}
void lietkeTansuatXuathien(int a[], int &n)
{
	for (int i = 0; i < n; i++)
	{
		int dem = 1;
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] == a[j])
			{
				xoaPhantutaiX(a, n, j);
				dem++;
			}
		}
		cout << "So " << a[i] << " lap lai " << dem << " lan" << endl;
	}
}
int main()
{
	int a[50], n;
	cout << "Kich thuoc la: "; cin >> n;
	nhap(a, n);
	demSoluongphanbiet(a, n);
	lietkeTansuatXuathien(a, n);
	return 0;
}