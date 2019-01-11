#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
	const int M = 100;
	int a[M];
	double n;
	int vitri, x;
	cout << "nhap n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % 10;
		cout << "so phan tu trong mang: " << a[i] << endl;
	}
	cout << "nhap gia tri can them: ";
	cin >> x;
	cout << "nhap vi tri can them: ";
	cin >> vitri;
	cout << "mang sau khi them: " << endl;
	
	if (vitri >= 0 && vitri < n)
	{
		cout << n << endl;
		n++;
		for (int i = n; i > vitri; i--)
			a[i] = a[i - 1];
		a[vitri] = x;
		
		cout << n << endl;
	}
	
	for (int i = 0; i < n; i++)
		cout << "so phan tu trong mang: " << a[i] << endl;
	system("pause");
	return 0;
}