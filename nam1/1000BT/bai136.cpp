#include<iostream>
using namespace std;
void nhap(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]="; cin >> a[i];
	}
}
int  kiemtra(int a[], int n)
{
	for (int i = n - 1; i >= 0; i--)
	{
		if (a[i] % 2 == 0)
			return a[i];
	}
	return -1;
}
int main()
{
	int a[50], n;
	cout << "Kich thuoc Mang: "; cin >> n;
	nhap(a, n);
	cout << "So chan cuoi cung la: " << kiemtra(a, n)<<endl;
	return 0;
}