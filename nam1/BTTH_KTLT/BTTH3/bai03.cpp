#include<iostream>
using namespace std;
int main()
{
	int *p1, *p2,a,b;
	cout << "a: "; cin >> a;
	cout << "b: "; cin >> b;
	p1 = &a;
	p2 = &b;
	while (*p2!=0)
	{
		int d = *p1 % *p2;
		*p1 = *p2;
		*p2 = d;
	}
	
	cout << "Uoc so chung lon nhat cua a va b la: " << *p1 << "\t" << endl;
	return 0;
}