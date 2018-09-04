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
void lietkeChan(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0)
			cout << a[i]<<" ";
	}
}
int main()
{
	int a[50], n;
	cout << "Kich thuoc: ";
	cin >> n;
	nhap(a, n);
	lietkeChan(a, n);
	return 0;
}