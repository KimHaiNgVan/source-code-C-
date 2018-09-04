#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int s1 = 0, s2 = 0, s3 = 1, n ;
	float s4 = 0.0;
	cout << "Nhap vao so nguyen n: ";
	cin >> n;

	for (int i = 1; i <= n; i++)
	{

		s1 += i;
	}
	cout << s1 << endl;

	for (int i = 1; i <= (2 * n + 1); i += 2)
	{
		s2 += i;
	}
	cout << s2 << endl;

	for (int i = 1; i <= n; i++)
	{
		s3 *= i;
	}
	cout << fixed << precision(1) << s3<<endl;

	for (int i = 2; i <= (1 / (n*(n + 1))); i++)
	{
		s4 += (1 / (i*(i + 1)));
	}
	cout << s4 << endl;
	return 0;
}