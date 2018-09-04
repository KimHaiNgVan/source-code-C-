#include <iostream>
using namespace std;
int main()
{
	int m, n, ucln;
	cout << "Nhap vao 2 so m,n: ";
	cin >> m >> n;
	int tich = m*n;
	//giai thuat
	while (m != 0 && n != 0)
		{
			if (n > m)
				n -= m;
			else
				m -= n;
		}
		if (n == 0)
			ucln = m;
		else
			ucln = n;
		cout << "Uoc chung lon nhat cua m va n: " << ucln<< endl;
		cout << "Boi chung nho nhat cua m va n: " << tich / ucln <<endl;
	return 0;
}