#include<iostream>
using namespace std;
const int maxr =15, maxc = 15;
void nhapmang(int a[maxr][maxc], int r, int c)
{
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cout << "a[" << i << "][" << j << "]: ";
			cin >> a[i][j];
		}
	}
} //nhap mang
void xuatmang(int a[maxr][maxc], int r, int c)
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
int tinhTongDuong(int a[maxr][maxc],int r,int c) //tinh tong
{
	int tong = 0;
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			if ((a[i][j]) > 0)
				tong += a[i][j];
		}
	}
	return tong;
}
int tinhtichLe(int a[maxr][maxc], int r, int c) //tinh TICH cac so LE
{
	int tich = 1;
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			if (a[i][j] % 2 != 0)
				tich *= a[i][j];
		}
	}
	return tich;
}
int tinhTICHtrenCOTsoChan(int a[maxr][maxc], int r, int c, int n) //tinh TICH cac so CHAN tren COT.
{
	int tich = 1;
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			if (j == n)
			{
				if (a[i][j] % 2 == 0)
					tich *= a[i][j];
			}
		}
	}
	return tich;
}
int tinhTONG4BIEN(int a[maxr][maxc], int r, int c)
{
	int tong = 0;
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			if (i == 0 || i == r - 1 || j == 0 || j == c - 1)
				tong += a[i][j];
		}
	}
	return tong;
}
int main()
{
	int r, c,a[maxr][maxc];
	do {
		cout << "Nhap vao dong va cot: ";
		cin >> r >> c;
		if (r < 0 || c < 0 || r>15 || c>15)
			cout << "Sai roi. Nhap lai" << endl;
	} while (r < 0 || c < 0 || r>15 || c>15);
	nhapmang(a, r, c); //nhap mang
	xuatmang(a, r, c);//xuat mang

	cout << "Tong 4 bien cua ma tran la: " << tinhTONG4BIEN(a, r, c) << endl;
	int n;
	cout << "Tinh tich cua cot thu: "; cin>>n;
	cout << "Tich tren cot thu " << n << " la: " << tinhTICHtrenCOTsoChan(a, r, c, n - 1) << endl;//cau 323- tinh Tich cac so DUONG tren COT
	cout << "Tich cac so le la: " << tinhtichLe(a, r, c) << endl; //cau 321- tinh TICH so LE.
	cout << "Tong cac so duong la: " << tinhTongDuong(a, r, c) << endl; //cau 320-tinh TONG so DUONG.

	return 0;
}