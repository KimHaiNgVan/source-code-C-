#include<iostream>
using namespace std;
int main()
{
	int n;
	int tong = 0;

	cout << "Nhap vao chu so n: ";
	cin >> n;
	cout << "Tong cac so le cua " << n;
	while (n > 0)
	{
		if (((n % 10) % 2) == 1)
			tong += (n % 10);

		n = n / 10;
	}
	cout << " la " << tong << endl;
	return 0;
}