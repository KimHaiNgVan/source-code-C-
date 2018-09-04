#include<iostream>
using namespace std;
int main()
{
	int n, dem=0;
	cout << "Nhap vao so nguyen n: ";
	cin >> n;
	while (n > 0)
	{
		n /= 10;
		dem++;
	}
	cout << "So luong chu so nguyen duong n: "<<dem<<endl;
	return 0;
}