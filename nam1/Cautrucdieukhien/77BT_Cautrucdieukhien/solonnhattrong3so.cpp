#include <iostream>
using namespace std;
int main()
{
	int a, b, c;


	cout << "Nhap vao 3 so a,b,c: " << endl;
	cin >> a >> b >> c;

	if (a > b && a > c) cout << "a lon nhat";
	else if (b > c && b > a) cout << "b lon nhat";
	else cout << "c lon nhat ";
	return 0;
}
