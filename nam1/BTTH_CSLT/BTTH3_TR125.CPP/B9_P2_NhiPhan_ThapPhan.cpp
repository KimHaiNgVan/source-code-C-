#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n,tong=0,chuso,i=0,dem=1,bien;

	cout << "Nhap vao so nhi phan: ";
	cin >> n;

	bien = n;
	while (bien > 0)
	{
		bien = bien / 10;
		dem++;
	}
	while (i<=(dem-1))
	{
		int chuso = 0;
		chuso = n % 10;
		tong +=  (chuso * pow(2,i));
		n /= 10;
		i++;
	}
	cout << "Tong la: "<<tong<<endl;
	return 0;
}