#include<iostream>
using namespace std;
int main()
{
	int i=1, n, lonnhat=0,usl=0;

	cout << "Nhap vao so nguyen duong n: ";
	cin >> n;

	while (i < n)
	{
		if ((n%i == 0) && (i % 2 == 1))
		{
			usl = i;
		}

		if (usl >= lonnhat)
		{
			lonnhat = usl;
		}
		i++;
	}

	cout << "Uoc so le lon nhat cua so nguyen duong la "<<lonnhat<<endl;
	return 0;
}