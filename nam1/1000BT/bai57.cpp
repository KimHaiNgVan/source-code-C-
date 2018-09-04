#include<iostream>
using namespace std;
int main()
{
	int n, sole,a;
	bool checksole = true;

	cout << "Nhap vao so nguyen n: ";
	cin >> n;

	while (n > 0)
	{
		a = n % 10;
		if (a % 2 == 0)
		{
			checksole = false;
		}
		n /= 10;
	}

	if (checksole)
	{
		cout << "So nguyen n co toan so le "<<endl;
	}
	else cout << "So nguyen n khong co  toan so le "<<endl;
	return 0;
}