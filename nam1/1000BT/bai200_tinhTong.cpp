#include<iostream>
using namespace std;
void nhap(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]="; cin >> a[i];
	}
}
void tinhTong(int a[], int n)
{
	int tong = 0;
	for (int i = 0; i < n; i++)
	{
		tong += a[i];
	}
	cout << "Tong cac phan tu la: " << tong << endl;
}
int main()
{
	int a[50], n;
	cout << "Kich thuoc: ", cin >> n;
	nhap(a, n);
	tinhTong(a, n);
	return 0;
}