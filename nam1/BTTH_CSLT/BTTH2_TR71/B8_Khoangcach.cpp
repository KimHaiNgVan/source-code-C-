#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double x1, x2, y1, y2, d;

	cout << "Nhap vao toa do diem A: ";
		cin >> x1 >> y1;
		cout << "Nhap vao toa do diem B: ";
		cin >> x2 >> y2;

		d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

		cout <<fixed<<setprecision(2)<< "Khoang  cach giua 2 diem A va B la: " << d << endl;

	return 0;
}