#include<iostream>
using namespace std;
int hv = 0, ss = 0, gan = 0;
int MAX = 100;
void input(int a[], int n)
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
		cout << a[i] << "\t";
	}
	cout << endl;
}
void swap(int &a, int &b) {
	int tam = a;
	a = b;
	b = tam;
	gan += 3;
}
void shift(int a[], int l, int right)
{
	int x, i, j;
	i = l;
	j = 2 * i;
	x = a[i];
	while (j <= right)
	{
		if (j < right)
		{
			if (a[j] < a[j + 1])
			{
				j++;
			}
		}
		if (a[j] <= x)
				return;
		else {
				a[i] = a[j];
				a[j] = x;
				i = j;
				j = 2 * i;
				x = a[i];
			}
		
	}
}
void heapsort(int a[100], int n)
{
	int q = n / 2;
	while (q >= 0) {
		shift(a, q, n - 1);
		q--;
	}
	int right = n - 1;
	while (right > 0)
	{
		swap(a[0], a[right]);
		right--;
		if (right > 0)
		{
			shift(a, 0, right);
		}
	}
}
int main()
{
	int a[100],soluong;
	do {
		cout << "Nhap vao so luong: ";
		cin >> soluong;
		if (soluong < 0)
			cout << "sai roi.\n";
	} while (soluong < 0);
	input(a, soluong);
	cout << "Ham sau khi sap xep la: ";
	heapsort(a, soluong);
	output(a, soluong);
	cout << "phep gan: " << gan << endl;
	cout << "phep so sanh: " << ss << endl;
	cout << "phep hoan vi: " << hv << endl;

	system("pause");
	return 0;
}