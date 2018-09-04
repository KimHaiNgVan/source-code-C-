#include<iostream>
using namespace std;
void nhap(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]=";
		cin >> a[i];
	}
}
bool laSCP(int n)
{
	bool laSCP = false;
	if ((double)sqrt((double)n) == (int)sqrt((double)n))
	{
		laSCP = true;
	}
	return laSCP;
}

void tinhTongSCP(int a[], int n)
{
	int tong = 0;
	for (int i = 0; i < n; i++)
	{
		if (laSCP(a[i]) == true)
		{
			tong += a[i];
		}
	}
	cout << "Tong cac so chinh phuong la: " << tong << endl;
}
int main()
{
	int a[50], n;
	cout << "Kich thuoc: "; cin >> n;
	nhap(a, n);
	tinhTongSCP(a, n);
	return 0;
}