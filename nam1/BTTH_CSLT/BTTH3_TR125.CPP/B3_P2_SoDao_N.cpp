#include<iostream>
using namespace std;
int main()
{
	int n = 0;

	cout << "Nhap vao so nguyen n: ";
	cin >> n;
	int sole = 0;
	int sdn = 0;
	while (n > 0)
	{
		sole = n % 10;
		sdn = sdn * 10 + sole;
		n /= 10;
	}
	cout << sdn;
	return 0;
}