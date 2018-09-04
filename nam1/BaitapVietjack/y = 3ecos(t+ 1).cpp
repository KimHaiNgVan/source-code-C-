#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	double y,t;

	cout << "Nhap vao so thuc t: ";
	cin >> t;
	
	y = 3 * exp(cos(t + 1));
	cout << "Gia tri cua bieu thuc la: " << y;
	
	return 0;
}