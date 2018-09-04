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
void Amdautien(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] < 0)
		{
			cout << "So am dau tien la: "<<a[i]<<endl;
			break;
		}
			
		if (i == n - 1)
			cout << -1;
	}
}
void Duongcuoicung(int a[], int n)
{
	for (int i = n - 1; i >= 0; i++)
	{
		if (a[i] > 0)
		{
			cout << "So duong dau tien la: " << a[i] << endl;
			break;
		}
		else if (i == n - 1)
			cout << -1 << endl;
	}
}
bool laSNT(int n)
{
	bool laSNT = true;
	for (int i = 0; i <= sqrt(n); i++)
	{
		if (n%i == 0)
			laSNT = false;
	}
	return laSNT;
}
void SNTcuoicung(int a[], int n)
{
	for (int i = n-1; i>=0; i++)
	{
		if (laSNT(a[i]))
		{
			cout << "So nguyen to cuoi cung la: " << a[i] << endl; break;
		}
		if (i == 0)
		{
			cout << -1<<endl;
		}
	}
}
bool laSHT(int n)
{
	bool laSHT = false;
	int tong = 0;
	for (int i = 1; i < n; i++)
	{
		if (n%i == 0)
			tong += i;
	}
	if (tong == n)
		laSHT = true;
	return laSHT;
}
void SHTcuoicung(int a[],int n)
{
	for (int i = n-1; i >=0; i++)
	{
		if(laSHT(a[i])==true)
		{
			cout << "So hoan thien cuoi cung la: " << a[i] << endl; break;
		}
		if (i == 0)
			cout << -1 << endl;
	}
}

int main()
{
	int a[50], n;
	cout << "Kich thuoc Mang: ";
	cin >> n;
	nhapmang(a, n);
	Amdautien(a, n);
	Duongcuoicung(a, n);
	SNTcuoicung(a, n);
	SHTcuoicung(a, n);
	return 0;
}