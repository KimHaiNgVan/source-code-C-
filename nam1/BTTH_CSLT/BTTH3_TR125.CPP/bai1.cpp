#include<iostream>
using namespace std;
int main()
{
	int n=0,tong=0,i=1;

	cout <<"Nhap vao so nguyen duong n: ";
	cin >>n;

	while(i<n)
	{
		tong +=i;
		i++;
	}

	cout <<"Tong tu 1 den "<<n <<" la "<< tong<<endl;

	return 0;
}