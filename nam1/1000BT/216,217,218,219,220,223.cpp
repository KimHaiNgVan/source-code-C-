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
void demChan(int a[], int n)
{
	int dem2 = 0,dem7=0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0)
			dem2++;
		if (a[i] % 7 == 0 && a[i]>0)
			dem7++;
	}
	cout << "So phan tu chan la: " << dem2 << endl;
	cout << "So phan tu chia het 7 la: " << dem7 << endl;
}
int timSodaonguoc(int n)
{
	int sdn = 0,dv=0;
	while (n > 0)
	{
		dv = n % 10;
		n = n / 10;
		sdn = sdn * 10 + dv;
	}
	return sdn;
}
void demSoDoiXung(int a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] == timSodaonguoc(a[i]))
			dem++;
	}
	cout << "So luong phan tu cua so doi xung la: " << dem << endl;
}
void demSolanxuathienX(int a[], int n,int x)
{
	int dem = 0;
	
	for (int i = 0; i < n; i++)
	{
		if (a[i] == x)
			dem++;
	}
	cout << x<<" xuat hien "<<dem<<" lan"<<endl;
}
void demGiatritancungbang5(int a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (n % 10 == 5)
			dem++;
	}
	cout << "So phan tu co tan cung bang 5 la: " << dem << endl;
}
bool laSNT(int n)
{
	bool laSNT = true;
	for (int i = 1; i <= sqrt((double)n); i++)
	{
		if (n%i == 0)
			laSNT = false;
	}
	return laSNT;
}
void demSNT(int a[], int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (laSNT(a[i]))
		{
			dem++;
			cout << a[i] << " ";
		}
	}
	cout << "So luong SNT la: " << dem << endl;
}
int main()
{
	int a[50], n;
	cout << "Kich thuoc: ";
	cin >> n;
	nhap(a, n);
	demChan(a, n);
	demSoDoiXung(a, n);
	int x = 0;
	cout << "Kiem tra so: "; cin >> x;
	demSolanxuathienX(a, n, x);
	demGiatritancungbang5(a, n);
	int m;
	cout << "Kich thuoc SNT "; cin >> m;
	demSNT(a, m);
	return 0;
}