#include <iostream>
using namespace std;
int main()
{
	int n1,n2,tong=0;

	cout << "Nhap vao so nguyen n1: ";
	cin >> n1;
	cout << "Nhap vao so nguyen n2: ";
	cin >> n2;

	while (n1 < n2)
	{
		if (n1 % 2 == 1)
		{
			cout <<n1 <<endl;
		}
		else if (n1 % 2 == 0)
		{
			tong += n1;
		}
			n1  =n1+ 1;
	}

	cout << "Tong cac so chan la: " << tong << endl;
	return 0;
}