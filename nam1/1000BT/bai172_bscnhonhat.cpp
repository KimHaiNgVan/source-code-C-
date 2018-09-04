#include<iostream>
using namespace std;
void nhap(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "a["<<i<<"]=";
		cin >> a[i];
	}
}
int timSolonnhat(int a[], int n)
{
	int max = a[0];
	for (int i = 0; i < n; i++)
	{
		max = a[i] > max ? a[i] : max;
	}
	return max;
}

int boichungnhonhat(int a[], int n)
{
	int tong = 0;
	int boiso = timSolonnhat(a, n);
	for (int i = 0;i<n; i++)
	{
		if (boiso%a[i] != 0)
		{
			boiso += timSolonnhat(a, n);
			i = -1;
		}
	}
	return boiso;
}
int main()
{
	int a[50], n;
	cout << "Kich thuoc: "; cin >> n;
	nhap(a, n);
	cout << "Boi chung nho nhat la: " << boichungnhonhat(a, n);
	return 0;
}