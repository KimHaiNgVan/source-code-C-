#include<iostream>
using namespace std;
bool kiemtrahoanthien(int n)
{
	int i = 1;
	int S = 0;
	while (i < n)
	{
		if (n % i == 0)
		{
			S = S + i;
		}
		i++;
	}
	if (S == n)
		return true;
	else
		return false;
}
void nhap(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]="; cin >> a[i];
	}
}

int vitrisht(int a[], int n)
{
	for (int i = n - 1; i >= 0; i--)
	{
		if (kiemtrahoanthien(a[i]) == true)
			return i+1;
	}
	return -1;
}
void inSHT( int m)
{
	for (int i = 1; i <= m; i++)
	{
		if (kiemtrahoanthien(i))
			cout << i<<" ";
	}
	cout << endl;
}
int main()
{
	int a[50], n,m;
	cout << "M: "; cin >> m;
	inSHT(m);
	cout << "Kich thuoc Mang: ";
	cin >> n;
	nhap(a, n);
	cout << "Vi tri cuoi cung cua sht trong mang: " << vitrisht(a, n)<<endl;
	
	return 0;
}