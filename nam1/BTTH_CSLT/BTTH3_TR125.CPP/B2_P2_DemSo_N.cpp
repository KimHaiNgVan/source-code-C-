#include<iostream>
using namespace std;
int main()
{
	int n;
	
	cout << "Nhap vao so nguyen n: ";
	cin >> n;
	int dem = 0;
	do
	{
		n % 10;
		dem++;
		n=n / 10;
	} while (abs(n) > 0);
	
	
	cout << " N co " << dem << " chu so "<<endl;
	return 0;
}