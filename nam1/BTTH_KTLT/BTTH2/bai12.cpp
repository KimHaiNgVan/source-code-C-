#include<iostream>
using namespace std;
void nhapmang(int a[20], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]: "; cin >> a[i];
	}
}
void xuatmang(int a[20], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << "\t";

	}
}
int timmin(int a[], int n)
{
	if (n == 1)
		return a[0];
	else
	{
		if (a[n - 1] <timmin(a, n - 1))
			return a[n - 1];
		else
			return timmin(a, n - 1);
	}
}
int main()
{
	int min =0, a[20],n;
	cout << "N: "; cin >> n;
	nhapmang(a, n);
	xuatmang(a, n);
	cout << "Min la: " << timmin(a, n);
	return 0;
}