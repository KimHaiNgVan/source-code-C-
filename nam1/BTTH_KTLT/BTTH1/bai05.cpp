#include<iostream>
using namespace std;
const int max = 10;
int tongcheochinh(int a[max][max],int n)
{ 
	int tong = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i == j)
				tong += a[i][j];
		}
	}
	return tong;
}
int tongcheophu(int a[max][max], int n)
{
	int tong = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (j == n - 1 - i)
				tong += a[i][j];
		}
	}
	return tong;
}
void nhapmang(int a[max][max], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "a[" << i << "][" << j << "]: ";
			cin >> a[i][j];
		}
	}
}

void xuatmang(int a[max][max], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << a[i][j]<<"\t";
		}
		cout << endl;
	}
}
int main()
{
	int n,a[max][max];
	do {
		cout << "Nhap n: "; cin >> n;
		if (n<0 || n>max)
			cout << "Sai roi nhap lai.";

	} while (n<0 || n>max);
	nhapmang(a, n);
	xuatmang(a, n);
	cout << "Tong duong cheo chinh la: " << tongcheochinh(a,n) << endl;
	cout << "Tong duong cheo phu la: " << tongcheophu(a,n) << endl;
	return 0;
}