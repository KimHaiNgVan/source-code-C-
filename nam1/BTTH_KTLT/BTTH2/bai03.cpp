#include<iostream>
using namespace std;
int tinhFibonaaci(int n)
{
	if (n == 1)
		return 0;
	else if (n == 2)
		return 1;
	else if (n == 3)
		return 1;
	else return tinhFibonaaci(n - 1) + tinhFibonaaci(n - 2);
}
int main()
{
	int n;
	cout << "Nhap so nguyen N: "; cin >> n;
	cout << "Gia tri fibonacci cua so nguyen n: " << tinhFibonaaci(n);
	return 0;
}