#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double a,s, b, c, p;

	cout << "Ba canh cua tam giac la: ";
	cin >> a >> b >> c;

	p = (a + b + c) / 2;
	s = sqrt(p*(p - a)*(p - b)*(p - c));

	cout << "Dien tich cua tam giac la: "<<s<<endl;

	return 0;
}