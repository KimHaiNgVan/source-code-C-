#include <iostream>
using namespace std;
int main()
{
	int n, i;
	double ketqua = 1.0;

	cout << "Nhap vao so nguyen n: "; cin >> n;
	cout << "Nhap vao so i "; cin >> i;

	ketqua=pow(i, n);
	cout << "Ket qua la " << ketqua;
	return 0;
}