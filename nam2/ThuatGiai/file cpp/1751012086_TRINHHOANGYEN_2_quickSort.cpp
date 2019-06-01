#include <iostream>
using namespace std;
#define max 100
int gan = 0, ss = 0, hv = 0;
void nhap( int a[], int n)
{
	for( int i = 0; i < n; i++)
	{
		cout <<"a[" << i <<"] = ";
		cin >> a[i];
	}
}
void xuat(int a[], int n)
{
	for( int i = 0; i < n; i++)
		cout << a[i] << " ";
}
void QuickSort( int a[], int left, int right)
{
	int x = a[(left+right)/2];
	int i = left; 
	int j = right;
	gan += 3;
	ss += 3;
	while( i < j)
	{
		ss += 4;
		while( a[i] < x) 
		{
			i++;
			ss++;
			gan++;
		}
		while( a[j] > x) 
		{
			j--;
			ss++;
			gan++;
		}
		if( i <= j)
		{
			swap( a[i], a[j]);
			hv++;
			i++; j--;
			gan += 2;
		}
	}
	if( left < j) QuickSort(a,left, j);
	if( i < right) QuickSort(a,i,right);
}
int main()
{
	int a[max]; 
	int n;
	do{
		cout <<"Nhap so phan tu: ";
		cin >> n;
	} while( n <= 0 || n > max);
	nhap(a,n);
	QuickSort( a, 0, n-1);
	cout <<"SAu khi sap xep :";
	xuat(a,n);
	cout <<"\nGan: " << gan + hv*3 << "\nSo sanh: " << ss <<"\nHoan vi: " << hv<< endl;
}