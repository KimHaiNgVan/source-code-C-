#include<iostream>
using namespace std;
int main()
{
	int n, chucuoi, chukecuoi;
	cout << "Nhap vao chu so nguyen n: ";
	cin >> n;
	chucuoi = n % 10;
	n = n / 10;
	while (n > 0)
	{
		chukecuoi = n % 10;
		if (chukecuoi < chucuoi)
		{
			cout << "Chu so n ko giam dan tu trai sang phai "<<endl;
			return 0;
		}
		chukecuoi = chucuoi;
		n /= 10;
	}
	cout << "Chu so n giam dan tu trai sang phai ";
	return 0;
}