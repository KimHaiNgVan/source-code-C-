#include<iostream>
using namespace std;
const int maxr = 5, maxc = 6;
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
}
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
int tinhtongHang(int a[maxr][maxc], int r, int c,int x)
{
	int tong = 0;
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			if (i = x - 1)
			{
				tong += a[i][j];
			}
		}
	}
	return tong;
}
void tontai(int a[maxr][maxc], int r, int c, int x)
{
	int hang, cot;
	int dem = 0;
	bool tontai = false;
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			if (x == a[i][j])
			{
				dem++;
				hang = i + 1;
				cot = j + 1;	
				cout << "Xuat hien tai hang " << hang << " va cot " << cot << endl;
			}
		}
	}
	if  (dem == 0)
		cout << "X khong co ton tai trong ma tran" << endl;
	else cout << "X co ton tai va ton tai " << dem << " lan." << endl;
}
int main()
{
	int a[maxr][maxc], r, c;
	do {
		cout << "Nhap vao so hang va so cot cua ma tran la: " << endl;
		cin >> r >> c;
		if (r<0 || c<0 || r>maxr || c>maxc)
		{
			cout << "Sai roi. Nhap lai!";
		}
	} while (r<0 || c<0 || r>maxr || c>maxc);
	nhapmang(a, r, c);
	xuatmang(a, r, c);
	int hang;
	do {
	cout << "Nhap vao hang can tinh tong la "; cin >> hang;
	if (hang <= 0 || hang > r)
		cout << "Sai roi. Nhap lai" << endl;
	} while (hang <= 0 || hang > r);
	cout << "Tong cua hang thu " << hang << " cua ma tran la: " << tinhtongHang(a, r, c, hang) << endl;
	int x;
	cout << "Nhap vao X: " << endl;
	cin >> x;
	tontai(a, r, c, x);
	return 0;
}