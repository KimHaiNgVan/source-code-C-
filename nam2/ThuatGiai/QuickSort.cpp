#include<iostream>
using namespace std;
#define MAX  100
void nhapMang(int a[MAX], int n)
{
	for(int i=0; i<n ; i++)
	{
		cin >> a[i];
	}
}
void xuatMang(int a[MAX], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << "\t\t";
	}
}
void hoanVi(int &a, int&b)
{
	int temp = a;
	a = b;
	b = temp;
}
void quickSort(int a[MAX], int left, int right)
{
	int i, j;
	int x = a[(right + left) / 2];
	i = left;
	j = right;
	while (i < j)
	{
		while (a[i] < x) i++;
		while (a[j] > x) j--;
		if (i <= j)
		{
			hoanVi(a[i], a[j]);
			i++; 
			j--;
		}
	}
	if(left < j ) quickSort(a, left, j);
	if(right > i) quickSort(a,i,right);
}
void shift(int a[], int l, int right)
{
	int x, i, j;
	i = l;
	j = 2 * i;
	x = a[i];
	while (j <= right)
	{
		if (j < right) {
			if (a[j] < a[j + 1])  j++;
		}
		if (a[j] <= x)    return;
		else
		{
			a[i] = a[j];
			a[j] = x;
			i = j;
			j = 2 * i;
			x = a[i];
		}
	}
}
void heapSort(int a[], int n)
{
	int q = n / 2;
	while (q >= 0)
	{
		shift(a, q, n - 1);
		q--;
	}
	int  right = n - 1;
	while (right > 0)
	{
		hoanVi(a[0], a[right]);
		right--;
		if (right > 0)
			shift(a, 0, right);
	}
}
int main()
{
	int soluongPt,mang[MAX],left,right;
	
	do
	{
		cout << "Nhap vao so luong phan tu: "; cin >> soluongPt;
		if (soluongPt<0 || soluongPt> MAX)
			cout << "Sai roi. Nhap lai! \n";
	} while (soluongPt<0 || soluongPt> MAX);
	nhapMang(mang, soluongPt);
	cout << "Truoc khi sap xep: ";
	xuatMang(mang, soluongPt);
	cout << "Sau khi sap xep: ";
	/*left = 0;
	right = soluongPt - 1;
	quickSort(mang, left, right);*/
	heapSort(mang, soluongPt);
	xuatMang(mang, soluongPt);
	system("pause");
	return 0;
}