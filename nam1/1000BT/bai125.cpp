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
void  kiemtra(int a[], int n,int m)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] < m) dem++;
	}
	cout << "Co " << dem << " phan tu nho hon " << m<<endl;
}
int main()
{
	int a[50], n, m;
	cout << "Kich thuoc Mang: ";
	cin >> n;
	nhap(a, n);
	cout << "So nguyen: ";
	cin >> m;
	kiemtra(a, n, m);
	return 0;
}