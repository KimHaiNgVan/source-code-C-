#include <iostream>
using namespace std;
int main()
{
	int n;

	cout << "Nhap vao so nguyen n: \n";
	cin >> n;

	if (n % 2 == 0)
		cout << "So chan " << endl;
	else cout << "So le \n";
	return 0;
}
