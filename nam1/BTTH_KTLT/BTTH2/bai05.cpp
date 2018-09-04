#include<iostream>
using namespace std;
int dem(int n)
{
	if (n < 10)
		return 1;
	else return 1 + dem(n / 10);
}
int main()
{
	int n;
	cout << "Nhap N: "; cin >> n;
	cout << "So chu so cua N la: " << dem(n) << endl;
	return 0;
}