#include<iostream>
using namespace std;
void daonguoc(int *p,int n)
{
	int tam;
	for (int left = 0, right = n - 1; left < right; left++, right--)
	{
		tam = p[left];
		p[left] = p[right];
		p[right] = tam;
	}
}
void xuat(int *p, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << p[i] << "\t";
	}
}
void nhap(int *p, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "p[" << i << "]: "; cin >> p[i];
	}
}
int main()
{
	int n, *p;
	cout << "N: "; cin >> n;
	p = new int [n];
	nhap(p, n);
	cout << "Mang truoc khi hoan doi la: " << endl;
	xuat(p, n);
	cout << "Mang sau khi hoan doi la: " << endl;
	daonguoc(p, n);
	xuat(p, n);
	return 0;
}