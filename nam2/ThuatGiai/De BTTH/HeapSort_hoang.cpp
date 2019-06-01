#include <iostream>
using namespace std;
#define max 100
int ss = 0, hv = 0, gan = 0;
void nhap(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}
}
void xuat(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
}
void shift(int a[], int i, int right)
{
	int j = 2 * i;
	gan++;
	if (ss++,j <= right)
	{
		if (ss++,j < right)
			if (ss++, a[j] < a[j + 1])
			{
				gan++;
				j++;
			}
		if (ss++,a[i] >= a[j])
			return;
		else
		{
			swap(a[i], a[j]);
			gan += 3;
			shift(a, j, right);
		}
	}
}
void HeapSort(int a[], int n)
{
	int i = n / 2 + 1;
	gan++;
	while (ss++,i >= 0)
	{
		shift(a, i, n - 1 );
		i--;
		gan++;
	}
	gan++;
	int right = n - 1;
	while (ss++,right > 0)
	{
		gan += 3;
		swap(a[0], a[right]);
		right--;
		gan++;
		if (ss++,right > 0)
			shift(a, 0, right);
	}
}
int main()
{
	int a[max], n;
	do {
		cout << "Nhap n: ";
		cin >> n;
	} while (n <= 0 || n > max);
	nhap(a, n);
	HeapSort(a, n);
	cout << "Danh sach sau khi sap xep: ";
	xuat(a, n);
	cout << "Phep gan: " << gan << endl;
	cout << "Phep so sanh: " << ss << endl;
	cout << "Phep hoan vi: " << hv << endl;
	system("pause");
}