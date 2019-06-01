#include <iostream>
using namespace std;
#define max 100
int gan = 0, ss = 0;
void nhap(int a[], int n, int &k)
{
	for( int i = 0; i < n; i++)
	{
		cout <<"a[" << i <<"] = ";
		cin >> a[i];
	}
	k = a[0];
	for( int i = 0; i < n; i++)
		if( a[i] > k)
			 k = a[i];
}
void xuat(int a[], int n)
{
	for( int i = 0; i < n; i++)
		cout << a[i] << " " ;
}
void CountingSort(int a[], int n, int k, int b[], int &kt)
{
	int c[max];
	gan += 4; ss += 3;
	for( int i = 0; i <= k; i++)
	{
		c[i] = 0;
		gan += 2;
		ss++;
	}
	for( int j = 0; j < n; j++)
	{
		c[a[j]]++;
		gan += 2;
		ss++;
	}
	kt = 0;
	for( int i = 0; i <= k; i++)
	{
		while( c[i] > 0)
		{
			b[kt++] = i;
			c[i]--;
			ss++;
			gan += 3;
		}
		gan++;
		ss += 2;
	}
}
int main()
{
	int a[max], b[max];
	int n, kt, k = 0;
	do{
		cout <<"Nhap so phan tu cua mang: " ;
		cin >> n;
	} while( n <= 0 || n > max);
	nhap(a,n,k);
	CountingSort(a,n,k,b,kt);
	xuat(b,kt);
	cout <<"\n Gan: " << gan << " \n So sanh: " << ss << endl;
}
