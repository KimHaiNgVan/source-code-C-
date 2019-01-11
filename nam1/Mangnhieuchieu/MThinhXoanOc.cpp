#include <iostream>;
using namespace std;
/*void nhap(int a[50][50], int d, int c)
{
	for (int i = 0; i < d; i++)
	{
		for (int j = 0; j < c; j++)
		{
			
			a[i][j] = rand() % (50 - 10 + 1) + 10;
			
		}
	}
}*/
void xuat(int a[50][50], int d, int c)
{
	for (int i = 0; i < d; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cout << "\t" << a[i][j] ;
		}
		cout << endl;
	}
}
void main()
{
	int n, a[50][50];
	cout << "Ma tran cap n: ";
	cin >> n;
	int value = 1;
	int maxr, minr, maxc, minc;
	minc = minr = 0;
	maxr = maxc = n - 1;
	while (value <= n*n)
	{
		//hang1
		for (int i = minc; i <= maxc; i++)
		{
			a[minr][i] = value++;
		}
		minr++;
		//hang2
		for (int i = minr; i <= maxr; i++)
		{
			a[i][maxc] = value++;
		}
		maxc--;
		for (int i = maxc; i>= minc; i--)
		{
			a[maxr][i] = value++;
		}
		maxr--;
		for (int i = maxr; i >= minr; i--)
		{
			a[i][minc]=value++;
		}
		minc++;
	}
	cout << "Ma tran zig zag la:" << endl;
	for (int i = 0; i < n; i++)
	{
			for (int j = 0; j < n; j++)
				cout << a[i][j]<<"\t";
			cout << endl;
	}
	system("pause");
}