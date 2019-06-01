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
void quicksort(int a[], int left, int right)
{
	int x, i, j;
	i = left;
	j = right;
	x = a[(left + right) / 2];
	gan += 3;
	while (ss++,i < j)
	{
		while (ss++,a[i] < x)
		{
			i++;
			gan++;
		}
		while (ss++,a[j] > x)
		{
			j--;
			gan++;
		}
		if (ss++,i <= j)
		{
			swap(a[i], a[j]);
			hv++;
			i++; j--;
			gan += 2;
		}
	}
	if (ss++,right > i)
		quicksort(a, i, right);
	if (ss++,left < j)
		quicksort(a, left, j);
}
int main()
{
	int soluong, a[100];
	do {
		cout << "Nhap vao so luong: ";
		cin >> soluong;
		if (soluong < 0)
			cout << "sai roi.\n";
	} while (soluong < 0);
	input(a, soluong);
	cout << "Ham sau khi sap xep la: ";
	int left = 0, right = soluong - 1;
	quicksort(a, left, right);
	output(a, soluong);
	cout << "phep gan: " << gan << endl;
	cout << "phep so sanh: " << ss << endl;
	cout << "phep hoan vi: " << hv << endl;
	
	system("pause");
	return 0;
}