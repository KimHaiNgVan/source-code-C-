/*#include<iostream>
using namespace std;
double cauA(int a);
double cauB(int a);
double cauC(int a);

int main()
{
	int n;
	do
	{
		cout << "Nhap vao so nguyen n: ";
		cin >>n;
		if (n < 0)
			cout << "Sai roi "<<endl;
	} while (n < 0);

	cout << "Dap an cau A la: " << cauA(n) << endl;
	cout << "Dap an cau B la: " << cauB(n) << endl;
	cout << "Dap an cau C la: " << cauC(n) << endl;
	return 0;
}
double cauA(int a)
{
	double tong = 0;
	for (int i = 1; i <= a; i++)
	{
		tong += 1 / i;
	}
	return tong;
}
double cauB(int a)
{
	double tong=0 ;
	for (int i = 1; i <= a; i++)
	{
		tong += 1 / (2 * i);
	}
	return tong;
}
double cauC(int a)
{
	double tong = 0;
	for (int i = 1; i <= a; i++)
	{
		tong += (1 / ((2 * i) - 1));
	}
	return tong;
}*/
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n: "; cin >> n;
	long double tong = 0;
	for (int i = 1; i <= n; i++)
	{
		tong += (1 / i);
	}
	cout << tong;
	return 0;
}