#include<iostream>
using namespace std;
int main()
{
	int n,dem=0;

	cout << "Nhap vao so nguyen n: ";
	cin >> n;

	while (n > 0)
	{
		n /= 10;
		dem++;
	}
	cout << "So chu so cua n la "<<dem;
	return 0;
}