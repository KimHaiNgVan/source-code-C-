#include<iostream>
using namespace std;
bool laSHT(int n)
{
	int tong = 0;
	for (int i = 1; i < n; i++)
	{
		if (n%i == 0)
		{
			tong += i;
		}
	}
	if (tong == n) return true;
	else return false;
}
int SHT(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (laSHT(a[i])) return a[i];
	}
	return -1;
}
void nhap(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]=";
		cin >> a[i];
	}
}
void inSHT(int n)
{
	for (int i = 1; i <= n; i++)
	{
		if (laSHT(i)==true)
			cout << i<<" ";
	}
}
int main()
{
	int n, a[50];
	cout << "Kich thuoc mang: "; cin >> n;
	nhap(a, n);
	cout << "SHT dau tien la: " << SHT(a, n);
	int m;
	cout << "\nM: "; cin >> m;
	inSHT(m);
	return 0;
}