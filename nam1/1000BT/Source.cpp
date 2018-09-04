#include<iostream>
using namespace std;
const int maxr = 15, maxc = 15;
void nhapmang(int a[maxr][maxc], int r, int c)
{
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cout << "a[" << i << "][" << j << "]: ";
			cin >> a[i][j];
		}
	}
} //nhap mang
void xuatmang(int a[maxr][maxc], int r, int c)
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
int demchuso(int n)
{
	int dem = 0;
	while (n > 0)
	{
		dem+=1;
		n /= 10;
	}
	return dem;
}
int demchusotrongmatran(int a[maxr][maxc], int r, int c)
{
	int dem = 0;
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			int sochuso=demchuso(a[i][j]);
			dem += sochuso;
		}
	}
	return dem;
}
int main()
{
	int r, c, a[maxr][maxc];
	cout << "Hang va cot: ";
	cin >> r >> c;
	nhapmang(a, r, c);
	xuatmang(a, r, c);
	cout << "So luong chu so cua ma tran tren la: " << demchusotrongmatran(a, r, c);
}