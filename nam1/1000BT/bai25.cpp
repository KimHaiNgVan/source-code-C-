#include<iostream>
using namespace std;
int main()
{
	int dem, n, usl;
	int tich=1;
	do {
		cout << "Nhap vao so nguyen duong n: "<<endl;
		cin >> n;
		if (n < 0)
		{
			cout << "Nhap sai. Xin nhap lai"<<endl;

		}
	} while (n < 0);

	for (int i = 1; i <= n; i++)
	{
		
		if (n%i == 0)
		{
			if (i % 2 == 0)
				tich+=i;
		}
	}
	cout << "So uoc chan la : " << tich;

	return 0;
}