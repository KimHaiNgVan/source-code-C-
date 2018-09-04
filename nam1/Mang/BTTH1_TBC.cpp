#include<iostream>
using namespace std;

void nhapmang(int a[], int &n)
{
	cout << "Nhap kich thuoc mang: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "]=";
		cin >> a[i];
	}
}
void xuatmang(int a[],int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "	" << a[i];
	}
}
void TBC(int a[], int n, double &duongtbc, double &amtbc)
{
	int demduong = 0, demam = 0, tongam = 0, tongduong = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] < 0)
		{
			tongam += a[i];
			demam++;
		}
		else if (a[i] > 0)
		{
			tongduong += a[i];
			demduong++;
		}
	}
	if (tongduong > 0)
	{
	duongtbc = (double)tongduong / demduong;
	}
	else
	{
		duongtbc = 0;
	}
	if (tongam < 0)
	{
		amtbc = (double)tongam / demam;
	}
	else
	{
		amtbc = 0;
	}
}
int main()
{
	
	int a[20],n;
	nhapmang(a, n);
	xuatmang(a, n);
	double am, duong;
	TBC(a, n, duong, am);
	if (duong > 0)
	{
		cout << "TBC so duong la " << duong << endl;
	}
	if(am<0) cout << "TBC so am la: "<<am<<endl;
	else  cout << "Khong co so duong va so am " << endl;
	return 0;
}