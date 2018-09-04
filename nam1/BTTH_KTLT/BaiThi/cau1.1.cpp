#include<iostream>
using namespace std;
void nhap(int a[50][50], int r, int c)
{
	for (int i = 0; i<r; i++)
	{
		for (int j = 0; j<c; j++)
		{
			cout << "a[" << i << "][" << j << "]: ";
			cin >> a[i][j];
		}
	}
}
void xuat(int a[50][50], int r, int c)
{
	for (int i = 0; i<r; i++)
	{
		for (int j = 0; j<c; j++)
		{
			cout << a[i][j] << "\t";
		}
		cout << endl;
	}
}
int tich(int a[50][50], int r, int c, int x)
{
	int tich = 1;
	for (int i = 0; i<r; i++)
	{
		for (int j = 0; j<c; j++)
		{
			if (j + 1 == x)
				tich *= a[i][j];
		}
	}
	return tich;
}
int main()
{
	int r, c, a[50][50];
	do {
		cout << "Nhap vao hang va cot cua ma tran: "; cin >> r >> c;
		if (r<0 || c<0)
			cout << "Sai roi.\n";
	} while (r<0 || c<0);
	int x;
	nhap(a, r, c);
	xuat(a, r, c);

	do {
		cout << "Nhap vao cot can tinh TICH la: ";
		cin >> x;
		if (x<0 || x>c)
			cout << "Sai roi. Nhap lai\n";
	} while (x<0 || x>c);
	cout << "Tich cua cot thu " << x << " la: " << tich(a, r, c, x) << endl;
	return 0;
}