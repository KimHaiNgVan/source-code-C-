#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Nhap vao so nguyen n "<<endl;
	cin >> n;

	for (int i = 1; i <= 16; i++)
	{
		cout << n << " * " << i << " = " << i*n<< endl ;
	}
	return 0;
}