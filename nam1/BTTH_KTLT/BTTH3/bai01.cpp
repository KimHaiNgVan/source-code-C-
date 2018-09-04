#include<iostream>
using namespace std;
int main()
{
	int x, y;
	int *p;
	p = &x;
	*p = 80;
	cout << "Dia chi cua bien x la: " << &x<<endl;
	cout << "Dia chi luu tru cua p la: " << p<<endl;
	cout << "Gia tri ma con tro p tro den la: " << *p << endl;
	cout << "Gia tri cua bien x la: " << x;
	return 0;
}