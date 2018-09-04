#include<iostream>
using namespace std;
void nhap(int *p, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]: "; cin >> p[i];
	}
}
void xuat(int *p, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << p[i] << "\t";
	}
}
void tontai(int *p, int n, int x)
{
	int vitri = -1;
	for (int i = 0; i < n; i++)
	{
		if (x == p[i])
		{
			vitri = i + 1;
			cout << "X xuat hien lan dau tien tai cot thu " << vitri << endl;
		}
	}

	if(vitri<0)
		p=NULL;
}
int main()
{
	int *p, n;
	cout << "N: "; cin >> n;
	p = new int[n];
	nhap(p, n);
	xuat(p, n);
	int x;
	cout << "X can xac dinh la: "; cin >> x;
	tontai(p, n, x);
	
	delete [] p;
	p = NULL;
	return 0;
}