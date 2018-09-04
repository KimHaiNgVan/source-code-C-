#include <iostream>
using namespace std;
int main()
{
	int n, i, x;
	double tong = 0.0;
	int tich = 1.0;

	cout << "Nhap vao so nguyen n: "; cin >> n;
	
	for (int i = 1; i <= n; i++)
	{
		tich += i;
		tong += 1.0/(1.0*tich);
	}
	cout << "Tong cua phuong trinh la " << tong << endl;
	return 0;
}