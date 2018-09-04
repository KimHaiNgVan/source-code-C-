#include<iostream>
using namespace std;
int tinhtongchan(int n,int tong)
{
	if (n == 0)
		return tong;
	else if ((n % 10) % 2 == 0) return (n%10)+tinhtongchan(n / 10, tong);
	return tinhtongchan(n / 10, tong);
}
int main()
{
	int n, tong = 0;
	cout << "Nhap vao so N: "; cin >> n;
	cout << "Tong cac so chan trong so tren la: " << tinhtongchan(n, tong)<<endl;
	return 0;
}