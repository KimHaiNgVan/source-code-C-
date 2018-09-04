#include <iostream>
using namespace std;
int main()
{
	int n, snt,i;
	cout << "Nhap vao So Nguyen To n: ";
	cin >> n;
	for (i = 2; i <= sqrt((double)n); i++)
	{
		if (n%i == 0) 
			cout << i << "ko la so nguyen to" << endl;
		else
			cout << i << "la so nguyen to" << endl;
	}
	return 0;
}