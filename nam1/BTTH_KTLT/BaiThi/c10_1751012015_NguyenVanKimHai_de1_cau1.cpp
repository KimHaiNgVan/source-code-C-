#include<iostream>
using namespace std;
double cau1(int n)
{
	if (n == 1)
		return 1.0;
	else return (1.0 / n) + cau1(n - 1);
}
int main()
{
	int n;
	do {
		cout << "N: "; cin >> n;
		if (n <= 0)
			cout << "Sai roi. nhap lai!\n";
	} while (n <= 0);
	cout << "Dap an cau 1: " << cau1(n) << endl;
	return 0;
}