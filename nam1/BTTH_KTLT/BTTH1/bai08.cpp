#include<iostream>
using namespace std;
void nhapmang(int a[20][20], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			a[i][j] = rand() % (50 - 20 + 1) + 20;
		}
	}
}
void xuatmang(int a[20][20], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << a[i][j] << "\t";
		}
		cout << endl;
	}
}
void tinhtong(int a[20][20], int b[20][20], int n,int c[20][20])
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			c[i][j] = a[i][j] + b[i][j];
		}
	}
}

void tinhtich(int a[20][20], int b[20][20], int n, int c[20][20])
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			c[i][j] = 0;
			for (int k = 0; k < n; k++)
			{
				c[i][j] += a[i][k] * b[k][j];
			}
		}
	}
}
int main()
{
	int n,a[20][20],c[20][20],b[20][20];
	cout << "Nhap vao n: "; cin >> n;
	cout << "Mang A: " << endl;
	nhapmang(a, n);
	xuatmang(a, n);
	cout << "Mang B: " << endl;
	nhapmang(b, n);
	xuatmang(b, n);

	cout << "Tong cua Ma tran A va B la: " << endl;
	tinhtong(a, b, n, c);
	xuatmang(c, n);

	cout << "Tich cua ma tran a va b la: " << endl;
	tinhtich(a, b, n, c);
	xuatmang(c, n);
	return 0;
}