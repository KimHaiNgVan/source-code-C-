#include<iostream>
using namespace std;
void nhap(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]=";
		cin >> a[i];
	}
}
void tinhTongduong(int a[], int n)
{
	int tong = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] > 0)
			tong += a[i];
	}
	cout << "Tong duong la: " << tong << endl;
}
int main()
{
	int a[50], n;
	cout << "Kich thuoc: "; cin >> n;
	nhap(a, n);
	tinhTongduong(a, n);
	return 0;
}