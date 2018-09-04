#include<iostream>
using namespace std;
int main()
{
	int n, i;

	cout << "N: ";
	cin >> n;

	int tong = 0;
	for (int i = 1; i <= n; i++)
	{
		tong += i;
	}

	cout << "Tong la "<< tong<<endl;
	return 0;
}