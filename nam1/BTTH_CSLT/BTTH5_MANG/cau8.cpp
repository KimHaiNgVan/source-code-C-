#include<iostream>
using namespace std;

void nhap(int a[], int &n)
{
	cout << "Kich thuoc Mang: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "a["<<i<<"]=";
		cin >> a[i];
	}
}

void xuat(int a[], int &n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i];
	}
}
int kiemtra(int a[], int n, int x)
{
	int dem=0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] == x) dem++;
	}
	return dem;
}
int main()
{
	int a[50], n=0;
	nhap(a, n);
	xuat(a, n);
	
	cout << "So can kiem tra la: ";
	int x;
	cin >> x;
	cout << "So lan lap lai cua phan tu " << x << " la: " << kiemtra(a, n, x) << endl;
	return 0;
}