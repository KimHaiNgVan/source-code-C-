#include<iostream>
using namespace std;
int main()
{
	int i=1, n, tong = 0;
	cout << "Nhap vao n: ";
	cin >> n;

	while (i >= 1 && i < n)
	{
		tong += i;
		i++;
	}
	cout <<"Tong cac so tu 1 den "<< n <<" la: "<<  tong<<endl;

	return 0;
}