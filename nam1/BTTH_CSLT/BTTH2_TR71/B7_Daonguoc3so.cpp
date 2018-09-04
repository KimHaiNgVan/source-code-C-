
#include <iostream>
using namespace std;
int main() 
{
	int t, c, dv, n;

	cout << "Nhap vao chu so n: ";
	cin >> n;

	t = n / 100;
	c = (n % 100) / 10;
	dv = (n % 100) % 10;

	cout << "So dao nguoc cua n la: " << dv << c << t<<endl;
	return 0;
 }