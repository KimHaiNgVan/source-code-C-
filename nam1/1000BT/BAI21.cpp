#include<iostream>
using namespace std;
int main()
{
	int n,tong=0,uocso;

	cout << "So nguyen duong n la: ";
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		if (n%i == 0)
		{
			cout << "Uoc so cua n la " << i << endl;
			tong += i;
		}
	}
	cout << "Tong cua uoc so la "<<tong<<endl;
	return 0;
}

		