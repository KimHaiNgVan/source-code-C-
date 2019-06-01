#include<iostream>
#define MAX 100
using namespace std;
int sosanh = 0;
int hoanvi = 0;
int gan = 0;
void input(int a[], int &n)
{
	do
	{
		cout << "nhap so luong phan tu:";
		cin >> n;
		if (n < 0 || n>100)
			cout << "nhap sai nhap lai!!" << endl;
	} while (n < 0 || n>100);
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]=";
		cin >> a[i];
	}cout << endl;
}
void swap(int &a, int &b)
{
	int c = a;
	a = b;
	b = c;
}

void output(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << "\t";
	}cout << endl;
}


void shift(int a[], int l, int right)
{
	int x, i, j;
	i = l;
	j = 2 * i;
	x = a[i];
	gan = gan + 3;
	while (sosanh++, j <= right)
	{
		if (sosanh++, j < right)
			if (sosanh++, a[j] < a[j + 1])
			{
				j++;
				gan++;
			}
		if (sosanh++, a[j] <= x)
			return;
		else
		{
			a[i] = a[j];
			a[j] = x;
			i = j;
			j = 2 * i;
			x = a[i];
			gan = gan + 5;
		}
	}
}
void heapsort(int a[], int n)
{
	int i = n / 2;
	gan++;
	while (sosanh++, i >= 0)
	{
		shift(a, i, n - 1);
		i--;
		gan++;
	}
	int right = n - 1;
	gan++;
	while (sosanh++, right > 0)
	{
		swap(a[0], a[right]);
		hoanvi++;
		gan = gan + 3;
		right--;
		gan++;
		if (sosanh++, right > 0)
			shift(a, 0, right);
	}
}
int main()
{
	int a[MAX];
	int n;
	input(a, n);
	cout << "mang da nhap la:" << endl;
	output(a, n);
	heapsort(a, n);
	cout << "mang duoc sap xep la:" << endl;
	output(a, n);
	cout << "so phep so sanh la :" << sosanh << endl;
	cout << "so phep hoan vi la:" << hoanvi << endl;
	cout << "so phep gan la:" << gan << endl;
	system("pause");
	return 0;
}