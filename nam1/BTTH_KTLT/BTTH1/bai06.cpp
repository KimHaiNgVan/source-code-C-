#include<iostream>
using namespace std;
const int max = 20;
void nhapmang(int a[max][max], int r, int c)
{
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cout << "a[" << i << "][" << j << "]: ";
			cin >> a[i][j];
		}
	}
}
void xuatmang(int a[max][max], int r, int c)
{
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cout << a[i][j] << "\t";
		}
		cout << endl;
	}
}
int main()
{
	int a[max][max], b[max][max], c[max][max],m,n,p;
	do {
		cout << "Nhap vao so hang cua ma tran A: "; cin >> m;
		cout << "Nhap vao so cot cua mtA cung la so hang cua matran B: "; cin >> n;
		cout << "Nhap vao so cot cua ma tran B: "; cin >> p;
		if (m<0 || n<0 || p<0 || m>max || n>max || p>max)
			cout << "Sai roi. Nhap lai.";
	} while (m<0 || n<0 || p<0 || m>max || n>max || p>max);
	/*nhapmang(a, m, n);
	xuatmang(a, m, n);
	nhapmang(b, m, n);
	xuatmang(b, m, n);*/
	////Tong 2 ma tran 
	//for (int i = 0; i < m; i++)
	//{
	//	for (int j = 0; j < n; j++)
	//	{
	//		c[i][j] = a[i][j] + b[i][j];
	//	}
	//}
	//cout << "Tong cua 2 ma tran la:  " << endl;
	//xuatmang(c, m, n);

	//tich 2 ma tran
	nhapmang(a, m, n);
	xuatmang(a, m, n);
	nhapmang(b, n, p);
	xuatmang(b, n, p);
	int tich = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < p; j++)
		{
			c[i][j] = 0;
			for (int k = 0; k <n; k++)
			{
				c[i][j] += a[i][k] * b[k][j];
			}
		}
	}
	xuatmang(c, m, p);
	return 0;
}