#include<iostream>
using namespace std;
void nhapmang(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]=";
		cin >> a[i];
	}
}
int timMin(int a[], int n)
{
	int min = a[0];
	for (int i = 0; i < n; i++)
	{
		min = a[i] < min ? a[i] : min;
	}
	return min;
}

bool uocsocuamang(int a[], int n, int uocso)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] % uocso != 0)
			return false;
	}
	return true;
}
int  USClonnhat(int a[], int n)
{
	int min = timMin(a, n);
	for (int i = min; i >= 1; i--)
	{
		if (uocsocuamang(a, n, i) == true)
		{
			return i;
		}
	}
	return 1;
}
int main()
{
	int a[50], n;
	cout << "Kich thuoc: "; cin >> n;
	nhapmang(a, n);
	cout <<"USC lon nhat cua mang la: "<<USClonnhat(a, n)<<endl;
	return 0;
}