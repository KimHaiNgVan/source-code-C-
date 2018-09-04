#include<iostream>
#include<cmath>
using namespace std;
void  nhapa(int a[], int n)
{
	for (int i = 0; i <= n; i++)
	{
		cout << "a[" << i << "]=";
		cin >> a[i];
	}
}

int  tinhToan(int x, int n,int a[])
{
	int kq = 0;
	int tong = 0;
	for (int i = 0; i <= n; i++)
	{
		kq = pow(x, i);
		tong += a[i] * kq;
	}
	return tong;
}

int main()
{

	int a[50], x, n;
	cout << "X: "; cin >> x;
	cout << "Bac cua da thuc n: "; cin >> n;
	cout << "He so cua da thuc la " << endl;
	nhapa(a, n);

	cout << "Ket qua cua Da thuc la: " << tinhToan(x,n,a) << endl;
	return 0;
}