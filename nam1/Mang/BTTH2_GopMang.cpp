#include<iostream>
using namespace std;
void nhapmang(int a[], int &n)
{
	cout << "Nhap kich thuoc mang: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]=";
		cin >> a[i];
	}
}
void xuatmang(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "	" << a[i];
	}
}
void gopmangc(int a[], int b[], int c[],int &n)
{
	int j = 0;
	for (int i = 0; i < n; i++)
	{
		c[j++] = a[i];
		c[j++] = b[i];
	}
	
}
int main()
{

	int a[20], n,b[20],c[20];
	nhapmang(a, n);
	xuatmang(a, n);
	nhapmang(b, n);
	xuatmang(b, n);
	gopmangc(a, b, c, n);
	cout << "\n";
	xuatmang(c, 2 * n);
}