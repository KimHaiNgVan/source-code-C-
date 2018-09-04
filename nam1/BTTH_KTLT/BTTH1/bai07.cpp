#include<iostream>
using namespace std;
void nhapmang(int a[20][20], int r, int c)
{
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cout << "a[" << i << "][" << j << "]: ";
			cin >> a[i][j];
		}
	}
}
void xuatmang(int a[20][20], int r, int c)
{
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cout << a[i][j] << "\t";
		}
		cout << endl;
	}
}
int tbc(int a[20][20], int r, int c)
{
	int tong = 0;
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			tong += a[i][j];
		}
	}
	return tong/(r*c);
}
int tontai(int a[20][20], int r, int c, int x)
{
	int dem = 0;
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			if (x == a[i][j])
				dem++;
		}
	}
	return dem;
}
void hoandoi(int a[20][20], int r, int c, int& x, int& y)
{
	int tam;
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			if (tontai(a, r, c, a[i][j]) == 0)
				cout << "X hoac Y ko ton tai";
		}
	}
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			if (a[i][j] == x)
		
				a[i][j] = y;
			else if (a[i][j] == y)
				a[i][j] = x;
		}
	}
}
int tinhtichcot(int a[20][20], int r, int c, int x)
{
	int tich = 1;
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			if (j + 1 == x)
				tich *= a[i][j];
		}
	}
	return tich;
}
int main()
{
	int a[20][20], r, c,x,k,l;
	cout << "Nhap vao hang va cot cua ma tran: ";
	cin >> r >> c;
	nhapmang(a, r, c);
	xuatmang(a, r, c);


	cout << "TBC cua ma tran la: " << tbc(a, r, c) << endl;
	cout << "Nhap vao X can xac dinh: "; cin >> x;
	if (tontai == 0)
		cout << x << " ko ton tai trong ma tran." << endl;
	else cout << x << " co ton tai trong ma tran tren." << endl;


	cout << "2 phan tu muon hoan doi la: "; cin >> k >> l;
	hoandoi(a, r, c, k, l);
	cout << "Mtran sau khi hoan doi la: " << endl;
	xuatmang(a, r, c);
	int n;
	cout << "Tinh tich cot thu: "; cin >> n;
	cout << "Tich cot thu " << n << " la: " << tinhtichcot(a, r, c, n) << endl;
	return 0;
}