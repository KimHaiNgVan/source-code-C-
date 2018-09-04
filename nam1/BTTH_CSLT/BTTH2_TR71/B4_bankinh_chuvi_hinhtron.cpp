#include <iostream>
using namespace std;
int main()
{
	int bk;
	double cv, dt;
	const double pi = 3.14;

	cout << "Ban kinh hinh tron la: ";
	cin >> bk;

	cv = 2 * pi*bk;
	dt = bk*bk*pi;

	cout << "Chu vi hinh tron: "<<cv<<endl;
	cout << "Dien tich hinh tron: "<<dt<<endl;
	return 0;
}