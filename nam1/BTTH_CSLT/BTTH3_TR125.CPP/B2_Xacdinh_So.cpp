#include <iostream>
using namespace std;
int main()
{
	int n;

	cout << "Nhap vao 1 so bat ky: ";
	cin >> n;

	if (n > 0)
		cout << "So duong \n";
	else if (n < 0)
		cout << "So am \n";
	else
		cout << "Day la so 0 \n";

	return 0;
}