#include<iostream>
using namespace std;
int main()
{
	int x, fx;
	cout << "X: "; cin >> x;

	if (x >= 5)
	{
		fx = 2 * x*x + 5 * x + 9;
	}
	else fx = -2 * x*x + 4 * x - 9;

	cout << "Ham so: " << fx << endl;
	return 0;
}