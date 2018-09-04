#include <iostream>
using namespace std;
int main()
{
	int n, i;
	double tich = 1.0;

	cout << "Nhap vao so nguyen n: "; cin >> n;

	for (int  i = 1; i <= n; i++)
	{
		tich *= i*1.0;
	}
	cout << "Tich cua phuong trinh la " << tich << endl;
	return 0;
}