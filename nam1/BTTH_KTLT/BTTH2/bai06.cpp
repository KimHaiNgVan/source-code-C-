#include<iostream>
using namespace std;
int s=0;
int sodaonguoc(int n, int s)
{
	if (n < 10)
		return s * 10 + n;
	else
	{
		s = s * 10 + n % 10;
		return sodaonguoc(n / 10, s);
	}
}
int main()
{
	int n, s=0 ;
	cout << "N: "; cin >> n;
	cout << "So dao nguoc la: " << sodaonguoc(n, s);
	return 0;
}