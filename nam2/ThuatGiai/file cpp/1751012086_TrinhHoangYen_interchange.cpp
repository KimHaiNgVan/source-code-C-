#include <iostream>
using namespace std;
#define max 100
int sosanh = 0, gan = 0, hoanvi = 0;
void interchangeSort(int a[], int n)
{
	gan++;
	sosanh++;
	for(int i = 0; i < n-1; i++)
	{
		sosanh++;
		gan++;
		for(int j = i+1; j < n; j++)
		{
			gan++;
			sosanh++;
			if( a[i] > a[j])
			{
				sosanh++;
				swap(a[i], a[j]);
				hoanvi++;
			}
			else
				sosanh++;
		}
	}
}

void nhap(int a[], int n)
{
	for( int i = 0; i < n ; i++)
	{
		cout <<"a[" << i <<"] = ";
		cin >> a[i];
	}
}
int main()
{
	int a[max];
	int n;
	cout <<"Nhap so phan tu cua mang: ";
	cin >> n;
	nhap(a,n);
	interchangeSort(a,n);
	cout <<"So phep so sanh la: " << sosanh <<endl <<"So phep gan la: "<< gan + 3*hoanvi << endl <<"So phep hoan vi la: "<< hoanvi << endl;
}
