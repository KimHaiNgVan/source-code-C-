#include <iostream> //tong cac s
using namespace std;
int main()
{
	int n, sum = 0;
	do
	{
		cout << "nhap vao so nguyen : ";
		cin >> n;
		if (n < 0) continue;
		sum += n;
	} while (n != 0);
	cout << "Tong la " << sum;
	return 0;
}