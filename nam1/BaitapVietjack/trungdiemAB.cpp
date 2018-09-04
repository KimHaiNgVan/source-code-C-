#include <iostream>
using namespace std;
int main()
{
	double xA, xB, yA, yB,x,y;

	cout << "Nhap vao lan luot hoanh do, tung do diem A: " << endl;
	cin >> xA;
	cin >> yA;
	cout << "Nhap vao lan luot hoanh do, tung do diem B: " << endl;
	cin >> xB;
	cin >> yB;

	x = (xA + xB) / 2;
	y = (yA + yB) / 2;

	cout << "Tung do cua trung diem la: " << x<<endl;
	cout << "Hoanh do cua trung diem la: "<< y<<endl;

	return 0;
}