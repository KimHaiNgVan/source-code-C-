#include <iostream>
using namespace std;
int main()
{
	const int  luongcb = 650;
	int thang;
	double hs, luong;

	cout << "Nhap vao so thang: ";
	cin >> thang;

	if (thang < 12) hs = 1.92;
	else if (thang < 36) hs = 2.34;
	else if (thang < 60) hs = 3;
	else hs = 4.5;
	
	luong = luongcb*hs;
	cout << "Luong la: " << luong;
	return 0;
}