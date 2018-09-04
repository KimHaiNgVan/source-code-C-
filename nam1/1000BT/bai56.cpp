#include<iostream>
using namespace std;
int main()
{
	int n;
	do {

		cout << "Nhap vao so nguyen n: ";
		cin >> n;
		if (n < 0) cout << "sai roi nhap lai ";
	} while (n < 0);

	int a = 0;
	while (n > 0)
	{
		a = n % 10;
		if (a % 2 == 0) {
			cout << "Chu so nguyen n khong co toan so le "<<endl;
			return 0;
		}
		n /= 10;
	}
	cout << "Chu so nguyen n toan so le "<<endl;

	return 0;
}