#include<iostream>
using namespace std;
int main()
{
	int n,tong=0;
	cout << "Nhap vao N: ";
	cin >> n;

	for (int i = 1; i <= n; i+=2)
	{
		tong += i;
	}
	cout << "Tong cac so le la: " << tong << endl;
	return 0;
}