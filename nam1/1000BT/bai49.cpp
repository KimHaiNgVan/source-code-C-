#include<iostream>
using namespace std;
int main()
{
	int dautien, n;

	do
	{
		cout << "Nhap n: ";
		cin >> n;
		if (n < 0)
		{
			cout << "Sai roi nhap lai:  ";
		}
	} while (n < 0);

		while (n > 0)
		{
			dautien = n % 10;
			n /= 10;
		}

		cout << "Dau tien la "<<dautien<<endl;

	return 0;
}