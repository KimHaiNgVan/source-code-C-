#include<iostream>
using namespace std;
void nhapmang(int a[], int &n)
{
	cout << "Nhap vao so phan tu cua mang: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "A[" << i << "]=";
		cin >> a[i];
	}
}

void xuatmang(int a[], int &n)
{
	for (int i=0;i< n;i++)
	cout << a[i] << "		";
}

void ktraX(int a[], int &n,int x)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] == x)
		{
			dem++;
		}
	}
	
	if(dem !=0) cout << x << " lap lai " << dem << " lan."<<endl;
}

void chenX(int a[], int &n, int x)
{

}
int main()
{	
	int x = 0, n,a[20];
	nhapmang(a, n);
	xuatmang(a, n);
	cout << "\n Nhap vao so nguyen X: ";
	cin >> x;
	ktraX(a, n, x);

}