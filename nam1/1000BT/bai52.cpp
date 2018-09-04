#include<iostream>
using namespace std;
int main()
{
	int max=0, n;

	do
	{
		cout << "Nhap vao n: ";
		cin >> n;
		if (n < 0)
		{
			cout << "Sai roi. Nhap lai ";
		}
	} while (n < 0);
	int a = 0;
	while (n > 0)
	{
		a = n % 10;
		if (a > max)
			max = a;
		n /= 10;
	}

	cout << "Chu so lon nhat cua n la " << max << endl;
	return 0;
}
