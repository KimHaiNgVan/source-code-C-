
//Viết chương trình tìm ước chung lớn nhất, bội chung nhỏ nhất của 2 số nguyên M, N nhập từ bàn phím. 
#include<iostream>
using namespace std;
int main()
{
	int m, n,ucln;
	
	cout << "Nhap vao 2 so m va n: " << endl;
	cin >> m >> n;

	int tich = m*n;

	if (m == n)
		ucln = m;
		
	while (m != 0 && n != 0)
	{
		if (m < n)
		
			n -= m;
		else
			m -= n;
	}
	if (m == 0)
		ucln = n;
	else 
		ucln = m;
	
	int bcnn = tich / ucln;

	cout << "Uoc chung lon nhat cua m va n la: " << ucln << endl;
	cout << "Boi chung nho nhat cua m va n la: " << bcnn << endl;

	return 0;
}