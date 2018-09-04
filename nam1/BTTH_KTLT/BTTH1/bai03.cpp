#include<iostream>
using namespace std;
const int maxr = 10, maxc = 15;
void nhapmang(int a[maxr][maxc], int r, int c)
{
	int i = 0;
	do {
		int j = 0;
		do {
			cout << "a[" << i << "][" << j << "]: ";
			cin >> a[i][j];
			j++;
		} while (j < c);
		i++;
	} while (i < r);
}
void xuatmang(int a[maxr][maxc], int r, int c)
{
	int i = 0;
	do {
		int j = 0;
		do {
			cout << a[i][j] << "\t";
			j++;
		} while ( j < c);
		cout << endl;
		i++;
	} while (i < r);
}
int tinhtong(int a[maxr][maxc], int r, int c)
{
	int tong = 0;
	int i = 0;
	while (i < r)
	{
		int j = 0;
		while (j < c)
		{
			tong += a[i][j];
			j++;
		}
		i++;
	}
	return tong;
}
int timMin(int a[maxr][maxc], int r, int c)
{
	int min = a[0][0];
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			if (a[i][j] < min)
				min = a[i][j];
		}
	}
	return min;
}
int timmax(int a[maxr][maxc], int r, int c)
{
	int max = a[0][0];
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			if (a[i][j] > max)
				max = a[i][j];
		}
	}
	return max;
}
void timvitrimin(int a[maxr][maxc], int r, int c)
{
	int hang, cot;
	int min = a[0][0];
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			if (a[i][j] < min)
			{
				min = a[i][j];
				hang = i + 1;
				cot = j + 1;
			}
			
		}
	}
	cout << "Vi tri min la o hang " << hang  << "va cot " << cot <<endl;
}
int main()
{
	int a[maxr][maxc], r, c;
	do {
		cout << "Nhap vao so hang va so cot cua matran la: ";
		cin >> r >> c;
		if (r<0 || c<0 || r>maxr || c>maxc)
			cout << "Sai roi. Nhap lai.";
	} while (r<0 || c<0 || r>maxr || c>maxc);
	nhapmang(a, r, c);
	xuatmang(a, r, c);
	cout << "Tong cua ma tran la: " << tinhtong(a,r,c) << endl;
	cout << "Min cua ma tran la: " << timMin(a, r, c) << endl;
	cout << "Max cua ma tran la: " << timmax(a, r, c) << endl;
	timvitrimin(a, r, c);
	return 0;
}