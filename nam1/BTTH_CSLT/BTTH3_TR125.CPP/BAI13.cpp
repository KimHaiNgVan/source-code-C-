#include<iostream>
using namespace std;
double cauA(int a, int b);
double cauB(double a, double b);
int main()
{
	int n, x;
	
	cout << "Nhap vao so nguyen x: ";
	cin >> x;
	cout << "Nhap vao so mu n: ";
	cin >> n;
	cout << "Dap an cau A la: "<<cauA(x,n)<<endl;
	cout << "Dap an cau B la: "<<cauB(x,n)<<endl;
	return 0;
}
double cauA(int a, int b)
{
	int tong = 1;
	for (int i = 1; i <= b; i++)
	{
		int tich = 1;
		for (int j = 1; j <= i; j++)
		{
			tich *= a;
			
		}
		tong += tich;
	}
	return tong;
}
double cauB(double a, double b)
{
	double tong = 1; double tich = 1.0; double luythua = 1; double c = 0;
	for (int i = 1; i <= b; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			tich *= a;
		}
		for (int h = 1; h <= i; h++)
		{
			luythua *= h;
		}
		c = tich / luythua;
		tong += c;
		
	}return tong;
}