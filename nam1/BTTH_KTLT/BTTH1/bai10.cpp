
#include<iostream>
using namespace std;
int main()
{
	int a[20][20];
	int value = 1,n;
	cout << "Nhap vao bac cua ma tran: "; cin >> n;
	int minc , minr;
	int maxc , maxr;
	minc = minr = 0;
	maxc = maxr = n - 1;
	while (value <= n*n)
	{

		for (int i = minc; i <= maxc; i++)
		{
			a[minr][i] = value++;
		}
		minr++;
		for (int i = minr; i <= maxr; i++)
		{
			a[i][maxc] = value++;
		}
		maxc--;
		for (int i = maxc; i >= minc; i--)
		{
			a[maxr][i] = value++;
		}
		maxr--;
		for (int i = maxr; i >= minr; i--)
		{
			a[i][minc] = value++;
		}
		minc++;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << a[i][j] << "\t";
		}
		cout << endl;
	}
	return 0;
}