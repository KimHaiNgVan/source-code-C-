#include<iostream>
using namespace std;

void nhapmang(int a[], int &n)
{
	cout << "Kich thuoc Mang: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "a["<<i<<"]=";
		cin >> a[i];
	}
}
void xuatmang(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i]<<"  ";
	}
	cout << endl;
}
void xoa(int a[], int &n, int x)
{
	for (int i = x; i < n; i++)
	{
		a[i] = a[i + 1];
	}
	n--;
}
void xoatrung(int a[], int &n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (a[i] == a[j])
			{
				xoa(a, n, i);
				j--;
			}
		}
	}
}
int main()
{
	int a[50], n;
	nhapmang(a, n);
	cout << "Ham truoc khi xoa trung la: "<<endl;
	xuatmang(a, n);
	cout << "Ham sau khi xoa trung la: "<<endl;
	xoatrung(a, n);
	cout << endl;
	xuatmang(a, n);
	return 0;
}