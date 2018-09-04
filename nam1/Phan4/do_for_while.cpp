#include <iostream>
using namespace std ;
int main()
{
	int i, n, sum = 0;
	i = 1;
	cout << "nhap vao n: ";
	cin >> n;
	while (i <= n)
	{
		sum += i;
		i++;
	}
	cout << sum;
	return 0;
}
