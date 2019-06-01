#include<iostream>
using namespace std;
int hv = 0, ss = 0, gan = 0;
int MAX = 100;
void input(int a[], int &n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]: ";
		cin >> a[i];
	}
}
void output(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}
void swap(int &a, int &b) {
	int tam = a;
	a = b;
	b = tam;
	gan += 3;
}
void countingsort(int a[], int b[], int &kt, int n, int k)
{
	int c[100];
	for (int i = 0; i <= k; i++)
	{
		c[i] = 0;
	}
	for (int j = 0; j < n; j++)
	{
		c[a[j]]++;
	}
	kt = 0;
	for (int i = 0; i <= k; i++)
	{
		while (c[i] > 0)
		{
			b[kt++] = i;
			c[i]--;
		}
	}
}
int main()
{
	int soluong, a[100],b[100];
	int k = 0;
	int kt;
	do {
		cout << "Nhap vao so luong: ";
		cin >> soluong;
		if (soluong < 0)
			cout << "sai roi.\n";
	} while (soluong < 0);
	input(a, soluong);
	
	for (int i = 0; i < soluong; i++)
	{
		if (a[i] > k)
			k = a[i];
	}
	countingsort(a, b, kt, soluong, k);
	cout << "Ham sau khi sap xep: ";
	output(b, soluong);
	cout << "phep gan: " << gan << endl;
	cout << "phep so sanh: " << ss << endl;
	cout << "phep hoan vi: " << hv << endl;

	system("pause");
	return 0;
}