// heap sort đúng rồi nè
#include <iostream>
using namespace std;
int gan = 0;
int sosanh = 0;
int hoanvi = 0;
void nhapmang(int a[], int &n)
{
	do {
		cout << "So luong phan tu mang: ";
		cin >> n;
	} while (n <= 0 || n > 100);

	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i + 1 << "] = ";
		cin >> a[i];
	}
}

void xuatmang(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << "\t";
	cout << endl;
}
void hv(int &x, int &y)
{
	int tam = x;
	x = y;
	y = tam;
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

// heapsort
void HeapSort(int a[], int n)
{
	int q = n / 2;
	gan++;
	while (sosanh++, q >= 0) // tạo Heap ban đầu
	{
		shift(a, q, n - 1);
		q--;
		gan++;
	}
	int right = n - 1;
	gan++;
	while (sosanh++, right > 0)
	{
		hv(a[0], a[right]);
		hoanvi++;
		gan = gan + 3;
		right--;
		gan++;
		if (sosanh++, right > 0)
			shift(a, 0, right);
	}
}
void main()
{

	cout << "\n\n===========heapsort==============\n\n";
	int a[100], n;
	nhapmang(a, n);
	HeapSort(a, n);
	cout << "\nMang sau khi sap tang:\t";
	xuatmang(a, n);
	cout << "\n\nSo lan gan: " << gan << endl;
	cout << "So lan so sanh: " << sosanh << endl;
	cout << "So lan hoan vi: " << hoanvi << endl;
	system("pause");
}