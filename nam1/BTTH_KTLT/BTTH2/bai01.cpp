#include<iostream>
using namespace std;
int cauA(int n)
{
	if (n == 1)
		return 1;
	else return n + cauA(n - 1);
}
int cauB(int n)
{
	if (n == 1)
		return 1;
	else return (n*n) + cauB(n - 1);
}
double cauC(int n)
{
	if (n == 1)
		return 1;
	else return (1.0 / n) + cauC(n - 2);
}
double cauD_1(int n)
{
	if (n == 1)
		return 1;
	else return 1.0*n*(cauD_1(n - 1));
}
double cauD(int n)
{
	if (n == 1)
		return 1;
	else return cauD_1(n) + cauD(n - 1);
}
int main()
{
	int n;
	cout << "Nhap vao so nguyen n: ";
	cin >> n;
	cout << "Cau A: " << cauA(n) << endl;
	cout << "Cau B: " << cauB(n) << endl;
	cout << "Cau C: " << cauC(n) << endl;
	cout << "Cau D: " << cauD(n) << endl;
	return 0;
}