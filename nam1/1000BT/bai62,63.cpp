#include<iostream>
using namespace std;
int ucln1(int a, int b)
{
	int ucln;
	while (a != 0 && b != 0)
	{
		if (a > b)
			a -= b;
		 if (b > a)
			b -= a;
	}
	if (a == 0)
		ucln = b;
	 if (b == 0)
		ucln = a;
	return ucln;
}

int main()
{
	int x,y,tich,bcnn=0,ucln=0;

	
	cout << "X la : "; cin >> x;
	cout << "Y la : "; cin >> y;

	tich = x*y;

	cout << "Uoc chung lon nhat la: "<<ucln1(x,y)<<endl;
	bcnn = tich / ucln1(x,y);

	cout << "Boi chung nho nhat cua 2 so la " << bcnn << endl;
	return 0;
}
