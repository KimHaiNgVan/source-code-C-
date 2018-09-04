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
int kiemtra(int a[], int n)
{
	
	for (int i = 0; i < n; i++)
	{
		if (a[i] > 0)
		{

			return a[i];
			
		}
	}
	return -1;

}
int main()
{
	int a[50], n;
	cout << "Kich thuoc Mang: "; cin >> n;
	nhap(a, n);
	cout <<  kiemtra(a, n);
	return 0;
}