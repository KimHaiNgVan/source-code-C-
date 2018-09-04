#include<iostream>
using namespace std;
int main()
{
	int n, sodaonguoc = 0, a = 0;

	do
	{
		cout << "Nhap vao so nguyen duong n: ";
		cin >> n;
		if (n < 0)
			cout << "Sai roi nhap lai di ";
	} while (n < 0);

	int chuso = n;
	while (n > 0)
	{
		a = n % 10;
		sodaonguoc = sodaonguoc * 10 + a;
		n /= 10;
	}

	if (sodaonguoc == chuso)
		cout << "Day la so doi xung " << endl;
	else cout << "Day ko phai la so doi xung " << endl;
	return 0;
}