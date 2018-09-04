#include<iostream>
using namespace std;
bool laSNT(int n)
{
	bool snt = true;
	for (int i = 2; i <= sqrt(1.0*n); i++)
	{
		if (n%i == 0)
			return  false;
	}
	return true;
}
void nhap(int **p, int r, int c)
{
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cout << "p[" << i << "][" << j << "]: "; cin >> p[i][j];
		}
	}
}
void xuat(int **p, int r, int c)
{
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cout << p[i][j] << "\t";
		}
		cout << endl;
	}
}
int tongSNT(int **p, int r, int c)
{
	int tong = 0;
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			if (laSNT(p[i][j]))
				tong += p[i][j];
		}
	}
	return tong;
}
int main()
{
	int **p,r,c;
	cout << "R: "; cin >> r;
	cout << "C: "; cin >> c;
	p = new int* [r];
	for (int i = 0; i < r; i++)
	{
		p[i] = new int[c];
	}
	nhap(p, r, c);
	xuat(p, r, c);
	cout << "Tong cac so SNT la: " << tongSNT(p, r, c);





	for (int i = 0; i < r; i++)
	{
		delete[] p[i];
	}


	delete[] p;
	p = NULL;
	return 0;
}