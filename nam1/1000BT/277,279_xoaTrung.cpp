#include<iostream>
using namespace std;
void nhap(int a[], int &n)
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
		cout << a[i] << "  ";

	}
}
void xoa1phantu(int a[], int &n, int vitrixoa)
{
	for (int i = vitrixoa; i < n; i++)
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
				xoa1phantu(a, n, j);
				j--;
			}
		}
	}
}
void xoaPhantuxuathiennhieuhon1lan(int a[], int &n)
{
	for (int i = 0; i < n; i++)
	{
		int dem = 1;
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] == a[j])
			{
				xoa1phantu(a, n, j);
				j--;
				dem++;
			}
		}
		if (dem > 1)
		{
			xoa1phantu(a, n, i);
			i--;
		}

	}
}
int  main()
{
	int a[20], n;
	cout << "Kich thuoc: "; cin >> n;
	nhap(a, n);
	xoatrung(a, n);
	xuat(a, n);
	cout << "Mang sau khi xoa phan tu xuat hien nhieu hon 1 lan la: " << endl;
	xoaPhantuxuathiennhieuhon1lan(a, n);
	xuat(a, n);
	return 0;
}