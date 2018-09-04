#include <iostream>
using namespace std;
int main()
{
	int i, j, a;
	cout << "Nhap vao canh a: ";
	cin >> a;
	for (i = 1; i <= a; i++)
	{
		for (j = 1; j <= a; j++)
			cout << "* ";
		cout << "\n";
	}

	return 0;
}