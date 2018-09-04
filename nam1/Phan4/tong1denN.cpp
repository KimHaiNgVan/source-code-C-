#include <iostream>
using namespace std;
int main()
{
	int n, i, tong = 0;
	cout << "Nhap vao so n: ";
	cin >> n;
	for (i=0;i<=n;i++)
	{
		cout << i << endl;
		tong += i;

	}
	cout << "Tong cac so tu 1 den "<<n<<" la "<<tong<<endl;
	return 0;
}