#include <iostream>
using namespace std;
int main()
{
	int gt=1, i, n, S;

	cout << "Nhap vao so n: "; 
	cin >> n;

	S = n % 2;

	if (S ==0)
	{
		for (i = 2; i <= n; i+=2)
		{
			gt *= i;
			
		}
	}
	if (S == 1)
	{
		
		for (i = 1; i <= n; i+=2)
		{
			gt *= i;
			
		}
	}
	cout << gt;
	return 0;
}