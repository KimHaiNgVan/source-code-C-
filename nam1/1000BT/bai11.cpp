#include <iostream>
using namespace std;
int main()
{
	int n, tong=0, tich=1;

	cout << "Nhap vao so nguyen n: "; cin >> n;

	for (int i = 1; i <= n; i++)
	{
	
		tich *= i;
		tong += tich;
	}

	cout << "Ket qua la "<<tong<<endl;
	return 0;
}