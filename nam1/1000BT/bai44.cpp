#include<iostream>
using namespace std;
int main()
{
	int  n, tong=0,cs;

	cout << "Nhap vao so nguyen n "; cin >> n;
	while (n > 0)
	{
		cs = n % 10;
		tong =tong + cs;
		n /= 10;
	}

	cout << "Tong cac chu so cua n la  "<<tong<<endl;
	return 0;
}