#include<iostream>
using namespace std;
int luythua(int x, int y)
{
	if (y == 0)
		return 1;
	else return x*luythua(x, y - 1);
}
int main()
{
	int x,y;
	cout << "Nhap vao x va y: "; cin >> x >> y;
	cout << "Luy thua la: " << luythua(x, y) << endl;
	return 0;
}