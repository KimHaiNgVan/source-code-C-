#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n,b;

	cout << "Nhap vao so nguyen n: ";
	cin >> n;

	
	if (sqrt((double)n) == (int) sqrt((double)n))
		cout << "Day la so nguyen to ";
	else
		cout << "Day ko phai la so nguyen to ";
	return 0;
}