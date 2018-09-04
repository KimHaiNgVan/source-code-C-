#include<iostream>
using namespace std;
int main()
{
	int n,dem=0,chuso=0;

	cout <<"Nhap vao so nguyen n ";
	cin >>n;

	chuso=n;
	while(n>0)
	{
		dem++;
		n /=10;
	}

	cout <<chuso <<" co "<< dem<< " chu so "<<endl;
	return 0;
}