#include<iostream>
using namespace std;
int main()
{
	int a, b, c;
	cout << "A,B,C: ";
	cin >> a >> b >> c;
	if (a < 0) a = -a;
	if (b < 0) b = -b;
	if (c < 0) c = -c;
	cout << a << " " << b << " " << c << " .";
	return 0;
}