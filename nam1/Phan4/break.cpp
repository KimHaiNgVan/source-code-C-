#include <iostream>
using namespace std;
int main()
{
	int password, n,i;
	cout << "Nhap vao so nguyen: ";
	cin >> n;
	
	for (i = 0; i < n; i++ )
	{

		cout << "Nhap mat khau: ";
		cin >> password;
		if (password == 1) break;
		cout << "Mat khau sai ";
	}
	return 0;
}