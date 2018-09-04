#include<iostream>
#include<cmath>
using namespace std;
void  nhapa(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "a["<<i<<"]=";
		cin >> a[i];
	}
}

int  nhapX(int x, int n)
{
	int kq = 0;
	for (int i = 0; i < n; i++)
	{
		kq = pow(x, i);
	}
	return	kq;
}
int main()
{

	int a[50], x, n;
	cout << "X: "; cin >> x;
	cout << "Bac cua da thuc n: "; cin >> n;
	cout << "He so cua da thuc la " << endl;
	nhapa(a, n);

	return 0;
}