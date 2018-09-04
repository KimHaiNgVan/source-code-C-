#include<iostream>
using namespace std;

void nhapmang(double a[], int n);
void xuatmang(double a[], int n);
int main()
{
	double a[50];
	int n;
	cout << "Nhap vao so phan tu "; cin >> n;
	for (int i = 0; i < 50; i++)
	{
		if (i < 25)
			a[i] = i*i;
		else
			a[i] = i*i*i;
	}

	for(int i=0;i<n;i+=10)
	{
		for (int j = i; j < i + 10; j++)
		{
			cout << j << "	";

		}
		cout << endl;
	}
	return 0;
}
void nhapmang(double a[], int n)
{
	cout << "Kich thuoc Mang: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "A[" << i << "]="; cin >> a[i];
	}
}
void xuatmang(double a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i];
	}
}