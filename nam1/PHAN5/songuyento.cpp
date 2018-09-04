#include <iostream>
#include<cmath>
using namespace std;
int main()
{
	int n=0,i=2;
	bool snt = true;

	cout << "Nhap vao so nguyen n: ";
	cin >> n;

	while (i <= sqrt(1.0*n))
	{
		if (n&i == 0)
			snt = false;
		
		i++;
	}
	if (snt)
		cout  << " La so nguyen to " << endl;
	else
		cout << " Khong la so nguyen to " << endl;
	
	return 0;
}