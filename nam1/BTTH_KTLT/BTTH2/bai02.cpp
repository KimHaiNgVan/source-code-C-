#include<iostream>
using namespace std;
int giaithua(int n)
{
	if (n == 1)
		return 1;
	else return n*giaithua(n - 1);
}
int main()
{
	int n;
	cout << "Nhap vao so nguyen ko am: "; cin >> n;
	cout << "Giai thua cua N la: " << giaithua(n) << endl;
	return 0;
}