#include<iostream>
using namespace std;
int main()
{
	int n;
	double tong = 0.0;
	cout << "N: "; cin >> n;

	for (int i = 1; i <= n; i++)
	{
	 tong += (1.0 / i);
	}

	cout << "Tong la " << 1.0* tong;
	return 0;
}