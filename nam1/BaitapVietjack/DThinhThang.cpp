#include <iostream>
using namespace std;
int main()
{
	double h, b, DT, a;

	cout << "Nhap vao day lon cua hinh thang: \n";
	cin >> a;
	cout << "Nhap vao day nho cua hinh thang: \n";
	cin >> b;
	cout << "Nhap vao chieu cao cua hinh thang: \n";
	cin >> h;

	DT = 0.5*h*(a + b);

	if (a <= 0 || b <= 0 || h <= 0)
	{
		cout << "Khong thoa man dieu kien !!!";
		return 1;
	}

	cout << "Dien tich cua hinh thang la: "<<DT;
	return 0;
}