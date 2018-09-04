#include <iostream>
using namespace std;
int main()
{
	int nam;

	cout << "Nhap vao so nam can kiem tra: ";
	cin >> nam;

	if ((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0))
		cout << "Day la nam nhuan";
	else cout << "Day ko phai la nam nhuan ";

	return 0;
}