#include<iostream>
using namespace std;
int main()
{
	int n, dem = 0;
	cout << "Nhap vao so nguyen n: "; cin >> n;
	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0) dem++;
	}
	cout << "So uoc so cua n: " << dem << endl;
	return 0;
}