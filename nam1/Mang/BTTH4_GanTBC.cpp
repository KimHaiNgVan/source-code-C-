#include<iostream>
using namespace std;

void nhapmang(int a[], int &n)
{
	cout << "So phan tu cua mang la: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "A[" << i << "]="; cin >> a[i];
	}
}

void xuatmang(int a[], int &n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i]<<"		";
	}
}

double tbc(int a[], int  n)
{	
	int dem=0,tong=0;
	for (int i = 0; i < n; i++)
	{
		dem++;
		tong += a[i];
	}
	double tbc = tong / dem;
	return tbc;
}

void gantbc(int a[], int n)
{
	double min = abs(tbc(a, n) - a[0]);
	for (int i = 0; i < n; i++)
	{
		if (abs(tbc(a, n) - a[i]) < min)
			min = abs(tbc(a, n) - a[i]);
	}
	
	for (int i = 0; i < n; i++)
	{
		if (min == abs(tbc(a, n) - a[i]))
			cout << a[i];
	}

}
void main()
{
	int a[20], n;
	nhapmang(a, n);
	xuatmang(a, n);
	cout << "\nTBC la: "<<tbc(a,n);
	cout << "\nPhan tu gan nhat voi TBC la: ";
	gantbc(a, n);
}
