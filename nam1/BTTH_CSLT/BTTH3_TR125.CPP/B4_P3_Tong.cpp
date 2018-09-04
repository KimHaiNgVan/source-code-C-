#include<iostream>
using namespace std;
int main()
{
	int n, tong = 0,i,dem=0,i1;

	cout << "Nhap vao so nguyen n : ";
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		cout << "So thu " << i<<" ";
		cin >> i1;
		tong += i1;
	}
	cout << "Tong "<<n <<" so la : "<<tong<<endl;
	return 0;
}